/*
 * XREFs of NtGdiSaveDC @ 0x1C00167C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
