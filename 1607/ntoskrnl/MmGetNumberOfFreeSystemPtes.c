/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x1400BEE84
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1401E7418 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400BEED4 (MiGetNumberOfCachedPtes.c)
 */

__int64 __fastcall MmGetNumberOfFreeSystemPtes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int NumberOfCachedPtes; // eax
  __int64 v5; // r10
  unsigned __int64 v6; // r10

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(&qword_140327870, a2, a3, a4);
  v6 = qword_1403278D0 + NumberOfCachedPtes + v5;
  if ( v6 >= 0x100000000LL )
    LODWORD(v6) = -1;
  return (unsigned int)v6;
}
