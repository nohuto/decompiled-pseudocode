/*
 * XREFs of ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8
 * Callers:
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003CC0C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003DBA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCopyVisRgn @ 0x1C0054850 (GreCopyVisRgn.c)
 *     GreValidateVisrgn @ 0x1C0067180 (GreValidateVisrgn.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C006E870 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireDcVisRgnShared::~AcquireDcVisRgnShared(AcquireDcVisRgnShared *this)
{
  CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)this + 1504LL));
}
