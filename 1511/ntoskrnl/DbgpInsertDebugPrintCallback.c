/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x1401F785C
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1401F7814 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  _UNKNOWN ***v6; // rax
  _QWORD *v7; // rbx

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
  v6 = (_UNKNOWN ***)off_1402D1950[0];
  v7 = v3 + 3;
  v7[1] = off_1402D1950[0];
  *v7 = &RtlpDebugPrintCallbackList;
  if ( *v6 != &RtlpDebugPrintCallbackList )
    __fastfail(3u);
  *v6 = (_UNKNOWN **)v7;
  off_1402D1950[0] = (_UNKNOWN **)v7;
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  __writecr8(CurrentIrql);
  return 0LL;
}
