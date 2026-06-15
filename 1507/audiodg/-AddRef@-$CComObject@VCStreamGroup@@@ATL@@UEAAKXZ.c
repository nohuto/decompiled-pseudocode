/*
 * XREFs of ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140013980
 * Callers:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x1400135C0 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x140019E20 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamGroup>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 16), a2);
}
