/*
 * XREFs of ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x180034C5C
 * Callers:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z @ 0x18002D4B8 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@@PEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180034CE0 (-CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x180088EF0 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800349D0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriodInternal(struct IMMDevice *a1, BYTE *a2)
{
  int v2; // ebx
  struct tagPROPVARIANT v4; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 && a2 )
  {
    if ( *(_QWORD *)a2 && (unsigned __int64)(*(_QWORD *)a2 - 50000LL) > 0xE7EF0 )
    {
      v2 = -2005139386;
    }
    else
    {
      v4.bstrblobVal.pData = a2;
      *(_QWORD *)&v4.vt = 65LL;
      v4.hVal.QuadPart = 8LL;
      v2 = CPolicyConfig::SetPropertyStoreProperty(a1, 0, &PKEY_AudioEngine_Period, &v4);
      if ( v2 >= 0 )
        return (unsigned int)v2;
    }
  }
  else
  {
    v2 = -2147467261;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x34u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
