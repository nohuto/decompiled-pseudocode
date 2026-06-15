/*
 * XREFs of ??_GCEndpointSaDeviceLists@@QEAAPEAXI@Z @ 0x180073B28
 * Callers:
 *     ?Cleanup@CSaProvider@@IEAAXXZ @ 0x180073FA8 (-Cleanup@CSaProvider@@IEAAXXZ.c)
 *     ?RemoveAllSaDevicesForEndpoint@CSaProvider@@IEAAXPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEBG@Z @ 0x180075478 (-RemoveAllSaDevicesForEndpoint@CSaProvider@@IEAAXPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV.c)
 *     ?RemoveSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180075720 (-RemoveSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CEndpointSaDeviceLists@@QEAA@XZ @ 0x180073810 (--1CEndpointSaDeviceLists@@QEAA@XZ.c)
 */

CEndpointSaDeviceLists *__fastcall CEndpointSaDeviceLists::`scalar deleting destructor'(CEndpointSaDeviceLists *this)
{
  CEndpointSaDeviceLists::~CEndpointSaDeviceLists(this);
  operator delete(this);
  return this;
}
