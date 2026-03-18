/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x1400FE304
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     MiMapSinglePage @ 0x1400FE59C (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401198BC (MmMapMemoryDumpMdlEx.c)
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1401D35FC (MiMapMdlCommon.c)
 *     MiCopySinglePage @ 0x1401D3E08 (MiCopySinglePage.c)
 *     MiInitializeSlowPte @ 0x1401D6C10 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 *     MiMapPagesToZero @ 0x1401E591C (MiMapPagesToZero.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned int v2; // ecx
  char v3; // al

  v2 = a1 & 7;
  v3 = *(_BYTE *)(a2 + 34) >> 6;
  if ( v3 )
  {
    if ( v3 == 2 )
      v2 |= 0x18u;
  }
  else
  {
    v2 |= 8u;
  }
  return v2;
}
