/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870
 * Callers:
 *     GreRectangle @ 0x1C000E9CC (GreRectangle.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C000F9E4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolyPolygonInternal @ 0x1C00116E0 (GrePolyPolygonInternal.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0011890 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0149120 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014944C (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026B310 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026C270 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02793AC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02916EC (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C02918E4 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C0291FE0 (GrePolyBezierTo.c)
 *     GrePolyDraw @ 0x1C02921B8 (GrePolyDraw.c)
 *     GrePolyPolylineInternal @ 0x1C0292770 (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C0292950 (GrePolylineTo.c)
 *     NtGdiEllipse @ 0x1C0292B20 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C0292D40 (NtGdiRoundRect.c)
 *     NtGdiCloseFigure @ 0x1C02A5EF0 (NtGdiCloseFigure.c)
 *     NtGdiFillPath @ 0x1C02A6000 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02A6100 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A61B0 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A6400 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A6530 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6660 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A67A0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A68B0 (NtGdiWidenPath.c)
 *     NtGdiArcInternal @ 0x1C02AA770 (NtGdiArcInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  CAutoTGO::vUnguard((XEPATHOBJ *)((char *)this + 88));
}
