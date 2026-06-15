/*
 * XREFs of ?AddSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180073CD0
 * Callers:
 *     ?FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180074234 (-FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengin.c)
 *     ?GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3K_K_J5PEBUtWAVEFORMATEX@@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800749B4 (-GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__.c)
 *     ?ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800751F0 (-ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000CA44 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180043758 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCEndpointSaDeviceLists@@@Z @ 0x180073B78 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSa.c)
 *     ?AddSaDevice@CEndpointSaDeviceLists@@QEAAJPEAVCSaDeviceInstance@@@Z @ 0x180073C04 (-AddSaDevice@CEndpointSaDeviceLists@@QEAAJPEAVCSaDeviceInstance@@@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAPEAVCEndpointSaDeviceLists@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180074F58 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSaProvider::AddSaDevice(char *a1, __int64 a2, __int64 *a3)
{
  CEndpointSaDeviceLists *v5; // rdi
  __int64 v6; // r8
  bool v8; // bl
  char *v9; // [rsp+50h] [rbp+8h] BYREF
  CEndpointSaDeviceLists *v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = a1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v9,
    *a3);
  v5 = (CEndpointSaDeviceLists *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::Lookup(
                                   a2,
                                   &v9);
  ATL::CStringData::Release((ATL::CStringData *)(v9 - 24));
  if ( v5 )
    return CEndpointSaDeviceLists::AddSaDevice(v5, (struct CSaDeviceInstance *)a3, v6);
  v5 = (CEndpointSaDeviceLists *)operator new(0xC8uLL);
  v9 = (char *)v5;
  if ( v5 )
  {
    `eh vector constructor iterator'(
      (char *)v5,
      48LL,
      4,
      (void (__fastcall *)(char *))ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::`default constructor closure');
    *((_DWORD *)v5 + 48) = 0;
    *((_DWORD *)v5 + 49) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v10 = v5;
  if ( v5
    && (ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          &v9,
          *a3),
        v8 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::Add(
                             a2,
                             (__int64)&v9,
                             (__int64)&v10) == 0,
        ATL::CStringData::Release((ATL::CStringData *)(v9 - 24)),
        !v8) )
  {
    return CEndpointSaDeviceLists::AddSaDevice(v5, (struct CSaDeviceInstance *)a3, v6);
  }
  else
  {
    return 2147942414LL;
  }
}
