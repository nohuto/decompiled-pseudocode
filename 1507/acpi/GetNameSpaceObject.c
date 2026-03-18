/*
 * XREFs of GetNameSpaceObject @ 0x1C000D6F8
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C000535C (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0005B60 (AMLIApplyNamespaceOverride.c)
 *     Load @ 0x1C0005E10 (Load.c)
 *     ParseAndGetNameSpaceObject @ 0x1C000C7C8 (ParseAndGetNameSpaceObject.c)
 *     Scope @ 0x1C0018800 (Scope.c)
 *     Field @ 0x1C001FF40 (Field.c)
 *     Alias @ 0x1C00214E0 (Alias.c)
 *     IndexField @ 0x1C0022320 (IndexField.c)
 *     Simulator_EvaluateNode @ 0x1C0042BD4 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0042E18 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0043288 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0043380 (AMLICreateNativeNamespaceObject.c)
 *     DebugExpr @ 0x1C0043998 (DebugExpr.c)
 *     DebugNotify @ 0x1C0043C40 (DebugNotify.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004484C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0044BC8 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C00453BC (ParseDLMObjectInternal.c)
 *     BankField @ 0x1C0045CD0 (BankField.c)
 *     LoadTable @ 0x1C0048080 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C0048AC0 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C000FF00 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
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
