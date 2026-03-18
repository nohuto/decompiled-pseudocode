/*
 * XREFs of FVisCountable @ 0x1C0082240
 * Callers:
 *     DecVisWindows @ 0x1C0081EF0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0082188 (IncVisWindows.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 */

_BOOL8 __fastcall FVisCountable(__int64 a1)
{
  __int64 v1; // r9

  return *(char *)(a1 + 43) >= 0
      && ((*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D
       || (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v1 + 55) & 0x20) == 0);
}
