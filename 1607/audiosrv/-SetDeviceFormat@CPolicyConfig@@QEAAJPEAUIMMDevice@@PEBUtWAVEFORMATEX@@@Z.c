/*
 * XREFs of ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E594
 * Callers:
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x18006DD10 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x18006E7B0 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180027844 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E85C (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E9F0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x180087F5C (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18008A600 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::SetDeviceFormat(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        const struct tWAVEFORMATEX *a3)
{
  int v6; // ebx
  __int64 v7; // r8
  int updated; // eax
  int v9; // eax
  void (*v10)(void); // rax
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-10h] BYREF
  int v15; // [rsp+78h] [rbp+28h] BYREF
  CEndpointCharacteristics *v16; // [rsp+88h] [rbp+38h] BYREF

  v14[1] = -2LL;
  v15 = 0;
  v14[0] = 0LL;
  v13 = 0LL;
  pv = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(CPolicyConfig *, LPVOID, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)this + 32LL))(
             this,
             pv,
             0LL,
             &v13);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, LPVOID, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
               g_pEndpointCharacteristicsCache,
               pv,
               &v16);
        if ( v6 >= 0 )
        {
          ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::operator=(
            v14,
            a2,
            v7);
          if ( !v14[0]
            || (v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14[0] + 88LL))(v14[0], &v15), v6 >= 0) )
          {
            v6 = CPolicyConfig::SetDeviceFormatInternal(a2, v15, eHostProcessConnector, a3);
            if ( v6 >= 0 )
              goto LABEL_16;
            updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v16, 0, eHostProcessConnector, v13);
            if ( updated < 0 )
              AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormat", 2652, updated);
            if ( v15 )
            {
              v9 = CPolicyConfig::SetDeviceFormatHwAudioEngine(v16, v13);
              if ( v9 < 0 )
                AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormat", 2657, v9);
            }
            CEndpointCharacteristics::ClearMixFormatCache(v16);
          }
        }
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormat", 2665, v6);
LABEL_16:
  if ( v16 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v16);
    else
      v10();
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v13);
  v13 = 0LL;
  if ( v14[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  return (unsigned int)v6;
}
