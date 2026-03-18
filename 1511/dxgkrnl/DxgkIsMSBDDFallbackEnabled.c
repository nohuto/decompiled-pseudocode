/*
 * XREFs of DxgkIsMSBDDFallbackEnabled @ 0x1C00281BC
 * Callers:
 *     sub_1C005E7E0 @ 0x1C005E7E0 (sub_1C005E7E0.c)
 *     sub_1C00A64F0 @ 0x1C00A64F0 (sub_1C00A64F0.c)
 *     sub_1C00BF1C0 @ 0x1C00BF1C0 (sub_1C00BF1C0.c)
 *     sub_1C00BF2D0 @ 0x1C00BF2D0 (sub_1C00BF2D0.c)
 *     sub_1C00C5900 @ 0x1C00C5900 (sub_1C00C5900.c)
 *     sub_1C0182FB0 @ 0x1C0182FB0 (sub_1C0182FB0.c)
 * Callees:
 *     <none>
 */

bool DxgkIsMSBDDFallbackEnabled()
{
  return dword_1C0046FB0 == 4;
}
