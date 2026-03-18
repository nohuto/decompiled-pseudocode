/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AA860 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02AAB60 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02AAFD0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngCopyBits @ 0x1C02AB110 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB850 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02AB9A0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02ABB90 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02ABEF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02AC1B0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC330 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AC690 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02ACA80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ACF90 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AD260 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AD4E0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AD820 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AE9A0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(SURFOBJ **this)
{
  if ( *((_DWORD *)this + 2) )
    EngUnlockSurface(*this);
}
