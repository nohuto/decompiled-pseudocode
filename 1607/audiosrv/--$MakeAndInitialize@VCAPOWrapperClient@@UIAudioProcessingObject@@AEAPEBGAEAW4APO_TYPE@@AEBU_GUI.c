/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x1800208E0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 * Callees:
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017320 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18008BC64 (-InternalAddRef@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAudioProc.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 (__fastcall ***v8)(__int64, const struct _GUID *, __int64 *); // rbx
  _DWORD *v9; // rax
  _QWORD *v10; // rdi
  HRESULT Instance; // edi
  CAudioDGProcess *v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // r12
  _QWORD *v15; // r14
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  __int64 (__fastcall *v18)(__int64, const struct _GUID *, __int64 *); // rax
  void (*v19)(void); // rax
  HRESULT v21; // [rsp+30h] [rbp-D8h] BYREF
  int v22; // [rsp+34h] [rbp-D4h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-D0h]
  _DWORD *v24; // [rsp+40h] [rbp-C8h]
  __int64 v25; // [rsp+48h] [rbp-C0h]
  _DWORD *v26; // [rsp+50h] [rbp-B8h]
  _DWORD *v27; // [rsp+58h] [rbp-B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-88h] BYREF
  int *v30; // [rsp+90h] [rbp-78h]
  __int64 v31; // [rsp+98h] [rbp-70h]
  HRESULT *v32; // [rsp+A0h] [rbp-68h]
  __int64 v33; // [rsp+A8h] [rbp-60h]

  v25 = -2LL;
  *a1 = 0LL;
  v8 = 0LL;
  v23 = 0LL;
  v9 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v24 = v9;
  v26 = v9;
  if ( v9 )
  {
    v27 = v9;
    v9[7] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IAudioProcessingObject'};
    *((_QWORD *)v9 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>,1,0>'};
    v12 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v10 = &CAPOWrapperClient::`vftable';
    v10[1] = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
    v10[2] = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>,1,0>'};
    v10[4] = 0LL;
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    CAudioDGProcess::LockADGProcess(v12);
    v8 = (__int64 (__fastcall ***)(__int64, const struct _GUID *, __int64 *))v10;
    v23 = v10;
    v24 = 0LL;
    v13 = *a3;
    v14 = *a2;
    v15 = v10 + 4;
    Instance = CoCreateInstance(
                 &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
                 0LL,
                 0x17u,
                 &GUID_1786baa0_1104_43ce_b982_c7673653d066,
                 (LPVOID *)v10 + 4);
    v21 = Instance;
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64 (__fastcall ***)(__int64, const struct _GUID *, __int64 *)))(*(_QWORD *)*v15 + 24LL))(
                   *v15,
                   v14,
                   v13,
                   a4,
                   v8 + 5);
      v21 = Instance;
      if ( Instance >= 0 )
        goto LABEL_10;
    }
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperClient::RuntimeClassInitialize");
      v22 = 40;
      v30 = &v22;
      v31 = 4LL;
      v32 = &v21;
      v33 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v16, v17, 5u, &pData);
      Instance = v21;
    }
    if ( Instance >= 0 )
    {
LABEL_10:
      v18 = **v8;
      if ( v18 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
      {
        *a1 = (__int64)(v8 + 1);
        v19 = (void (*)(void))v8[1][1];
        if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::InternalAddRef();
        else
          v19();
        Instance = 0;
      }
      else
      {
        Instance = v18((__int64)v8, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a1);
      }
    }
  }
  else
  {
    Instance = -2147024882;
  }
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, const struct _GUID *, __int64 *)))(*v8)[2])(v8);
  return (unsigned int)Instance;
}
