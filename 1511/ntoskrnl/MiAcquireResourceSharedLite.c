/*
 * XREFs of MiAcquireResourceSharedLite @ 0x1400EF804
 * Callers:
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiDeleteBootRange @ 0x1401332F0 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401CF300 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     MmIsDriverVerifyingByAddress @ 0x14050C124 (MmIsDriverVerifyingByAddress.c)
 *     MmBackSystemImageWithPagefile @ 0x140522E38 (MmBackSystemImageWithPagefile.c)
 *     MmGetSectionRange @ 0x140621B80 (MmGetSectionRange.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 */

char __fastcall MiAcquireResourceSharedLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  return 1;
}
