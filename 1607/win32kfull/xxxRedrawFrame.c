/*
 * XREFs of xxxRedrawFrame @ 0x1C0152C00
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxRedrawFrame(struct tagWND *a1)
{
  xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 55, 0);
  return 1LL;
}
