/*
 * XREFs of NtGdiSetIcmMode @ 0x1C02B0870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiSetIcmMode(HDC a1, int a2, unsigned int a3)
{
  return GreSetICMMode(a1, a2, a3);
}
