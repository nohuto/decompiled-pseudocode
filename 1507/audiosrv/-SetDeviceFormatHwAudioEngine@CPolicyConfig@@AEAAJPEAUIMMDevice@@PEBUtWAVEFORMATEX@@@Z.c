/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x180033320
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033F74 (-SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800349D0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003742C (-UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z @ 0x180037928 (-SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetOffloadMixFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180037A9C (-GetOffloadMixFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetDeviceFormatHwAudioEngine(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        struct tWAVEFORMATEX *a3)
{
  int OffloadMixFormat; // ebx
  LONG v6; // eax
  int updated; // eax
  struct tagPROPVARIANT v9; // [rsp+20h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+20h] BYREF
  struct tWAVEFORMATEX *v11; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0LL;
  pv = 0LL;
  memset(&v9, 0, sizeof(v9));
  if ( !a3 )
  {
    updated = CPolicyConfig::UpdateDeviceFormatEPProperty(1, a2, eHostProcessConnector, 0LL);
    goto LABEL_8;
  }
  OffloadMixFormat = ValidateUncompressedWaveFormatEx(a3);
  if ( OffloadMixFormat < 0 )
    goto LABEL_13;
  OffloadMixFormat = CPolicyConfig::UpdateDeviceFormatEPProperty(1, a2, eHostProcessConnector, a3);
  if ( OffloadMixFormat >= 0 )
  {
    OffloadMixFormat = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( OffloadMixFormat >= 0 )
    {
      OffloadMixFormat = SetOffloadDeviceFormat((const unsigned __int16 *)pv, a3);
      if ( OffloadMixFormat >= 0 )
      {
        OffloadMixFormat = GetOffloadMixFormat((const unsigned __int16 *)pv, &v11);
        if ( OffloadMixFormat >= 0 )
        {
          v9.vt = 65;
          v6 = v11->cbSize + 18;
          v9.bstrblobVal.pData = (BYTE *)v11;
          v9.lVal = v6;
          updated = CPolicyConfig::SetPropertyStoreProperty(a2, 0, &PKEY_AudioEngine_HWMixFormat, &v9);
LABEL_8:
          OffloadMixFormat = updated;
        }
      }
    }
  }
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
LABEL_13:
  if ( OffloadMixFormat < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Fu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      OffloadMixFormat);
  }
  return (unsigned int)OffloadMixFormat;
}
