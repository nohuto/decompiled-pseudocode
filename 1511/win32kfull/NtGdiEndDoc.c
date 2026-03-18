/*
 * XREFs of NtGdiEndDoc @ 0x1C02699F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiEndDoc(HDC a1)
{
  return bEndDocInternal(a1, 0);
}
