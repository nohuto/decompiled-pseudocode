/*
 * XREFs of xxxRedrawFrame @ 0x1C01244B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxRedrawFrame(struct tagWND *a1)
{
  xxxSetWindowPosAndBand(a1, 0LL, 0, 0, 0, 0, 55, 0);
  return 1LL;
}
