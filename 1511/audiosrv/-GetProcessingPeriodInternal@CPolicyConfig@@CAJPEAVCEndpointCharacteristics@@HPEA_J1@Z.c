/*
 * XREFs of ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x18000E7F0
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001B0B0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000EA00 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000EBE0 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x180085C40 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetProcessingPeriodInternal(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3,
        __int64 *a4)
{
  int PropertyStoreProperty; // esi
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
LABEL_17:
                PropertyStoreProperty = -2147024809;
                break;
              }
              *a3 = 100000LL;
              PropertyStoreProperty = CPolicyConfig::SetProcessingPeriodInternal(v8, a3);
              break;
            }
            if ( pvar.lVal != 8 )
              goto LABEL_17;
            v10 = *pvar.cabstr.pElems;
            *a3 = (__int64)*pvar.cabstr.pElems;
            if ( v10 )
              break;
            if ( (unsigned int)++v9 >= 0x7D0 )
            {
              PropertyStoreProperty = -2147467259;
              if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x30u,
                  (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids);
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
  if ( PropertyStoreProperty < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)PropertyStoreProperty);
  }
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  return (unsigned int)PropertyStoreProperty;
}
