/*
 * XREFs of ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140005F70
 * Callers:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x140010C30 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x140019700 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x140019F60 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAPOWrapperSrv>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 24), a2);
}
