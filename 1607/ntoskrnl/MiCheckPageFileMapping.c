/*
 * XREFs of MiCheckPageFileMapping @ 0x1401433C0
 * Callers:
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdx

  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v2 = ExAcquireSpinLockExclusive(&dword_140326580);
  v3 = *(_QWORD **)(a1 + 40);
  if ( !v3 || !*v3 && !v3[2] )
  {
    ExReleaseSpinLockExclusive(&dword_140326580, v2);
    return 0LL;
  }
  ExReleaseSpinLockExclusive(&dword_140326580, v2);
  return 3221225549LL;
}
