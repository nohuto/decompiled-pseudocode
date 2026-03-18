/*
 * XREFs of GreCreatePalette @ 0x1C00BE850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreCreatePalette(__int64 a1)
{
  return GreCreatePaletteInternal(a1, *(unsigned __int16 *)(a1 + 2));
}
