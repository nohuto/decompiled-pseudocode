/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AA860 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02AAB60 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02AB110 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB850 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02ABB90 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02ABEF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC330 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AC690 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02ACA80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x1C02AD4E0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AD820 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= W32UserProbeAddress )
      v2 = (struct _RECTL *)W32UserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
