/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118
 * Callers:
 *     NtGdiEllipse @ 0x1C0003530 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C0005000 (NtGdiRoundRect.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0005300 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     NtGdiFillPath @ 0x1C0005E40 (NtGdiFillPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C0007534 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreRectangle @ 0x1C00A2BC4 (GreRectangle.c)
 *     GrePolyPolygonInternal @ 0x1C00CA9F4 (GrePolyPolygonInternal.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C00D0604 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E6364 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C011A690 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026E2E0 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     GreAngleArc @ 0x1C0292BF8 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C02931E0 (GrePolyBezierTo.c)
 *     GrePolyDraw @ 0x1C02933AC (GrePolyDraw.c)
 *     GrePolyPolylineInternal @ 0x1C0293954 (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C0293B30 (GrePolylineTo.c)
 *     NtGdiCloseFigure @ 0x1C02A5450 (NtGdiCloseFigure.c)
 *     NtGdiFlattenPath @ 0x1C02A54F0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A55A0 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A57F0 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A5910 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A5A40 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A5B80 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A5C90 (NtGdiWidenPath.c)
 *     NtGdiArcInternal @ 0x1C02A9320 (NtGdiArcInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  CAutoTGO::vUnguard((XEPATHOBJ *)((char *)this + 88));
}
