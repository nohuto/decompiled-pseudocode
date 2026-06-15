/*
 * XREFs of ??1?$CAtlList@PEAVCGainStage@@V?$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@QEAA@XZ @ 0x180010880
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x1800252A4 (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x180025335 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x180025781 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x180025791 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _TSSession::_TSSession_::_1_::dtor$0 @ 0x180025AA6 (_TSSession--_TSSession_--_1_--dtor$0.c)
 *     _TSSession::_TSSession_::_1_::dtor$1 @ 0x180025AB6 (_TSSession--_TSSession_--_1_--dtor$1.c)
 *     _TSSession::_TSSession_::_1_::dtor$3 @ 0x180025AD9 (_TSSession--_TSSession_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
