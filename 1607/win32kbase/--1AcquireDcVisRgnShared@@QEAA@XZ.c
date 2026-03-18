/*
 * XREFs of ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C
 * Callers:
 *     GreValidateVisrgn @ 0x1C00209DC (GreValidateVisrgn.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002BAFC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCopyVisRgn @ 0x1C00767F0 (GreCopyVisRgn.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00877DC (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireDcVisRgnShared::~AcquireDcVisRgnShared(AcquireDcVisRgnShared *this)
{
  CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)this + 1504LL));
}
