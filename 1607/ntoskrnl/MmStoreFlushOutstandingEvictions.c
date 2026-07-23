/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1401F4C7C
 * Callers:
 *     SmStoreCompressionStart @ 0x14054C2A8 (SmStoreCompressionStart.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // al
  int v1; // edx
  KIRQL v2; // bl

  v0 = ExAcquireSpinLockExclusive(&dword_140323A10);
  v1 = dword_1403239B0;
  v2 = v0;
  if ( !dword_1403239B0 )
  {
    KeResetEvent(&stru_1403239E0);
    v1 = dword_1403239B0;
  }
  dword_1403239B0 = v1 + 1;
  ExReleaseSpinLockExclusive(&dword_140323A10, v2);
  KeSetEvent(&stru_1403239C8, 0, 0);
  return KeWaitForSingleObject(&stru_1403239E0, WrKernel, 0, 0, 0LL);
}
