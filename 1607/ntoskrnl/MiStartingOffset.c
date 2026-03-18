/*
 * XREFs of MiStartingOffset @ 0x140031D40
 * Callers:
 *     MiIdentifyPfn @ 0x14000FC90 (MiIdentifyPfn.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiReadyFlushMdlToWrite @ 0x14002166C (MiReadyFlushMdlToWrite.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400232A0 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiTrimSection @ 0x14008F514 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x14008F754 (MiViewMayContainPage.c)
 *     MiAdvanceVadView @ 0x1400962A8 (MiAdvanceVadView.c)
 *     MiPickClusterForMappedFileFault @ 0x140097890 (MiPickClusterForMappedFileFault.c)
 *     MiStartingOffsetNeedLock @ 0x140099C4C (MiStartingOffsetNeedLock.c)
 *     MiInitializeImageProtos @ 0x1400FD83C (MiInitializeImageProtos.c)
 *     MiMakeImagePageOk @ 0x1401F6F38 (MiMakeImagePageOk.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140499560 (MiPfAllocateMdls.c)
 *     MiFillMapFileInfo @ 0x140656F64 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14065A34C (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140026CD4 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x1401F5088 (MiGetSharedProtos.c)
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
