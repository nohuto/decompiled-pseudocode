/*
 * XREFs of MI_SHOULD_PTE_BE_GLOBAL @ 0x140036D30
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140020FBC (MiInitializeSystemPageTable.c)
 *     MiUnlinkStandbyBatch @ 0x1400358F0 (MiUnlinkStandbyBatch.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140035C70 (MiDecrementAndInsertStandbyPages.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FE0F4 (MiSetSystemCodeProtection.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiBuildForkPageTable @ 0x14010AAB0 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x14010ADFC (MiFinishLastForkPageTable.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiJoinBitmapPages @ 0x1401EB324 (MiJoinBitmapPages.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MiMakeTransitionPteValid @ 0x1401F27C4 (MiMakeTransitionPteValid.c)
 *     MiInitializeProtoPfn @ 0x1401F5180 (MiInitializeProtoPfn.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140536994 (MiMapNewSession.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
 *     MiDeleteLargePfnBitMap @ 0x1406648A0 (MiDeleteLargePfnBitMap.c)
 *     MiInitializeDummyPages @ 0x140796198 (MiInitializeDummyPages.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_SHOULD_PTE_BE_GLOBAL(unsigned __int64 a1)
{
  if ( a1 < 0xFFFFF6C000000000uLL )
    return HIBYTE(word_140326AA8);
  if ( a1 >= (((unsigned __int64)qword_140326910 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a1 < (((unsigned __int64)(qword_140326910 + 0x8000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    || a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFF8uLL )
  {
    return 0LL;
  }
  if ( a1 >= (((unsigned __int64)qword_140327F90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a1 <= (((unsigned __int64)qword_140326CF8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    return HIBYTE(word_140326AA8);
  }
  return (unsigned __int8)word_140326AA8;
}
