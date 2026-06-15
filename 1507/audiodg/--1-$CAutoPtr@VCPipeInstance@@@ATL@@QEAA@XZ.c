/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140026908
 * Callers:
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$7 @ 0x14001AA25 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$10 @ 0x14001B27A (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$10.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x14001BA20 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$2 @ 0x14001BB80 (_CStreamGroup--_CStreamGroup_--_1_--dtor$2.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$2 @ 0x14001BC50 (_CStreamGroup--CStreamGroup_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14002F43D (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x1400344FB (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
CPipeInstance *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(CPipeInstance **a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
