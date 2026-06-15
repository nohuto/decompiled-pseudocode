/*
 * XREFs of ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x18006F754
 * Callers:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180027288 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067B44 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x18006F6D0 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18006F7E8 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriodInternal(struct IMMDevice *a1, BYTE *a2)
{
  int v2; // ebx
  struct tagPROPVARIANT v4; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
  {
    v2 = -2147467261;
    goto LABEL_9;
  }
  if ( *(_QWORD *)a2 && (unsigned __int64)(*(_QWORD *)a2 - 50000LL) > 0xE7EF0 )
  {
    v2 = -2005139386;
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriodInternal", 3405, v2);
    return (unsigned int)v2;
  }
  v4.bstrblobVal.pData = a2;
  *(_QWORD *)&v4.vt = 65LL;
  v4.hVal.QuadPart = 8LL;
  v2 = CPolicyConfig::SetPropertyStoreProperty(a1, 0, &PKEY_AudioEngine_Period, &v4);
  if ( v2 < 0 )
    goto LABEL_9;
  return (unsigned int)v2;
}
