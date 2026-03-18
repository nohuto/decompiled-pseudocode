/*
 * XREFs of IncrementCompositedCount @ 0x1C01E7BA0
 * Callers:
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     IncCompositedVisWindows @ 0x1C007A2E8 (IncCompositedVisWindows.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00CA594 (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(*((_QWORD *)&gTermIO + 1), 65525LL, 0x64u, (__int64)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
