/*
 * XREFs of ?FindSaDeviceInstanceInMap@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAVCSaDeviceInstance@@@Z @ 0x18007440C
 * Callers:
 *     ?FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180074234 (-FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000CA44 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?FindMatchingSaDevice@CEndpointSaDeviceLists@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAVCSaDeviceInstance@@@Z @ 0x180074110 (-FindMatchingSaDevice@CEndpointSaDeviceLists@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAPEAVCEndpointSaDeviceLists@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180074F58 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 */

__int64 __fastcall CSaProvider::FindSaDeviceInstanceInMap(
        char *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct _GUID *a6,
        struct CSaDeviceInstance **a7)
{
  struct CSaDeviceInstance **v7; // r14
  unsigned int v10; // edi
  CEndpointSaDeviceLists *v11; // rbx
  __int64 v12; // rcx
  unsigned __int16 v13; // dx
  struct _GUID v15; // [rsp+20h] [rbp-18h] BYREF
  char *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = a1;
  v7 = a7;
  v10 = -2005139430;
  *a7 = 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v16,
    a3);
  v11 = (CEndpointSaDeviceLists *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::Lookup(
                                    a2,
                                    &v16);
  ATL::CStringData::Release((ATL::CStringData *)(v16 - 24));
  if ( v11 )
  {
    if ( a4 == 1 && *((_DWORD *)v11 + 49) )
    {
      v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
        return (unsigned int)-2005139389;
      }
      v13 = 25;
LABEL_8:
      WPP_SF_(*(_QWORD *)(v12 + 16), v13, (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids);
      return (unsigned int)-2005139389;
    }
    if ( *((_DWORD *)v11 + 48) )
    {
      v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
        return (unsigned int)-2005139389;
      }
      v13 = 26;
      goto LABEL_8;
    }
    if ( a5 == eOffloadConnector )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x1Bu,
          (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids);
      }
    }
    else
    {
      v15 = *a6;
      return (unsigned int)CEndpointSaDeviceLists::FindMatchingSaDevice(v11, a5, &v15, v7);
    }
  }
  return v10;
}
