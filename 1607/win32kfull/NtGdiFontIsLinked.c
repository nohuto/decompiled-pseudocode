/*
 * XREFs of NtGdiFontIsLinked @ 0x1C011FD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
