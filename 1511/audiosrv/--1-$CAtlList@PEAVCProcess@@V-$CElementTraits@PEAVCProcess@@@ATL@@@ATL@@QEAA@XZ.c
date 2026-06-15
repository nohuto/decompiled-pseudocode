/*
 * XREFs of ??1?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18009B938
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x18004AD2E (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _TSSession::_TSSession_::_1_::dtor$0 @ 0x18009BC0A (_TSSession--_TSSession_--_1_--dtor$0.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$3 @ 0x18009E46F (_CApplicationManager--_CApplicationManager_--_1_--dtor$3.c)
 *     _CApplication::_CApplication_::_1_::dtor$2 @ 0x18009FB1D (_CApplication--_CApplication_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::~CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>(
        __int64 *a1)
{
  ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAll(a1);
}
