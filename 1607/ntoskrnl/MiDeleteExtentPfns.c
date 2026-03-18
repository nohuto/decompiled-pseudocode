/*
 * XREFs of MiDeleteExtentPfns @ 0x1401ED590
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 */

void __fastcall MiDeleteExtentPfns(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  do
  {
    while ( qword_140326670 )
      MiRemovePhysicalMemory(0LL, 0LL, 50LL);
    v2 = ExAcquireSpinLockExclusive(&dword_140326678);
    v3 = qword_140326670;
    if ( !qword_140326670 )
    {
      if ( a1 )
        byte_1403266A0 = qword_140326670;
    }
    ExReleaseSpinLockExclusive(&dword_140326678, v2);
  }
  while ( v3 );
}
