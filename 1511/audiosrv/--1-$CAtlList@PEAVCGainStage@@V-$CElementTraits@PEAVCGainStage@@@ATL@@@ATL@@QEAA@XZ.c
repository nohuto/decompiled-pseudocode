/*
 * XREFs of ??1?$CAtlList@PEAVCGainStage@@V?$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@QEAA@XZ @ 0x180066DF0
 * Callers:
 *     _CPickerHostContext::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18004BBCA (_CPickerHostContext--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$2 @ 0x18004C8C5 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$2.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$2 @ 0x18007F39B (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>(
        __int64 *a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
