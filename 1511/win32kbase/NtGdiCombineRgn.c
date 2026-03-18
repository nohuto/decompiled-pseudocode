/*
 * XREFs of NtGdiCombineRgn @ 0x1C0025190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiCombineRgn(HRGN a1, HRGN a2, HRGN a3)
{
  return GreCombineRgn(a1, a2, a3);
}
