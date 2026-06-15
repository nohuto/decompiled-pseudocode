/*
 * XREFs of ??1?$CAtlList@PEAVCGainStage@@V?$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@QEAA@XZ @ 0x1800686F0
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$2 @ 0x1800454D6 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$2.c)
 *     _CPickerHostContext::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800459C4 (_CPickerHostContext--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x180046557 (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$2 @ 0x180084943 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$2.c)
 *     _TSSession::_TSSession_::_1_::dtor$0 @ 0x18009ED8E (_TSSession--_TSSession_--_1_--dtor$0.c)
 *     _TSSession::_TSSession_::_1_::dtor$1 @ 0x18009ED9E (_TSSession--_TSSession_--_1_--dtor$1.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$2 @ 0x1800A12EF (_CApplicationManager--_CApplicationManager_--_1_--dtor$2.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$3 @ 0x1800A12FF (_CApplicationManager--_CApplicationManager_--_1_--dtor$3.c)
 *     _CApplication::_CApplication_::_1_::dtor$2 @ 0x1800A2955 (_CApplication--_CApplication_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
