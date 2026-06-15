/*
 * XREFs of ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180084310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180064528 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x18007F618 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007FA60 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800849F4 (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::ResetDeviceFormat(CPolicyConfig *this, const unsigned __int16 *a2)
{
  CEndpointCharacteristics *v2; // rbx
  struct IMMDevice *v3; // rdi
  int v6; // esi
  int AliasedEndpointCharacteristics; // eax
  __int64 (__fastcall *v8)(volatile signed __int32 *); // r14
  struct _GUID v10; // [rsp+30h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+38h] BYREF
  struct tWAVEFORMATEX *v12; // [rsp+80h] [rbp+40h] BYREF
  CEndpointCharacteristics *v13; // [rsp+88h] [rbp+48h] BYREF

  pv = 0LL;
  v2 = 0LL;
  v12 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a2 )
  {
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       a2,
                                       &v13);
    v2 = v13;
    v6 = AliasedEndpointCharacteristics;
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      v3 = (struct IMMDevice *)*((_QWORD *)v13 + 2);
      ((void (__fastcall *)(struct IMMDevice *))v3->lpVtbl->AddRef)(v3);
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
        v2,
        eHostProcessConnector,
        &v10,
        0LL,
        0LL);
      v6 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)this + 32LL))(
             this,
             a2,
             0LL,
             &v12);
      if ( v6 >= 0 )
      {
        v6 = CPolicyConfig::ConfirmDeviceFormat(v2, v12, &v10, 0, 0);
        if ( v6 >= 0 )
          goto LABEL_14;
        v6 = CPolicyConfig::SetDeviceFormat(this, v3, 0LL);
        if ( v6 >= 0 )
        {
          v6 = CPolicyConfig::ClearMixFormats(v3);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, __int64, LPVOID *))(*(_QWORD *)this + 32LL))(
                   this,
                   a2,
                   1LL,
                   &pv);
            if ( v6 >= 0 )
            {
              v6 = CPolicyConfig::SetDeviceFormat(this, v3, (const struct tWAVEFORMATEX *)pv);
              if ( v6 >= 0 )
                goto LABEL_14;
            }
          }
        }
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v6);
  }
LABEL_14:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v12 )
  {
    CoTaskMemFree(v12);
    v12 = 0LL;
  }
  if ( v2 )
  {
    v8 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL);
    if ( v8 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v2);
    else
      v8((volatile signed __int32 *)v2);
  }
  if ( v3 )
    ((void (__fastcall *)(struct IMMDevice *))v3->lpVtbl->Release)(v3);
  return (unsigned int)v6;
}
