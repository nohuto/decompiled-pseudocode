/*
 * XREFs of ??1?$CAtlList@PEAVCStreamGroup@@V?$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAA@XZ @ 0x140012E98
 * Callers:
 *     _dynamic_atexit_destructor_for__StreamGroupList__ @ 0x14001C0B0 (_dynamic_atexit_destructor_for__StreamGroupList__.c)
 * Callees:
 *     <none>
 */

void ATL::CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>::~CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>()
{
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&StreamGroupList);
}
