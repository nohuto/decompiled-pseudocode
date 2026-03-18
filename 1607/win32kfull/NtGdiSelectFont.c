/*
 * XREFs of NtGdiSelectFont @ 0x1C011CEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
