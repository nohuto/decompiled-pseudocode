/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140026644
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x14001AB40 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$2 @ 0x14001ACA0 (_CStreamGroup--_CStreamGroup_--_1_--dtor$2.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$2 @ 0x14001AD77 (_CStreamGroup--CStreamGroup_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$7 @ 0x14001B54A (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$11 @ 0x14001BC74 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$11.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14002FC33 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x14003468F (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(LPVOID **a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
