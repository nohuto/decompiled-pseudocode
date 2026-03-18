/*
 * XREFs of PfLogForegroundProcess @ 0x14001B950
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 */

__int64 __fastcall PfLogForegroundProcess(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  v2 = a1 - 1280;
  v3 = 0LL;
  LODWORD(v3) = *(_DWORD *)(a1 - 1280 + 1180);
  return PfLogEvent(
           7LL,
           dword_14030575C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v2,
           16LL);
}
