/*
 * XREFs of IoReleaseCancelSpinLock @ 0x1400DEBC0
 * Callers:
 *     VerifierIoReleaseCancelSpinLock @ 0x1406C080C (VerifierIoReleaseCancelSpinLock.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  unsigned __int64 v1; // rbx

  v1 = Irql;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 14);
  __writecr8(v1);
}
