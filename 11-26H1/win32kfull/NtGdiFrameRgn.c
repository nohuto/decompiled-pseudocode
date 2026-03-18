/*
 * XREFs of NtGdiFrameRgn @ 0x14025A1F0
 * Callers:
 *     <none>
 * Callees:
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  return GreFrameRgn(a1, a2, a3, a4, a5);
}
