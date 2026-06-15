/*
 * XREFs of ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E9F0
 * Callers:
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006D814 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E594 (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E85C (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::SetDeviceFormatInternal(
        struct IMMDevice *a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct tWAVEFORMATEX *a4)
{
  int v7; // ebx
  void (*v8)(void); // rax
  LPVOID pv[3]; // [rsp+20h] [rbp-18h] BYREF
  struct CEndpointCharacteristics *v11; // [rsp+40h] [rbp+8h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[0] = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, pv);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, LPVOID, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
             g_pEndpointCharacteristicsCache,
             pv[0],
             &v11);
      if ( v7 >= 0 )
      {
        if ( !a2 || !a4 || (v7 = CPolicyConfig::SetDeviceFormatHwAudioEngine(v11, a4), v7 >= 0) )
        {
          v7 = CPolicyConfig::SetDeviceFormatSwAudioEngine(v11, a3, a4);
          if ( v7 >= 0 )
            goto LABEL_10;
        }
      }
    }
  }
  else
  {
    v7 = -2147467261;
  }
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatInternal", 2727, v7);
LABEL_10:
  if ( v11 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v11);
    else
      v8();
  }
  CoTaskMemFree(pv[0]);
  return (unsigned int)v7;
}
