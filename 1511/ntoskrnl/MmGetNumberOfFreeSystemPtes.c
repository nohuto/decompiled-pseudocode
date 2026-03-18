/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x140014458
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1401D5B0C (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400144A8 (MiGetNumberOfCachedPtes.c)
 */

__int64 __fastcall MmGetNumberOfFreeSystemPtes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int NumberOfCachedPtes; // eax
  __int64 v5; // r10
  unsigned __int64 v6; // r10

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(&qword_1402FF7B0, a2, a3, a4);
  v6 = qword_1402FF808 + NumberOfCachedPtes + v5;
  if ( v6 >= 0x100000000LL )
    LODWORD(v6) = -1;
  return (unsigned int)v6;
}
