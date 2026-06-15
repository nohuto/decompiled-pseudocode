/*
 * XREFs of ?GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180083034
 * Callers:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800110D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180012DC8 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetOffloadDeviceFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800680D4 (-GetOffloadDeviceFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetComputedDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180082770 (-GetComputedDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_au.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180083EAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetDefaultFormat(
        struct CEndpointCharacteristics *a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IPropertyStore *a4,
        struct tWAVEFORMATEX **a5)
{
  int EndpointId; // ebx
  int ComputedDefaultFormat; // eax
  struct tagPROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+38h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  if ( a4 && a5 )
  {
    if ( a2 )
    {
      pv = 0LL;
      EndpointId = CEndpointCharacteristics::GetEndpointId(a1, (unsigned __int16 **)&pv);
      if ( EndpointId >= 0 )
        EndpointId = GetOffloadDeviceFormat((const unsigned __int16 *)pv, a5);
      CoTaskMemFree(pv);
    }
    else
    {
      if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, struct tagPROPVARIANT *))a4->lpVtbl->GetValue)(
             a4,
             &PKEY_AudioEngine_OEMFormat,
             &pvar) >= 0
        && pvar.vt == 65
        && (unsigned int)IsValidWfxBlob(&pvar)
        && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
      {
        ComputedDefaultFormat = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
      }
      else
      {
        ComputedDefaultFormat = CPolicyConfig::GetComputedDefaultFormat((struct IMMDevice **)a1, a3, a5);
      }
      EndpointId = ComputedDefaultFormat;
    }
  }
  else
  {
    EndpointId = -2147467261;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( EndpointId < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      EndpointId);
  }
  return (unsigned int)EndpointId;
}
