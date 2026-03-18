/*
 * XREFs of MiFreeReservationRun @ 0x1404D05A4
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x1403B5964 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1404D0560 (MiFreeReservationRuns.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiFreeReservationRun(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // ecx
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 8) )
  {
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      v4 = *(_QWORD *)a2;
      v5 = --*(_DWORD *)(a2 + 8);
      result = (unsigned int)(HIDWORD(v4) + 1);
      *(_DWORD *)(a2 + 4) = result;
    }
    while ( v5 );
  }
  return result;
}
