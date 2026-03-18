/*
 * XREFs of FreeAllSpbs @ 0x1C003E1D0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxRealizePalette @ 0x1C0111BF0 (xxxRealizePalette.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C012C708 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     FreeSpb @ 0x1C0008718 (FreeSpb.c)
 */

__int64 FreeAllSpbs()
{
  __int64 result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = gpDispInfo;
    v1 = *(_QWORD *)(gpDispInfo + 72LL);
    if ( !v1 )
      break;
    FreeSpb(v1);
  }
  *(_QWORD *)(gpDispInfo + 72LL) = 0LL;
  return result;
}
