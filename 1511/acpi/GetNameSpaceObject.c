/*
 * XREFs of GetNameSpaceObject @ 0x1C000DDCC
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C00052C0 (CreateNativeNameSpaceObject.c)
 *     Scope @ 0x1C0005C00 (Scope.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0005F58 (AMLIApplyNamespaceOverride.c)
 *     Load @ 0x1C0006210 (Load.c)
 *     ParseAndGetNameSpaceObject @ 0x1C000CD58 (ParseAndGetNameSpaceObject.c)
 *     Field @ 0x1C0020510 (Field.c)
 *     Alias @ 0x1C0021CD0 (Alias.c)
 *     IndexField @ 0x1C0022AA0 (IndexField.c)
 *     Simulator_EvaluateNode @ 0x1C00425F4 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0042838 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0042CA8 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0042DA0 (AMLICreateNativeNamespaceObject.c)
 *     DebugExpr @ 0x1C00433B8 (DebugExpr.c)
 *     DebugNotify @ 0x1C0043660 (DebugNotify.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004426C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C00445E8 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C0044DEC (ParseDLMObjectInternal.c)
 *     BankField @ 0x1C0045710 (BankField.c)
 *     LoadTable @ 0x1C0047990 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C00483D0 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0010F50 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src)
{
  size_t v2; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v4; // bl
  unsigned int NameSpaceObjectNoLock; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = -1LL;
  do
    ++v2;
  while ( Src[v2] );
  if ( v2 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v2);
  PoolWithTag[v2] = 0;
  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return NameSpaceObjectNoLock;
}
