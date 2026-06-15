/*
 * XREFs of ??1?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140026484
 * Callers:
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$0 @ 0x14001B490 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$0 @ 0x14001B5B0 (_CPipeInstance--CreateDevicePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$0 @ 0x14001B640 (_CPipeInstance--_CPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$0 @ 0x14001BB50 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$0 @ 0x14002FBEB (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$0_0 @ 0x1400302CC (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$0_0.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$0 @ 0x140030D53 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::~CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(a1);
}
