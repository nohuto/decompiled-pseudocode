/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x140108388
 * Callers:
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiZeroInParallelWorker @ 0x1401078C0 (MiZeroInParallelWorker.c)
 *     MiMapSinglePage @ 0x140107F04 (MiMapSinglePage.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401144BC (MmMapMemoryDumpMdlEx.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 *     MiMapMdlCommon @ 0x1401E3694 (MiMapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 *     MiCopySinglePage @ 0x1401E4828 (MiCopySinglePage.c)
 *     MiInitializeSlowPte @ 0x1401E870C (MiInitializeSlowPte.c)
 *     MiMapArbitraryPage @ 0x1401F9E68 (MiMapArbitraryPage.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
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
