/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x14021122C
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1402111E4 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436244u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = 0LL;
  *(_DWORD *)PoolWithTag = 0;
  PoolWithTag[2] = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v6 = off_1402F36C8[0];
  v7 = v3 + 3;
  if ( *(_UNKNOWN ***)off_1402F36C8[0] != &RtlpDebugPrintCallbackList )
    __fastfail(3u);
  v3[4] = off_1402F36C8[0];
  *v7 = &RtlpDebugPrintCallbackList;
  *v6 = v7;
  off_1402F36C8[0] = (_UNKNOWN **)(v3 + 3);
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  __writecr8(CurrentIrql);
  return 0LL;
}
