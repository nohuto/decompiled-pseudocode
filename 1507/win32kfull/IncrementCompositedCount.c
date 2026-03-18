/*
 * XREFs of IncrementCompositedCount @ 0x1C01E7730
 * Callers:
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     IncCompositedVisWindows @ 0x1C008217C (IncCompositedVisWindows.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0079ECC (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(*((_QWORD *)&gTermIO + 1), 65525, 100, (int)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
