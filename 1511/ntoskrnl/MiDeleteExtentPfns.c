/*
 * XREFs of MiDeleteExtentPfns @ 0x1401E349C
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 */

void __fastcall MiDeleteExtentPfns(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  do
  {
    while ( qword_1402FE3A8 )
      MiRemovePhysicalMemory(0LL, 0LL, 50LL);
    v2 = ExAcquireSpinLockExclusive(&dword_1402FE3B0);
    v3 = qword_1402FE3A8;
    if ( !qword_1402FE3A8 )
    {
      if ( a1 )
        byte_1402FE3D8 = qword_1402FE3A8;
    }
    ExReleaseSpinLockExclusive(&dword_1402FE3B0, v2);
  }
  while ( v3 );
}
