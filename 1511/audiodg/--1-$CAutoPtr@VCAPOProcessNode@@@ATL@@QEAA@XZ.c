/*
 * XREFs of ??1?$CAutoPtr@VCAPOProcessNode@@@ATL@@QEAA@XZ @ 0x140026B2C
 * Callers:
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$1 @ 0x14001B49C (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$2 @ 0x14001B4CA (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$4 @ 0x14001B504 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$5 @ 0x14001B532 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$5.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14001B900 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$1 @ 0x14001BB5C (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$2 @ 0x14001BB8A (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$3 @ 0x14001BBB8 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$4 @ 0x14001BBC4 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$6 @ 0x14001BC16 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$6.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$7 @ 0x14001BC44 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$8 @ 0x14001BC50 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$9 @ 0x14001BC5C (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x14002FBF7 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x14002FC0F (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x14002FC1B (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CAutoPtr<CAPOProcessNode>::~CAutoPtr<CAPOProcessNode>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = (**(__int64 (__fastcall ***)(_QWORD, __int64))*a1)(*a1, 1LL);
  *a1 = 0LL;
  return result;
}
