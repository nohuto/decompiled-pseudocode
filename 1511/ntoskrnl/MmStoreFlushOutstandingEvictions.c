/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1401E5784
 * Callers:
 *     SmStoreCompressionStart @ 0x14051779C (SmStoreCompressionStart.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // al
  int v1; // edx
  KIRQL v2; // bl

  v0 = ExAcquireSpinLockExclusive(&dword_1403001E0);
  v1 = dword_140300180;
  v2 = v0;
  if ( !dword_140300180 )
  {
    KeResetEvent(&stru_1403001B0);
    v1 = dword_140300180;
  }
  dword_140300180 = v1 + 1;
  ExReleaseSpinLockExclusive(&dword_1403001E0, v2);
  KeSetEvent(&stru_140300198, 0, 0);
  return KeWaitForSingleObject(&stru_1403001B0, WrKernel, 0, 0, 0LL);
}
