/*
 * XREFs of ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x18007F618
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180084310 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18008368C (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180083744 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180085CF8 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
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
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x39u,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      ProcessingModeSpecificMixFormatKey);
  }
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
