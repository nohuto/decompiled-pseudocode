/*
 * XREFs of FreeAllSpbs @ 0x1C0094950
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRealizePalette @ 0x1C0145890 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C000CAC0 (FreeSpb.c)
 */

__int64 __fastcall FreeAllSpbs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  while ( 1 )
  {
    result = gpDispInfo;
    v4 = *(_QWORD *)(gpDispInfo + 72LL);
    if ( !v4 )
      break;
    FreeSpb(v4, gpDispInfo, a3);
  }
  *(_QWORD *)(gpDispInfo + 72LL) = 0LL;
  return result;
}
