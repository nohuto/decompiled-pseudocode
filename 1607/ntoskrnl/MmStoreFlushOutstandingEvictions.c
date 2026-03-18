/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1401F4E50
 * Callers:
 *     SmStoreCompressionStart @ 0x14054BD68 (SmStoreCompressionStart.c)
 * Callees:
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // al
  int v1; // edx
  KIRQL v2; // bl

  v0 = ExAcquireSpinLockExclusive(&dword_1403239D0);
  v1 = dword_140323970;
  v2 = v0;
  if ( !dword_140323970 )
  {
    KeResetEvent(&stru_1403239A0);
    v1 = dword_140323970;
  }
  dword_140323970 = v1 + 1;
  ExReleaseSpinLockExclusive(&dword_1403239D0, v2);
  KeSetEvent(&stru_140323988, 0, 0);
  return KeWaitForSingleObject(&stru_1403239A0, WrKernel, 0, 0, 0LL);
}
