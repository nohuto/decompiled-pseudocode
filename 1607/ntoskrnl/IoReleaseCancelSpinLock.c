/*
 * XREFs of IoReleaseCancelSpinLock @ 0x140099D38
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  unsigned __int64 v1; // rbx

  v1 = Irql;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 14);
  __writecr8(v1);
}
