/*
 * XREFs of ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180045020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046360 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsof.c)
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x1800469E4 (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004E98C (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCSixDofProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  __int64 v4; // rax
  MPCSixDofProcessor *v5; // rax
  int Interface; // edi
  MPCSixDofProcessor *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v4 = 2LL;
  do
  {
    *a2 = 0LL;
    --v4;
  }
  while ( v4 );
  v5 = (MPCSixDofProcessor *)operator new(0x8C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = MPCSixDofProcessor::MPCSixDofProcessor(v5);
    v8 = MPCInputProviderBase::RuntimeClassInitialize(v7, a1);
    Interface = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)v7 + 548) = 1065353216;
      *((_QWORD *)v7 + 275) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)v7 + 552) = 0;
      *(_QWORD *)((char *)v7 + 2212) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((float *)v7 + 555) = FLOAT_N1_0;
      *((_DWORD *)v7 + 559) = 0;
      *((_DWORD *)v7 + 549) = 0;
      *((_DWORD *)v7 + 546) = 0;
      *((_BYTE *)v7 + 2240) = 0;
      Interface = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v8);
    }
    if ( Interface >= 0 )
    {
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    v7,
                    &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
                    a2);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 41, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(MPCSixDofProcessor *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                                  + 16LL))(
              Microsoft::WRL::Details::ModuleBase::module_,
              *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
              v11);
        }
      }
    }
    else if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 41, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(MPCSixDofProcessor *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                                 + 16LL))(
            Microsoft::WRL::Details::ModuleBase::module_,
            v9,
            v10);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
