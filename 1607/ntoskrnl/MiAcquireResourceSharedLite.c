/*
 * XREFs of MiAcquireResourceSharedLite @ 0x1400883F0
 * Callers:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401485B0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     MmGetSectionRange @ 0x14052FFB0 (MmGetSectionRange.c)
 *     MmIsDriverVerifyingByAddress @ 0x140547980 (MmIsDriverVerifyingByAddress.c)
 *     MmBackSystemImageWithPagefile @ 0x140550FC8 (MmBackSystemImageWithPagefile.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 */

char __fastcall MiAcquireResourceSharedLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  return 1;
}
