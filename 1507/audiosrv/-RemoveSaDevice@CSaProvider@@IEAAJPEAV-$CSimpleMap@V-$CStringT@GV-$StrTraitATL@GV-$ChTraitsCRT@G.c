/*
 * XREFs of ?RemoveSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180075720
 * Callers:
 *     ?FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180074234 (-FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengin.c)
 *     ?ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800751F0 (-ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     _CSaProvider::ReleaseSaDevice_::_1_::catch$0 @ 0x1800753FC (_CSaProvider--ReleaseSaDevice_--_1_--catch$0.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000CA44 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??_GCEndpointSaDeviceLists@@QEAAPEAXI@Z @ 0x180073B28 (--_GCEndpointSaDeviceLists@@QEAAPEAXI@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAPEAVCEndpointSaDeviceLists@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180074F58 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ?Remove@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180075448 (-Remove@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ?RemoveSaDevice@CEndpointSaDeviceLists@@QEAAJPEAVCSaDeviceInstance@@PEAH@Z @ 0x18007568C (-RemoveSaDevice@CEndpointSaDeviceLists@@QEAAJPEAVCSaDeviceInstance@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSaProvider::RemoveSaDevice(__int64 a1, __int64 a2, __int64 *a3)
{
  CEndpointSaDeviceLists *v5; // rsi
  int v6; // ebx
  char *v8; // [rsp+50h] [rbp+8h] BYREF
  char *v9; // [rsp+60h] [rbp+18h] BYREF

  HIDWORD(v8) = HIDWORD(a1);
  LODWORD(v8) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v9,
    *a3);
  v5 = (CEndpointSaDeviceLists *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::Lookup(
                                   a2,
                                   (__int64 *)&v9);
  ATL::CStringData::Release((ATL::CStringData *)(v9 - 24));
  if ( v5 )
  {
    v6 = CEndpointSaDeviceLists::RemoveSaDevice(v5, (struct CSaDeviceInstance *)a3, (int *)&v8);
    if ( v6 >= 0 && (_DWORD)v8 )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        &v8,
        *a3);
      ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::Remove(
        a2,
        (__int64 *)&v8);
      ATL::CStringData::Release((ATL::CStringData *)(v8 - 24));
      CEndpointSaDeviceLists::`scalar deleting destructor'(v5);
    }
  }
  else
  {
    return (unsigned int)-2005139430;
  }
  return (unsigned int)v6;
}
