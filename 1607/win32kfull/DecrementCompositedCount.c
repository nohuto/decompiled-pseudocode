/*
 * XREFs of DecrementCompositedCount @ 0x1C01DE308
 * Callers:
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C0224570 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // edx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(*((_QWORD *)&gTermIO + 1), 65525LL, 2u, 1, 0LL);
  return 1LL;
}
