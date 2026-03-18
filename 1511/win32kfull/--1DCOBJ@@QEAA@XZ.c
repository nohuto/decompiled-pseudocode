/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0
 * Callers:
 *     NtGdiConvertMetafileRect @ 0x1C0007290 (NtGdiConvertMetafileRect.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FF734 (GreGetFontUnicodeRanges.c)
 *     GreSetMiterLimit @ 0x1C01026D4 (GreSetMiterLimit.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 *     NtGdiFillRgn @ 0x1C01301F0 (NtGdiFillRgn.c)
 *     NtGdiFastPolyPolyline @ 0x1C013B590 (NtGdiFastPolyPolyline.c)
 *     GreSetWindowOrg @ 0x1C013F02C (GreSetWindowOrg.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0267A20 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78 (-bEndDocInternal@@YAHPEAUHDC__@@K@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C02695F0 (NtGdiAddEmbFontToDC.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0270B58 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     GreGetKerningPairs @ 0x1C027F634 (GreGetKerningPairs.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0290F88 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GrePolyDraw @ 0x1C0292E74 (GrePolyDraw.c)
 *     NtGdiFillPath @ 0x1C02A4E80 (NtGdiFillPath.c)
 *     NtGdiGetPath @ 0x1C02A5020 (NtGdiGetPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A54A0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A55E0 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02A8B20 (NtGdiArcInternal.c)
 *     NtGdiColorCorrectPalette @ 0x1C02AFE60 (NtGdiColorCorrectPalette.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02B0AB0 (NtGdiScaleViewportExtEx.c)
 *     NtGdiResizePalette @ 0x1C02B1950 (NtGdiResizePalette.c)
 *     NtGdiEnumObjects @ 0x1C02B2440 (NtGdiEnumObjects.c)
 *     NtGdiGetETM @ 0x1C02B2DC0 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
