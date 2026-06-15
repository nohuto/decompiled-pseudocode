/*
 * XREFs of _CSaProvider::ReleaseSaDevice_::_1_::catch$0 @ 0x1800753FC
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSaDevice@CSaDeviceInstance@@QEAAXXZ @ 0x180075128 (-ReleaseSaDevice@CSaDeviceInstance@@QEAAXXZ.c)
 *     ?RemoveSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180075720 (-RemoveSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CSaProvider::ReleaseSaDevice_::_1_::catch_0(__int64 a1, __int64 a2)
{
  CSaDeviceInstance *v3; // rbx

  v3 = *(CSaDeviceInstance **)(a2 + 128);
  CSaProvider::RemoveSaDevice(a1, *(_QWORD *)(a2 + 112) + 104LL, v3);
  CSaDeviceInstance::ReleaseSaDevice(v3);
  *(_QWORD *)(a2 + 128) = v3;
  return &loc_180075302;
}
