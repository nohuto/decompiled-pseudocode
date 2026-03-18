/*
 * XREFs of PfLogForegroundProcess @ 0x14001A9B8
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 */

__int64 __fastcall PfLogForegroundProcess(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  v2 = a1 - 1272;
  v3 = 0LL;
  LODWORD(v3) = *(_DWORD *)(a1 - 1272 + 1172);
  return PfLogEvent(
           7LL,
           dword_1403534CC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v2,
           16LL);
}
