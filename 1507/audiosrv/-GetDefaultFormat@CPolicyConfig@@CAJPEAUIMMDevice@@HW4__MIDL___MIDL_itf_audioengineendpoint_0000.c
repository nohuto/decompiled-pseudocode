/*
 * XREFs of ?GetDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800871D4
 * Callers:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FCC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpo.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001ED50 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180037ECC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetOffloadDeviceFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180069724 (-GetOffloadDeviceFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetComputedDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180086960 (-GetComputedDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

__int64 __fastcall CPolicyConfig::GetDefaultFormat(
        struct IUnknown *a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IPropertyStore *a4,
        struct tWAVEFORMATEX **a5)
{
  int v7; // ebx
  int ComputedDefaultFormat; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+20h] BYREF

  pv = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  if ( !a1 || !a4 || !a5 )
  {
    v7 = -2147467261;
    goto LABEL_15;
  }
  if ( !a2 )
  {
    if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, struct tagPROPVARIANT *))a4->lpVtbl->GetValue)(
           a4,
           &PKEY_AudioEngine_OEMFormat,
           &pvar) >= 0
      && pvar.vt == 65
      && IsValidWfxBlob(&pvar)
      && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
    {
      ComputedDefaultFormat = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
    }
    else
    {
      ComputedDefaultFormat = CPolicyConfig::GetComputedDefaultFormat(a1, a3, a5);
    }
    goto LABEL_13;
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a1->lpVtbl[1].Release)(a1, &pv);
  if ( v7 >= 0 )
  {
    ComputedDefaultFormat = GetOffloadDeviceFormat((const unsigned __int16 *)pv, a5);
LABEL_13:
    v7 = ComputedDefaultFormat;
  }
LABEL_15:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v7 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Bu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v7);
  }
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v7;
}
