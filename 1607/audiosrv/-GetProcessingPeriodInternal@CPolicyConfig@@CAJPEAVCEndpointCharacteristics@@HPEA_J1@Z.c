/*
 * XREFs of ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180027288
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800116C0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800273C4 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180027514 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x18006F754 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetProcessingPeriodInternal(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3,
        __int64 *a4)
{
  int PropertyStoreProperty; // edi
  struct IMMDevice *v8; // rbx
  int v9; // ebp
  BSTR v10; // rcx
  struct tagPROPVARIANT pvar; // [rsp+28h] [rbp-40h] BYREF

  PropertyStoreProperty = 0;
  v8 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  v9 = 0;
  if ( a1 && (a3 || a4) )
  {
    if ( !a4
      || (PropertyStoreProperty = CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(a1, a2, a4),
          PropertyStoreProperty >= 0) )
    {
      if ( a3 )
      {
        if ( a2 )
        {
          *a3 = 100000LL;
        }
        else
        {
          v8 = (struct IMMDevice *)*((_QWORD *)a1 + 2);
          ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->AddRef)(v8);
          while ( 1 )
          {
            PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v8, 0, &PKEY_AudioEngine_Period, &pvar);
            if ( PropertyStoreProperty < 0 )
              break;
            if ( pvar.vt != 65 )
            {
              if ( pvar.vt )
              {
LABEL_18:
                PropertyStoreProperty = -2147024809;
                break;
              }
              *a3 = 100000LL;
              PropertyStoreProperty = CPolicyConfig::SetProcessingPeriodInternal(v8, a3);
              break;
            }
            if ( pvar.lVal != 8 )
              goto LABEL_18;
            v10 = *pvar.cabstr.pElems;
            *a3 = (__int64)*pvar.cabstr.pElems;
            if ( v10 )
              break;
            if ( (unsigned int)++v9 >= 0x7D0 )
            {
              PropertyStoreProperty = -2147467259;
              if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
              }
              break;
            }
            Sleep(5u);
          }
        }
      }
      else
      {
        PropertyStoreProperty = 0;
      }
    }
  }
  else
  {
    PropertyStoreProperty = -2147467261;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( PropertyStoreProperty < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetProcessingPeriodInternal", 0xD14u, PropertyStoreProperty);
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  return (unsigned int)PropertyStoreProperty;
}
