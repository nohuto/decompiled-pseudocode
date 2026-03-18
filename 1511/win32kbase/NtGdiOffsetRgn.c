/*
 * XREFs of NtGdiOffsetRgn @ 0x1C0045A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  return GreOffsetRgn(a1, a2, a3);
}
