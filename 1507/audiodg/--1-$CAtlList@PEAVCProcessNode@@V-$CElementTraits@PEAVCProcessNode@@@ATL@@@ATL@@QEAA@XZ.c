/*
 * XREFs of ??1?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAA@XZ @ 0x14002625C
 * Callers:
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$0 @ 0x14001A9D1 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$0 @ 0x14001B080 (_CPipeInstance--_CPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$0 @ 0x14001B140 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$0 @ 0x14001B300 (_CPipeInstance--CreateDevicePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$0 @ 0x14002F3F5 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$0_0 @ 0x14002FB8E (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$0_0.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$0 @ 0x14003065B (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::~CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(a1);
}
