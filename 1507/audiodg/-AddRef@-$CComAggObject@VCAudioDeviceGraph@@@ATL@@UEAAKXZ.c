/*
 * XREFs of ?AddRef@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140016740
 * Callers:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x1400135C0 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComAggObject<CAudioDeviceGraph>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 8), a2);
}
