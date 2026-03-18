/*
 * XREFs of MiStartingOffset @ 0x14007C940
 * Callers:
 *     MiTrimSection @ 0x1400083E8 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x140008570 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiStartingOffsetNeedLock @ 0x14007C8C0 (MiStartingOffsetNeedLock.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400AB060 (MiFinishMdlForMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x1400AB910 (MiPickClusterForMappedFileFault.c)
 *     MiAdvanceVadView @ 0x1400D6688 (MiAdvanceVadView.c)
 *     MiReadyFlushMdlToWrite @ 0x1400E3ACC (MiReadyFlushMdlToWrite.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1404D9E00 (MiPfAllocateMdls.c)
 *     MiFillMapFileInfo @ 0x1406210BC (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 SharedProtos; // rax

  v4 = *a1;
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v9 = a1[1];
    if ( a2 < v9 || a2 >= v9 + 8LL * *((unsigned int *)a1 + 11) )
    {
      if ( (*((_BYTE *)a1 + 34) & 2) != 0 )
        SharedProtos = MiGetSharedProtos(v4, a3, a1);
      else
        SharedProtos = MiGetSubsectionDriverProtos(a1);
      v10 = a2 - *(_QWORD *)(SharedProtos + 32);
    }
    else
    {
      v10 = a2 - v9;
    }
    return ((v10 << 9) & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)*((unsigned int *)a1 + 9) << 9);
  }
  else
  {
    v6 = a1[1];
    if ( v6 )
      v7 = (__int64)(a2 - v6) >> 3 << 12;
    else
      v7 = 0LL;
    return v7 + ((*((unsigned int *)a1 + 9) | ((unsigned __int64)((_WORD)a1[4] & 0xFFC0) << 26)) << 12);
  }
}
