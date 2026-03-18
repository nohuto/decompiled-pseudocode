/*
 * XREFs of NtGdiEndDoc @ 0x1C0267EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiEndDoc(HDC a1)
{
  return bEndDocInternal(a1, 0, 1);
}
