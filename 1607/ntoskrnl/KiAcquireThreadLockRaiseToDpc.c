/*
 * XREFs of KiAcquireThreadLockRaiseToDpc @ 0x1400CEDEC
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140095D3C (KeQueryTotalCycleTimeThread.c)
 *     KeAttachProcess @ 0x1400ADF38 (KeAttachProcess.c)
 *     KeRemoveQueueApc @ 0x1400AF37C (KeRemoveQueueApc.c)
 *     KeRequestTerminationThread @ 0x1400C9DE0 (KeRequestTerminationThread.c)
 *     KiSchedulerApc @ 0x1400CB720 (KiSchedulerApc.c)
 *     KiFlushQueueApc @ 0x1400CBB54 (KiFlushQueueApc.c)
 *     KeTestAlertThread @ 0x1400CD08C (KeTestAlertThread.c)
 *     KeStackAttachProcess @ 0x1400CD110 (KeStackAttachProcess.c)
 *     KiDetachProcess @ 0x1400CE460 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     KeUpdateThreadTag @ 0x14010D1D8 (KeUpdateThreadTag.c)
 *     KeQueryActualAffinityThread @ 0x1401D2CA0 (KeQueryActualAffinityThread.c)
 *     KeEnumerateQueueApc @ 0x1401D66EC (KeEnumerateQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1401D7698 (KeQueryCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8354 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireThreadLockRaiseToDpc(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  *a2 = result;
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
