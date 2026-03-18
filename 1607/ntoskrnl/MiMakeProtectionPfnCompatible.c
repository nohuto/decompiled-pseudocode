/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14010A608
 * Callers:
 *     MiMapContiguousMemory @ 0x14009B8AC (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DE220 (MmMapLockedPagesSpecifyCache.c)
 *     MiZeroInParallelWorker @ 0x140109B40 (MiZeroInParallelWorker.c)
 *     MiMapSinglePage @ 0x14010A184 (MiMapSinglePage.c)
 *     MiZeroPhysicalPage @ 0x14010A488 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MmMapMemoryDumpMdlEx @ 0x140113F4C (MmMapMemoryDumpMdlEx.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401470C4 (MiDbgTranslatePhysicalAddress.c)
 *     MiMapMdlCommon @ 0x1401E3868 (MiMapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1401E44E4 (MmProtectMdlSystemAddress.c)
 *     MiCopySinglePage @ 0x1401E49FC (MiCopySinglePage.c)
 *     MiInitializeSlowPte @ 0x1401E88E0 (MiInitializeSlowPte.c)
 *     MiMapArbitraryPage @ 0x1401FA03C (MiMapArbitraryPage.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC4CC (MiZeroAndConvertLargePage.c)
 *     MiRelocateImagePfn @ 0x140447780 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x14052685C (MiValidateImagePfn.c)
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
