/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140025488
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x14001A4DC (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$2 @ 0x14001A630 (_CStreamGroup--_CStreamGroup_--_1_--dtor$2.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$2 @ 0x14001A707 (_CStreamGroup--CStreamGroup_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$11 @ 0x14001B404 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$11.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$7 @ 0x14001B567 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14002E408 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x140031A03 (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(LPVOID **a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
