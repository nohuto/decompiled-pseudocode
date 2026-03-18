/*
 * XREFs of NtGdiEndDoc @ 0x1C026AE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiEndDoc(HDC a1)
{
  return bEndDocInternal(a1, 0, 1);
}
