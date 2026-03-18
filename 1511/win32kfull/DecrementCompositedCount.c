/*
 * XREFs of DecrementCompositedCount @ 0x1C01E7AB8
 * Callers:
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C0223A70 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // edx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(*((_QWORD *)&gTermIO + 1), 65525LL, 2u, 1, 0LL);
  return 1LL;
}
