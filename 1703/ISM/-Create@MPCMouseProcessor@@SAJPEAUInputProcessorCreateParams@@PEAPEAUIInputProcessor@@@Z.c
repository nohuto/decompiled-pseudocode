/*
 * XREFs of ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180040AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1800406F8 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180040BE8 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042BA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@UIMouseProc.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCMouseProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  MPCMouseProcessor *v4; // rax
  int Interface; // edi
  MPCMouseProcessor *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (MPCMouseProcessor *)operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
  {
    Interface = -2147024882;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v6 = MPCMouseProcessor::MPCMouseProcessor(v4);
  Interface = MPCMouseProcessor::RuntimeClassInitialize(v6, a1);
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<IMouseProcessorForwarding,Microsoft::WRL::Details::InterfaceList<ICursorBasedInputProcessor,Microsoft::WRL::Details::InterfaceList<IGetClosestInteractiveBounds,Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  v6,
                  &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
                  a2);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 49, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v6 + 4) + 64LL))((__int64)v6 + 32, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( Interface < 0 )
    goto LABEL_10;
  return 0LL;
}
