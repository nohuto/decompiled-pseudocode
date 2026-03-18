/*
 * XREFs of NtGdiEngDeletePalette @ 0x1C014D820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall NtGdiEngDeletePalette(HPALETTE hpal)
{
  return EngDeletePalette(hpal);
}
