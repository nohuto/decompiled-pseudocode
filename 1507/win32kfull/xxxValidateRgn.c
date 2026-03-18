/*
 * XREFs of xxxValidateRgn @ 0x1C0100160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxValidateRgn(struct tagWND *a1, HRGN a2)
{
  return xxxRedrawWindow(a1, 0LL, a2, 8);
}
