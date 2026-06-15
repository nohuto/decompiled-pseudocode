/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x180084C00
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084D60 (-SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetOffloadMixFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800682B4 (-GetOffloadMixFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z @ 0x18006951C (-SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180085CF8 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800863B8 (-UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetDeviceFormatHwAudioEngine(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        struct tWAVEFORMATEX *a3)
{
  int updated; // eax
  int OffloadMixFormat; // ebx
  LONG v7; // eax
  struct tagPROPVARIANT v9; // [rsp+20h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+20h] BYREF
  struct tWAVEFORMATEX *v11; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0LL;
  pv = 0LL;
  memset(&v9, 0, sizeof(v9));
  if ( !a3 )
  {
    updated = CPolicyConfig::UpdateDeviceFormatEPProperty(1, a2, eHostProcessConnector, 0LL);
LABEL_9:
    OffloadMixFormat = updated;
    goto LABEL_10;
  }
  OffloadMixFormat = ValidateUncompressedWaveFormatEx(a3);
  if ( OffloadMixFormat < 0 )
    goto LABEL_14;
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
          v7 = v11->cbSize + 18;
          v9.bstrblobVal.pData = (BYTE *)v11;
          v9.lVal = v7;
          updated = CPolicyConfig::SetPropertyStoreProperty(a2, 0, &PKEY_AudioEngine_HWMixFormat, &v9);
          goto LABEL_9;
        }
      }
    }
  }
LABEL_10:
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
LABEL_14:
  if ( OffloadMixFormat < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      OffloadMixFormat);
  }
  return (unsigned int)OffloadMixFormat;
}
