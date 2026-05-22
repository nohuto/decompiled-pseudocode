/*
 * XREFs of ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800491E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046360 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsof.c)
 *     ?SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004A010 (-SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ??0MPCClickerProcessor@@QEAA@XZ @ 0x18004A590 (--0MPCClickerProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004E98C (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCClickerProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  __int64 v4; // rax
  MPCClickerProcessor *v5; // rax
  int Interface; // edi
  MPCClickerProcessor *v7; // rbx
  int v8; // eax
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 2LL;
  do
  {
    *a2 = 0LL;
    --v4;
  }
  while ( v4 );
  v5 = (MPCClickerProcessor *)operator new(0x868uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
    return (unsigned int)-2147024882;
  v7 = MPCClickerProcessor::MPCClickerProcessor(v5);
  v8 = MPCInputProviderBase::RuntimeClassInitialize(v7, a1);
  Interface = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)v7 + 264) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)v7 + 530) = 0;
    *(_QWORD *)((char *)v7 + 2124) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)v7 + 533) = 0;
    MPCClickerProcessor::SendInputDetectedIfController(v7, *((struct DeviceInfo **)v7 + 4));
    Interface = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( Interface >= 0 )
  {
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  (__int64)v7,
                  &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
                  (__int64 *)a2);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 41, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(MPCClickerProcessor *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
        v9 = Microsoft::WRL::Details::ModuleBase::module_;
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          goto LABEL_16;
      }
    }
  }
  else if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 41, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(MPCClickerProcessor *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
      v9 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_16:
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(v9);
    }
  }
  return (unsigned int)Interface;
}
