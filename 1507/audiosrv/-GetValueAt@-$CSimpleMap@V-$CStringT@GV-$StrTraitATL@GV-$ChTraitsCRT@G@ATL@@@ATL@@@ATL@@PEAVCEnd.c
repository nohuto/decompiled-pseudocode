/*
 * XREFs of ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAAEAPEAVCEndpointSaDeviceLists@@H@Z @ 0x1800685CC
 * Callers:
 *     ?Cleanup@CSaProvider@@IEAAXXZ @ 0x180073FA8 (-Cleanup@CSaProvider@@IEAAXXZ.c)
 *     ?IsUsingResource@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@_KPEAH@Z @ 0x180074E00 (-IsUsingResource@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@_KPEAH@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAPEAVCEndpointSaDeviceLists@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180074F58 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ?RegisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z @ 0x180075040 (-RegisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800751F0 (-ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z @ 0x1800758B0 (-UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?UpdateSaDevicePriority@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800759B0 (-UpdateSaDevicePriority@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009EAD4 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetValueAt(
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x1800685FELL);
  }
  return *(_QWORD *)(a1 + 8) + 8LL * a2;
}
