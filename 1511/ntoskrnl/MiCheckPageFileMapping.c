/*
 * XREFs of MiCheckPageFileMapping @ 0x14013A194
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdx

  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v2 = ExAcquireSpinLockExclusive(&dword_1402FE280);
  v3 = *(_QWORD **)(a1 + 40);
  if ( !v3 || !*v3 && !v3[2] )
  {
    ExReleaseSpinLockExclusive(&dword_1402FE280, v2);
    return 0LL;
  }
  ExReleaseSpinLockExclusive(&dword_1402FE280, v2);
  return 3221225549LL;
}
