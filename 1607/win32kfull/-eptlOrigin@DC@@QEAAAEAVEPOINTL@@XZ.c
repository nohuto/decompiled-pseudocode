/*
 * XREFs of ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C000F9E4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1C0010D50 (NtGdiFastPolyPolyline.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0036DD8 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0049004 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004AC50 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004AD74 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C004FFEC (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreGradientFill @ 0x1C005FD04 (GreGradientFill.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     GreGetBoundsRect @ 0x1C011EC10 (GreGetBoundsRect.c)
 *     NtGdiExtFloodFill @ 0x1C0137AF0 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C0139550 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0139B60 (NtGdiFillRgn.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025F3CC (GreSpDwmSyncCaptureSurfaceBits.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0260090 (DxgkEngAccumD3DPresentBounds.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026AAE4 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C027E088 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C028FD68 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02900BC (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C029023C (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     NtGdiPtVisible @ 0x1C02909E0 (NtGdiPtVisible.c)
 * Callees:
 *     <none>
 */

struct EPOINTL *__fastcall DC::eptlOrigin(DC *this)
{
  struct EPOINTL *result; // rax

  result = (DC *)((char *)this + 1416);
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
    return (DC *)((char *)this + 1408);
  return result;
}
