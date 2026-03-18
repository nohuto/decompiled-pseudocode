/*
 * XREFs of xxxRedrawFrame @ 0x1C014D460
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxRedrawFrame(struct tagWND *a1)
{
  xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 55, 0);
  return 1LL;
}
