/*
 * XREFs of ??1?$CAutoPtr@VCAPOProcessNode@@@ATL@@QEAA@XZ @ 0x1400269A8
 * Callers:
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$1 @ 0x14001A9DD (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$2 @ 0x14001A9E9 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$4 @ 0x14001AA01 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$5 @ 0x14001AA0D (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$5.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14001AE80 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$1 @ 0x14001B14C (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$2 @ 0x14001B17A (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$3 @ 0x14001B1A8 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$5 @ 0x14001B1FA (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$5.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$6 @ 0x14001B228 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$6.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$7 @ 0x14001B256 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$8 @ 0x14001B262 (_CPipeInstance--CreateStreamPipeInstanceNew_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x14002F401 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x14002F419 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x14002F425 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CAutoPtr<CAPOProcessNode>::~CAutoPtr<CAPOProcessNode>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = (**(__int64 (__fastcall ***)(_QWORD, __int64))*a1)(*a1, 1LL);
  *a1 = 0LL;
  return result;
}
