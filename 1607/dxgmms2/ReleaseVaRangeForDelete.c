/*
 * XREFs of ReleaseVaRangeForDelete @ 0x1C0094A9C
 * Callers:
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C005AF90 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ReleaseVaRangeForDelete(VIDMM_MAPPED_VA_RANGE *a1)
{
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(a1);
}
