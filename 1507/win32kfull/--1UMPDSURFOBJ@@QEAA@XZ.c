/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AB1D0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02AB4F0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02AB990 (NtGdiEngCheckAbort.c)
 *     NtGdiEngCopyBits @ 0x1C02ABAD0 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02AC230 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02AC3A0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02AC5A0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02AC970 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02ACCB0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02ACE40 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AD1B0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AD610 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ADB60 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ADEC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AE1D0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AE560 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AF700 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1C02653E8 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C02A9E20 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 */

void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(UMPDSURFOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  CAutoTGO::vUnguard((UMPDSURFOBJ *)((char *)this + 24), a2, a3, a4);
  UMPDSURFOBJ::Cleanup(this);
  CAutoTGO::~CAutoTGO((UMPDSURFOBJ *)((char *)this + 24));
}
