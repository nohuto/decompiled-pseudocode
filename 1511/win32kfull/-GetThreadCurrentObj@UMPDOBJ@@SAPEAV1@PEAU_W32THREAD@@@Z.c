/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80
 * Callers:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C0146590 (NtGdiSetPUMPDOBJ.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02A9654 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AA2D0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02AA3B0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02AA420 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02AA4A0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02AA510 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02AA610 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02AA730 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C02AA810 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AA860 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02AAB60 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02AAFD0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02AB050 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCopyBits @ 0x1C02AB110 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateClip @ 0x1C02AB5A0 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02AB6C0 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02AB740 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB850 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02AB9A0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02ABB90 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02ABEF0 (NtGdiEngLineTo.c)
 *     NtGdiEngLockSurface @ 0x1C02AC0E0 (NtGdiEngLockSurface.c)
 *     NtGdiEngPaint @ 0x1C02AC1B0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC330 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AC690 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02ACA80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ACF90 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AD260 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AD4E0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AD820 (NtGdiEngTransparentBlt.c)
 *     NtGdiEngUnlockSurface @ 0x1C02ADA50 (NtGdiEngUnlockSurface.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02ADAB0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ADBB0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ADDF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02ADF20 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02AE060 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AE1A0 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C02AE2A0 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02AE2F0 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02AE5D0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02AE740 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02AE900 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AE9A0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02AEB10 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AEBF0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02AED20 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02AED90 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02AEED0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C02AF070 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02AF160 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02AF250 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02AF2C0 (NtGdiXLATEOBJ_iXlate.c)
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
