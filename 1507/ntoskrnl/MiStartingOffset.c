/*
 * XREFs of MiStartingOffset @ 0x140055230
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140036BC0 (MiFinishMdlForMappedFileFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     MiStartingOffsetNeedLock @ 0x140055170 (MiStartingOffsetNeedLock.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiAdvanceVadView @ 0x1400F1AD4 (MiAdvanceVadView.c)
 *     MiTrimSection @ 0x1400FA79C (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x1400FA970 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiPickClusterForMappedFileFault @ 0x140110FE0 (MiPickClusterForMappedFileFault.c)
 *     MiReadyFlushMdlToWrite @ 0x14011A498 (MiReadyFlushMdlToWrite.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14049E7C0 (MiPfAllocateMdls.c)
 *     MiFillMapFileInfo @ 0x1406A0750 (MiFillMapFileInfo.c)
 * Callees:
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
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
        SharedProtos = a1[3];
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
