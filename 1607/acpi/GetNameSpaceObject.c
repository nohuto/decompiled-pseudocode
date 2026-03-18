/*
 * XREFs of GetNameSpaceObject @ 0x1C00140F8
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C0005530 (CreateNativeNameSpaceObject.c)
 *     Load @ 0x1C0006050 (Load.c)
 *     AMLIApplyNamespaceOverride @ 0x1C00067A0 (AMLIApplyNamespaceOverride.c)
 *     Scope @ 0x1C000C670 (Scope.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001EDE8 (ParseAndGetNameSpaceObject.c)
 *     Field @ 0x1C0026E10 (Field.c)
 *     Alias @ 0x1C0028AA0 (Alias.c)
 *     IndexField @ 0x1C0029B50 (IndexField.c)
 *     Simulator_EvaluateNode @ 0x1C0059C94 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0059F04 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C005A378 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005A470 (AMLICreateNativeNamespaceObject.c)
 *     DebugExpr @ 0x1C005AA88 (DebugExpr.c)
 *     DebugNotify @ 0x1C005AD30 (DebugNotify.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005BA04 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005BD70 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C005C5AC (ParseDLMObjectInternal.c)
 *     BankField @ 0x1C005CE00 (BankField.c)
 *     LoadTable @ 0x1C005F290 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C005FDA0 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0017B60 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
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
