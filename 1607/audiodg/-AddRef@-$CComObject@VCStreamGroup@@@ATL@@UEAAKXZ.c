/*
 * XREFs of ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x1400110B0
 * Callers:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x140010C30 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x140019710 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamGroup>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 16), a2);
}
