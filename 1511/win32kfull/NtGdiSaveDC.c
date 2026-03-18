/*
 * XREFs of NtGdiSaveDC @ 0x1C00CC530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiSaveDC(__int64 a1)
{
  return GreSaveDC(a1);
}
