/*
 * XREFs of MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiUnlinkStandbyBatch @ 0x140035470 (MiUnlinkStandbyBatch.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1400357F0 (MiDecrementAndInsertStandbyPages.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiBuildForkPageTable @ 0x140108830 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x140108B7C (MiFinishLastForkPageTable.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiJoinBitmapPages @ 0x1401EB150 (MiJoinBitmapPages.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MiMakeTransitionPteValid @ 0x1401F25F0 (MiMakeTransitionPteValid.c)
 *     MiInitializeProtoPfn @ 0x1401F4FAC (MiInitializeProtoPfn.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140536ED4 (MiMapNewSession.c)
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 *     MiDeleteLargePfnBitMap @ 0x140664984 (MiDeleteLargePfnBitMap.c)
 *     MiInitializeDummyPages @ 0x140796198 (MiInitializeDummyPages.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_SHOULD_PTE_BE_GLOBAL(unsigned __int64 a1)
{
  if ( a1 < 0xFFFFF6C000000000uLL )
    return HIBYTE(word_140326AE8);
  if ( a1 >= (((unsigned __int64)qword_140326950 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a1 < (((unsigned __int64)(qword_140326950 + 0x8000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    || a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFF8uLL )
  {
    return 0LL;
  }
  if ( a1 >= (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a1 <= (((unsigned __int64)qword_140326D38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    return HIBYTE(word_140326AE8);
  }
  return (unsigned __int8)word_140326AE8;
}
