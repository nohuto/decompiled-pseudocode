/*
 * XREFs of ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180054370
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180053948 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x180054730 (--_GSpeechRuntimeListener@@QEAAPEAXI@Z.c)
 *     ??$Make@VSpectrumListener@@QEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEBQEAVMPCRawInputProvider@@AEAK@Z @ 0x180054A18 (--$Make@VSpectrumListener@@QEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA-AV-$ComPtr@VS.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180055E28 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCRawInputProvider::OnCompositorRunningStateChanged(MPCRawInputProvider *this, char a2)
{
  int *v3; // rsi
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rcx
  int v11; // esi
  int v12; // eax
  char v13; // dl
  SpeechRuntimeListener *v14; // rcx
  volatile signed __int32 *v15; // rcx
  SpeechRuntimeListener *v16; // rcx
  int v17; // eax
  int v18[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v21; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v22; // [rsp+68h] [rbp+20h] BYREF

  v19 = -2LL;
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 113) )
    {
      v3 = (int *)((char *)this + 24);
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *, MPCRawInputProvider *))(**((_QWORD **)this + 2) + 40LL))(
             *((_QWORD *)this + 2),
             (char *)this + 24,
             this);
      if ( v4 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xBC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v4);
        __debugbreak();
      }
      *(_QWORD *)v18 = this;
      v5 = (__int64 *)Microsoft::WRL::Details::Make<SpectrumListener,MPCRawInputProvider * const,unsigned long &>(
                        &v22,
                        v18,
                        (char *)this + 24);
      v6 = 0LL;
      if ( &v21 != (volatile signed __int32 **)v5 )
      {
        v6 = *v5;
        *v5 = 0LL;
      }
      v21 = (volatile signed __int32 *)*((_QWORD *)this + 10);
      v7 = v21;
      *((_QWORD *)this + 10) = v6;
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v21 + 32LL))(v21, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      v8 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      v9 = (volatile signed __int32 *)operator new(0x58uLL);
      v21 = v9;
      v10 = *((_QWORD *)this + 2);
      v11 = *v3;
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_QWORD *)v9 + 2) = 0LL;
      *((_QWORD *)v9 + 9) = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *((_DWORD *)v9 + 20) = v11;
      v12 = SpeechRuntimeListener::InitializeCoreMessaging((SpeechRuntimeListener *)v9);
      if ( v12 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
          (const char *)(unsigned int)v12);
      v14 = (SpeechRuntimeListener *)*((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = v9;
      if ( v14 )
        SpeechRuntimeListener::`scalar deleting destructor'(v14, v13);
      *((_BYTE *)this + 113) = 1;
    }
  }
  else if ( *((_BYTE *)this + 113) )
  {
    v15 = (volatile signed __int32 *)*((_QWORD *)this + 10);
    if ( v15 )
    {
      *((_QWORD *)this + 10) = 0LL;
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 32LL))(v15, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    v16 = (SpeechRuntimeListener *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v16 )
      SpeechRuntimeListener::`scalar deleting destructor'(v16, a2);
    v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 48LL))(
            *((_QWORD *)this + 2),
            (char *)this + 24);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    *((_BYTE *)this + 113) = 0;
  }
}
