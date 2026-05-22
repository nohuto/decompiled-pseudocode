/*
 * XREFs of ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002D410
 * Callers:
 *     <none>
 * Callees:
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x18002D084 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18002D2E0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002ED00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@VMPCInputPr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCGamepadProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  __int64 v4; // rax
  MPCGamepadProcessor *v5; // rax
  int Interface; // edi
  MPCGamepadProcessor *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx

  v4 = 2LL;
  do
  {
    *a2 = 0LL;
    --v4;
  }
  while ( v4 );
  v5 = (MPCGamepadProcessor *)operator new(0xA48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
    return (unsigned int)-2147024882;
  v7 = MPCGamepadProcessor::MPCGamepadProcessor(v5);
  Interface = MPCGamepadProcessor::RuntimeClassInitialize(v7, a1);
  if ( Interface >= 0 )
  {
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  v7,
                  &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
                  a2);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 43, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 1) + 64LL))((__int64)v7 + 8, 1LL);
        v8 = Microsoft::WRL::Details::ModuleBase::module_;
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          goto LABEL_13;
      }
    }
  }
  else if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 43, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 1) + 64LL))((__int64)v7 + 8, 1LL);
      v8 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_13:
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(v8);
    }
  }
  return (unsigned int)Interface;
}
