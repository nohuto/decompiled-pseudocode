/*
 * XREFs of MiAcquireResourceSharedLite @ 0x140086B00
 * Callers:
 *     MiLookupDataTableEntry @ 0x140014A30 (MiLookupDataTableEntry.c)
 *     MiDeleteBootRange @ 0x140138D04 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140148040 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     MmGetSectionRange @ 0x14052FA70 (MmGetSectionRange.c)
 *     MmIsDriverVerifyingByAddress @ 0x140547440 (MmIsDriverVerifyingByAddress.c)
 *     MmBackSystemImageWithPagefile @ 0x140550A88 (MmBackSystemImageWithPagefile.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 */

char __fastcall MiAcquireResourceSharedLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  return 1;
}
