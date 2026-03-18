/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02ACAB0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02AD0A0 (NtGdiEngCopyBits.c)
 *     NtGdiEngFillPath @ 0x1C02ADB60 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02ADD60 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C02AE4B0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02AE640 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AF350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AF6D0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AF9F0 (NtGdiEngTextOut.c)
 * Callees:
 *     <none>
 */

void __fastcall CapturePOINTL(struct _POINTL **a1, struct _POINTL *a2)
{
  struct _POINTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= W32UserProbeAddress )
      v2 = (struct _POINTL *)W32UserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
