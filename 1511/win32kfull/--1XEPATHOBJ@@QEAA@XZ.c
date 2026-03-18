/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C027AEC4
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C027AD5C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     NtGdiCloseFigure @ 0x1C02A4D80 (NtGdiCloseFigure.c)
 *     NtGdiFillPath @ 0x1C02A4E80 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02A4F80 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A5020 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A5260 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A5380 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A54A0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A55E0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A56F0 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 30) )
  {
    PopThreadGuardedObject((char *)this + 88);
    *((_DWORD *)this + 30) = 0;
  }
}
