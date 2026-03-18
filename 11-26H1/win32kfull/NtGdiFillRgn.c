/*
 * XREFs of NtGdiFillRgn @ 0x140083150
 * Callers:
 *     <none>
 * Callees:
 *     GreFillRgn @ 0x140081834 (GreFillRgn.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  return GreFillRgn(a1, a2, a3);
}
