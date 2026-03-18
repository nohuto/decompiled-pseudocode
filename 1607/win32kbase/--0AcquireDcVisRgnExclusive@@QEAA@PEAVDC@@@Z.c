/*
 * XREFs of ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700
 * Callers:
 *     GreValidateVisrgn @ 0x1C00209DC (GreValidateVisrgn.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002BAFC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C001B1C4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

AcquireDcVisRgnExclusive *__fastcall AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive(
        AcquireDcVisRgnExclusive *this,
        struct DC *a2)
{
  *(_QWORD *)this = a2;
  CPushLock::AcquireLockExclusive((struct DC *)((char *)a2 + 1504));
  return this;
}
