/*
 * XREFs of ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x180084BB8
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEBG@Z @ 0x180084E40 (-ClearMixFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180087E50 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800349D0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180034A84 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180087720 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::ClearMixFormats(struct IMMDevice *a1)
{
  int ProcessingModeSpecificMixFormatKey; // ebx
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v7; // [rsp+28h] [rbp-29h] BYREF
  struct _GUID v8; // [rsp+38h] [rbp-19h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+48h] [rbp-9h] BYREF
  __int64 v10; // [rsp+60h] [rbp+Fh]
  __int64 v11; // [rsp+68h] [rbp+17h]
  struct _tagpropertykey v12; // [rsp+70h] [rbp+1Fh] BYREF

  v11 = -2LL;
  v10 = 0LL;
  v7 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  if ( a1 )
  {
    ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(
                                           a1,
                                           0,
                                           &PKEY_AudioEngine_HWMixFormat,
                                           &pvar);
    if ( ProcessingModeSpecificMixFormatKey >= 0 )
    {
      ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(
                                             a1,
                                             0,
                                             &PKEY_AudioEngine_MixFormat,
                                             &pvar);
      if ( ProcessingModeSpecificMixFormatKey >= 0 )
      {
        ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, __int64 *))(*(_QWORD *)g_PolicyManager + 80LL))(
                                               g_PolicyManager,
                                               &v7);
        if ( ProcessingModeSpecificMixFormatKey >= 0 )
        {
          v3 = 0;
          v4 = v7;
          if ( *(_DWORD *)v7 )
          {
            while ( 1 )
            {
              v8 = *(struct _GUID *)(*(_QWORD *)(v4 + 8) + 16LL * v3);
              ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v8, 0, &v12);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(a1, 0, &v12, &pvar);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              v8 = *(struct _GUID *)(*(_QWORD *)(v7 + 8) + 16LL * v3);
              ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v8, 1, &v12);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(a1, 0, &v12, &pvar);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              ++v3;
              v4 = v7;
              if ( v3 >= *(_DWORD *)v7 )
                goto LABEL_12;
            }
          }
          else
          {
LABEL_12:
            v5 = 0;
            if ( *(_DWORD *)v4 )
            {
              do
              {
                v8 = *(struct _GUID *)(*(_QWORD *)(v4 + 8) + 16LL * v5);
                ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v8, 0, &v12);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(a1, 0, &v12, &pvar);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                v8 = *(struct _GUID *)(*(_QWORD *)(v7 + 8) + 16LL * v5);
                ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v8, 1, &v12);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(a1, 0, &v12, &pvar);
                if ( ProcessingModeSpecificMixFormatKey < 0 )
                  break;
                ++v5;
                v4 = v7;
              }
              while ( v5 < *(_DWORD *)v7 );
            }
          }
        }
      }
    }
  }
  else
  {
    ProcessingModeSpecificMixFormatKey = -2147467261;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( ProcessingModeSpecificMixFormatKey < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Au,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      ProcessingModeSpecificMixFormatKey);
  }
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
