/*
 * XREFs of ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x140033928
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ @ 0x1400338B0 (--1-$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x140033D48 (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140026730 (-RemoveAll@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ.c)
 */

CDisplayNode *__fastcall CDisplayNode::`scalar deleting destructor'(CDisplayNode *this)
{
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll((__int64)this + 56);
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll((__int64)this + 8);
  operator delete(this);
  return this;
}
