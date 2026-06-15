/*
 * XREFs of ??1?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140026798
 * Callers:
 *     _PublishDeviceGraphWnfState_::_1_::dtor$0 @ 0x14001B3E0 (_PublishDeviceGraphWnfState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::~CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(a1);
}
