/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C004B440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiExtSelectClipRgn(HDC a1)
{
  return GreExtSelectClipRgnInternal(a1);
}
