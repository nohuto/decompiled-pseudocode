/*
 * XREFs of KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0
 * Callers:
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KiFlushQueueApc @ 0x14002AE20 (KiFlushQueueApc.c)
 *     KeTestAlertThread @ 0x14002B04C (KeTestAlertThread.c)
 *     KeRequestTerminationThread @ 0x140030C48 (KeRequestTerminationThread.c)
 *     KiDetachProcess @ 0x1400A6A30 (KiDetachProcess.c)
 *     KeAttachProcess @ 0x1400C7800 (KeAttachProcess.c)
 *     KeRemoveQueueApc @ 0x1400ED8E4 (KeRemoveQueueApc.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400F1340 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x140104FD4 (KeUpdateThreadTag.c)
 *     KeQueryActualAffinityThread @ 0x1401C2F6C (KeQueryActualAffinityThread.c)
 *     KeEnumerateQueueApc @ 0x1401C7740 (KeEnumerateQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1401C85D8 (KeQueryCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401C9B74 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireThreadLockRaiseToDpc(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = KeGetCurrentIrql();
  __writecr8(2uLL);
  *a2 = result;
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v4);
      result = *(_QWORD *)(a1 + 64);
    }
    while ( result );
  }
  return result;
}
