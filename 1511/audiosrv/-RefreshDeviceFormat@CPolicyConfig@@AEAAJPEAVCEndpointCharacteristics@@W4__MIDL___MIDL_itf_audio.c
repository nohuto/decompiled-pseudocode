/*
 * XREFs of ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008408C
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180065164 (-GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084D60 (-SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendp.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::RefreshDeviceFormat(
        CPolicyConfig *this,
        struct CEndpointCharacteristics *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  struct IUnknown *v6; // rbx
  struct IUnknown *v7; // rdi
  int DeviceFormatInternal; // esi
  void *v9; // rdi
  LPVOID pv[4]; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF
  struct IUnknown *v13; // [rsp+98h] [rbp+48h] BYREF

  pv[1] = (LPVOID)-2LL;
  v13 = 0LL;
  v12 = 0;
  pv[0] = 0LL;
  v6 = (struct IUnknown *)*((_QWORD *)a2 + 2);
  pv[2] = v6;
  ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->AddRef)(v6);
  v7 = v13;
  if ( v13 != v6 )
  {
    ATL::AtlComQIPtrAssign(&v13, v6, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
    v7 = v13;
  }
  if ( v7 )
  {
    DeviceFormatInternal = ((__int64 (__fastcall *)(struct IUnknown *, int *))v7->lpVtbl[3].Release)(v7, &v12);
    if ( DeviceFormatInternal < 0 )
      goto LABEL_12;
  }
  DeviceFormatInternal = CPolicyConfig::GetDeviceFormatInternal(
                           (struct IMMDevice **)a2,
                           0,
                           v12,
                           a3,
                           (struct tWAVEFORMATEX **)pv);
  v9 = pv[0];
  if ( DeviceFormatInternal >= 0 )
    DeviceFormatInternal = CPolicyConfig::SetDeviceFormatInternal(
                             this,
                             (struct IMMDevice *)v6,
                             v12,
                             a3,
                             (const struct tWAVEFORMATEX *)pv[0]);
  if ( v9 )
    CoTaskMemFree(v9);
  if ( DeviceFormatInternal < 0 )
  {
LABEL_12:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        DeviceFormatInternal);
    }
  }
  ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  if ( v13 )
    ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
  return (unsigned int)DeviceFormatInternal;
}
