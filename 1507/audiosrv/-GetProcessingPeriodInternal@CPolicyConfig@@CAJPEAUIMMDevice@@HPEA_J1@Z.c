/*
 * XREFs of ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z @ 0x18002D4B8
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001EF00 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18002D5C0 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x180034C5C (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriodInternal(struct IMMDevice *a1, int a2, __int64 *a3, __int64 *a4)
{
  int PropertyStoreProperty; // ebx
  int v7; // esi
  BSTR v8; // rdx
  struct tagPROPVARIANT pvar[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(pvar, 0, 24);
  PropertyStoreProperty = 0;
  v7 = 0;
  if ( a1 && (a3 || a4) )
  {
    if ( a4 )
      *a4 = 30000LL;
    if ( a3 )
    {
      if ( a2 )
      {
        *a3 = 100000LL;
      }
      else
      {
        while ( 1 )
        {
          PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, 0, &PKEY_AudioEngine_Period, pvar);
          if ( PropertyStoreProperty < 0 )
            break;
          if ( pvar[0].vt != 65 )
          {
            if ( !pvar[0].vt )
            {
              *a3 = 100000LL;
              PropertyStoreProperty = CPolicyConfig::SetProcessingPeriodInternal(a1, a3);
              break;
            }
LABEL_15:
            PropertyStoreProperty = -2147024809;
            break;
          }
          if ( pvar[0].lVal != 8 )
            goto LABEL_15;
          v8 = *pvar[0].cabstr.pElems;
          *a3 = (__int64)*pvar[0].cabstr.pElems;
          if ( v8 )
            break;
          if ( (unsigned int)++v7 >= 0x7D0 )
          {
            PropertyStoreProperty = -2147467259;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
            {
              WPP_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0x31u,
                (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids);
            }
            break;
          }
          Sleep(5u);
        }
      }
    }
  }
  else
  {
    PropertyStoreProperty = -2147467261;
  }
  PropVariantClear((PROPVARIANT *)pvar);
  if ( PropertyStoreProperty < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      50LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      (unsigned int)PropertyStoreProperty);
  }
  return (unsigned int)PropertyStoreProperty;
}
