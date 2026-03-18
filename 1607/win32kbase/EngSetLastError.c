/*
 * XREFs of EngSetLastError @ 0x1C0079760
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0004C50 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C002E420 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C0034480 (GreCreateRectRgnIndirect.c)
 *     GreIntersectClipRect @ 0x1C00453F0 (GreIntersectClipRect.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C0045D50 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C0045DA0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0045E30 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0045EE0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0046E88 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     GreCreateRectRgn @ 0x1C0057900 (GreCreateRectRgn.c)
 *     bDeleteDCInternal @ 0x1C005A4D0 (bDeleteDCInternal.c)
 *     GreCreatePatternBrushInternal @ 0x1C005B700 (GreCreatePatternBrushInternal.c)
 *     NtGdiCreateRectRgn @ 0x1C005BC90 (NtGdiCreateRectRgn.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C005CFA8 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GreCreateBitmap @ 0x1C005D0D0 (GreCreateBitmap.c)
 *     NtGdiGetRegionData @ 0x1C006E970 (NtGdiGetRegionData.c)
 *     GreExtCreateRegion @ 0x1C006EC30 (GreExtCreateRegion.c)
 *     GrePtInRegion @ 0x1C0076C20 (GrePtInRegion.c)
 *     GreGetRegionData @ 0x1C0078730 (GreGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C0082E80 (NtGdiPolyPolyDraw.c)
 *     bPolyPolygon @ 0x1C00833F0 (bPolyPolygon.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00839B0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00853F0 (NtGdiGetDeviceCapsAll.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C00BDB90 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00BDC00 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1C00BDC80 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CA188 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CBEC0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     <none>
 */

void __stdcall EngSetLastError(ULONG iError)
{
  _DWORD *CurrentThreadTeb; // rax

  CurrentThreadTeb = PsGetCurrentThreadTeb();
  if ( CurrentThreadTeb )
    CurrentThreadTeb[26] = iError;
}
