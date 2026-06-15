/*
 * XREFs of ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180016B10
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800206A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAudioProc.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
        CAPOWrapperClient *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  void *v7; // rbx
  int v11; // edi
  __int64 (__fastcall *v12)(__int64, LPVOID, struct _GUID *, __int128 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, bool); // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v15)(CAPOWrapperClient *, GUID *, struct IAudioSystemEffects2 **); // rax
  int Interface; // eax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v19; // [rsp+40h] [rbp-81h] BYREF
  int v20; // [rsp+44h] [rbp-7Dh] BYREF
  LPVOID pv; // [rsp+48h] [rbp-79h] BYREF
  __int128 v22; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-41h] BYREF
  int *v25; // [rsp+90h] [rbp-31h]
  __int64 v26; // [rsp+98h] [rbp-29h]
  int *v27; // [rsp+A0h] [rbp-21h]
  __int64 v28; // [rsp+A8h] [rbp-19h]

  v7 = 0LL;
  v19 = 0;
  pv = 0LL;
  if ( a2 && *((_QWORD *)this + 4) )
  {
    v19 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *, struct IMMDevice *))a2->lpVtbl->GetId)(a2, &pv, a2);
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_13;
    v12 = *(__int64 (__fastcall **)(__int64, LPVOID, struct _GUID *, __int128 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, bool))(**((_QWORD **)this + 4) + 32LL);
    v13 = *((_QWORD *)this + 4);
    v22 = (__int128)*a4;
    v19 = v12(v13, pv, a3, &v22, a5, a6, a7 != 0LL);
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_13;
    if ( a7 )
    {
      v15 = **(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, struct IAudioSystemEffects2 **))this;
      if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                      this,
                      &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                      a7);
      else
        Interface = v15(this, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56, a7);
      v19 = Interface;
      v11 = Interface;
    }
    if ( v11 < 0 )
    {
LABEL_13:
      if ( (unsigned int)hProvider > 2 )
      {
        TlgCreateSz(&pDesc, "CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP");
        v20 = 101;
        v25 = &v20;
        v27 = &v19;
        v26 = 4LL;
        v28 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v17, v18, 5u, &pData);
        v11 = v19;
      }
    }
    v7 = pv;
  }
  else
  {
    v11 = -2147024809;
  }
  CoTaskMemFree(v7);
  return (unsigned int)v11;
}
