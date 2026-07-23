/*
 * XREFs of MiDeleteExtentPfns @ 0x1401ED3BC
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 */

void __fastcall MiDeleteExtentPfns(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  do
  {
    while ( qword_1403266B0 )
      MiRemovePhysicalMemory(0LL, 0LL, 50LL);
    v2 = ExAcquireSpinLockExclusive(&dword_1403266B8);
    v3 = qword_1403266B0;
    if ( !qword_1403266B0 )
    {
      if ( a1 )
        byte_1403266E0 = qword_1403266B0;
    }
    ExReleaseSpinLockExclusive(&dword_1403266B8, v2);
  }
  while ( v3 );
}
