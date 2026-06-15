/*
 * XREFs of ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140006580
 * Callers:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x1400081F0 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CProtectedOutputController@@UEAAKXZ @ 0x140016BD0 (-AddRef@CProtectedOutputController@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x140019C50 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x140019C60 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
}
