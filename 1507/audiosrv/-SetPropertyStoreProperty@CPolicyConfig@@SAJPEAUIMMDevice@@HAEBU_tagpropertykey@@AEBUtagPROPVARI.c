/*
 * XREFs of ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800349D0
 * Callers:
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x180033320 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180034840 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x180034C5C (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x180084BB8 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180088710 (-SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x180088FC0 (-SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z.c)
 *     ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x1800891D0 (-SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180038204 (-GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetPropertyStoreProperty(
        struct IMMDevice *a1,
        int a2,
        const struct _tagpropertykey *a3,
        const struct tagPROPVARIANT *a4)
{
  int DevicePropertyStore; // esi
  struct IPropertyStore *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = (struct IPropertyStore *)-2LL;
  v8[0] = 0LL;
  DevicePropertyStore = GetDevicePropertyStore(a1, a2, 1u, v8);
  if ( DevicePropertyStore < 0
    || (DevicePropertyStore = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, const struct tagPROPVARIANT *))v8[0]->lpVtbl->SetValue)(
                                v8[0],
                                a3,
                                a4),
        DevicePropertyStore < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x48u,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        DevicePropertyStore);
    }
  }
  if ( v8[0] )
    ((void (__fastcall *)(struct IPropertyStore *))v8[0]->lpVtbl->Release)(v8[0]);
  return (unsigned int)DevicePropertyStore;
}
