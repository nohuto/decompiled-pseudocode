/*
 * XREFs of ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x18006DD10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800038A4 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067C88 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E594 (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x180087F5C (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 */

__int64 __fastcall CPolicyConfig::ResetDeviceFormat(CPolicyConfig *this, const unsigned __int16 *a2)
{
  struct IMMDevice *v2; // rbx
  int v5; // edi
  void (*v6)(void); // rax
  struct _GUID v8; // [rsp+30h] [rbp-10h] BYREF
  CEndpointCharacteristics *v9; // [rsp+78h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v11; // [rsp+88h] [rbp+48h] BYREF

  pv = 0LL;
  v2 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v8 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a2 )
  {
    v5 = -2147467261;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ResetDeviceFormat", 3599, v5);
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         &v9);
  if ( v5 < 0 )
    goto LABEL_10;
  v2 = (struct IMMDevice *)*((_QWORD *)v9 + 2);
  ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->AddRef)(v2);
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(v9, eHostProcessConnector, &v8, 0LL, 0LL);
  v5 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)this + 32LL))(
         this,
         a2,
         0LL,
         &v11);
  if ( v5 < 0 )
    goto LABEL_10;
  v5 = CPolicyConfig::ConfirmDeviceFormat(v9, v11, &v8, 0, 0);
  if ( v5 < 0 )
  {
    v5 = CPolicyConfig::SetDeviceFormat(this, v2, 0LL);
    if ( v5 < 0 )
      goto LABEL_10;
    v5 = CEndpointCharacteristics::ClearMixFormatCache(v9);
    if ( v5 < 0 )
      goto LABEL_10;
    v5 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, __int64, LPVOID *))(*(_QWORD *)this + 32LL))(
           this,
           a2,
           1LL,
           &pv);
    if ( v5 < 0 )
      goto LABEL_10;
    v5 = CPolicyConfig::SetDeviceFormat(this, v2, (const struct tWAVEFORMATEX *)pv);
    if ( v5 < 0 )
      goto LABEL_10;
  }
LABEL_11:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v11 )
  {
    CoTaskMemFree(v11);
    v11 = 0LL;
  }
  if ( v9 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v9);
    else
      v6();
  }
  if ( v2 )
    ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->Release)(v2);
  return (unsigned int)v5;
}
