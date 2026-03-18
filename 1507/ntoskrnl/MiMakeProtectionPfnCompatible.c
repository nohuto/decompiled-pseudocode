/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x1400797E8
 * Callers:
 *     MiMapSinglePage @ 0x140003778 (MiMapSinglePage.c)
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1401356DC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014E5A8 (MmMapMemoryDumpMdlEx.c)
 *     MiInsertViewOfPhysicalSection @ 0x14016A030 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x140214A44 (MiMapMdlCommon.c)
 *     MiCopySinglePage @ 0x140215494 (MiCopySinglePage.c)
 *     MiInitializeSlowPte @ 0x14021957C (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 *     MiMapArbitraryPage @ 0x14022AC30 (MiMapArbitraryPage.c)
 *     MiMapPagesToZero @ 0x14022EE30 (MiMapPagesToZero.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
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
