/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AC780 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02ACAB0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02ACF40 (NtGdiEngCheckAbort.c)
 *     NtGdiEngCopyBits @ 0x1C02AD0A0 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02AD9F0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02ADB60 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02ADD60 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02AE150 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02AE4B0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02AE640 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AF350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AF6D0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AF9F0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AFDA0 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B0F80 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1C012D2B0 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C02AB320 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 */

void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(UMPDSURFOBJ *this)
{
  CAutoTGO::vUnguard((UMPDSURFOBJ *)((char *)this + 24));
  UMPDSURFOBJ::Cleanup(this);
  CAutoTGO::~CAutoTGO((UMPDSURFOBJ *)((char *)this + 24));
}
