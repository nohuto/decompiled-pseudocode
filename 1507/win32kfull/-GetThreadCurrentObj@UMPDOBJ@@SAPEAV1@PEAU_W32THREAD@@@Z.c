/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330
 * Callers:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C011BF90 (NtGdiSetPUMPDOBJ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025E4FC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02A9F14 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AAC40 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02AAD20 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02AAD90 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02AAE10 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02AAE80 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02AAF80 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02AB0A0 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C02AB180 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AB1D0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02AB4F0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02AB990 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02ABA10 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCopyBits @ 0x1C02ABAD0 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateClip @ 0x1C02ABF80 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02AC0A0 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02AC120 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02AC230 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02AC3A0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02AC5A0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02AC970 (NtGdiEngLineTo.c)
 *     NtGdiEngLockSurface @ 0x1C02ACBC0 (NtGdiEngLockSurface.c)
 *     NtGdiEngPaint @ 0x1C02ACCB0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02ACE40 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AD1B0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AD610 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ADB60 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ADEC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AE1D0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AE560 (NtGdiEngTransparentBlt.c)
 *     NtGdiEngUnlockSurface @ 0x1C02AE7A0 (NtGdiEngUnlockSurface.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02AE800 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02AE900 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02AEB40 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02AEC70 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02AEDB0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AEEF0 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C02AF000 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02AF050 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02AF330 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02AF4A0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02AF660 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AF700 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02AF880 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AF960 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02AFA90 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02AFB00 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02AFC40 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C02AFDE0 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02AFED0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02AFFC0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02B0030 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentObj(struct _W32THREAD *a1)
{
  _QWORD *v1; // rax

  if ( a1 && (v1 = (_QWORD *)((char *)a1 + 40), (_QWORD *)*v1 != v1) )
    return (struct UMPDOBJ *)(*v1 - 40LL);
  else
    return 0LL;
}
