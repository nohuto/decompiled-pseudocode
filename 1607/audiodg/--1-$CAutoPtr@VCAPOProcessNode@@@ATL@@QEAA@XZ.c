/*
 * XREFs of ??1?$CAutoPtr@VCAPOProcessNode@@@ATL@@QEAA@XZ @ 0x1400258F8
 * Callers:
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14001AF90 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$1 @ 0x14001B2EC (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x14001B31A (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$3 @ 0x14001B348 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x14001B354 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$6 @ 0x14001B3A6 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$6.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$7 @ 0x14001B3D4 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$8 @ 0x14001B3E0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$9 @ 0x14001B3EC (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$1 @ 0x14001B4BC (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$2 @ 0x14001B4EA (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$4 @ 0x14001B521 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$5 @ 0x14001B54F (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$5.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x14002E3CC (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x14002E3E4 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x14002E3F0 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CAPOProcessNode>::~CAutoPtr<CAPOProcessNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
