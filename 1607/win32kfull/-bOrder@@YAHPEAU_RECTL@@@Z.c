/*
 * XREFs of ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02ABF10
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AC780 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x1C02AD0A0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AFDA0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOrder(struct _RECTL *a1)
{
  return a1->left < a1->right && a1->top < a1->bottom;
}
