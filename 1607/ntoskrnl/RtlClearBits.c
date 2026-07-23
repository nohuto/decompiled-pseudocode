/*
 * XREFs of RtlClearBits @ 0x14002D260
 * Callers:
 *     MiClearNonPagedBitMapBits @ 0x140081EB4 (MiClearNonPagedBitMapBits.c)
 *     MiReleaseSessionVa @ 0x1400AC378 (MiReleaseSessionVa.c)
 *     MiStoreEvictPageFile @ 0x1400AE60C (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDD3C (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1401EE474 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x14021296C (RtlFindSetBitsAndClear.c)
 *     PopMirrorPhysicalMemory @ 0x1403CA5D8 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1403DC0C4 (PnprMarkOrMirrorPages.c)
 *     MiReturnImageBase @ 0x14042DC84 (MiReturnImageBase.c)
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 *     HvIsCellAllocated @ 0x140438890 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043B810 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 *     PspQueryRateControlHistory @ 0x14046804C (PspQueryRateControlHistory.c)
 *     MiObtainRelocationBits @ 0x14046D704 (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvpAdjustBitmap @ 0x14047DCD0 (HvpAdjustBitmap.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 *     HvpRemoveFreeCellHint @ 0x1404F7A60 (HvpRemoveFreeCellHint.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x140569278 (MiCreatePagefile.c)
 *     HvpRecoverData @ 0x14061136C (HvpRecoverData.c)
 *     MiCreateSessionDriverProtos @ 0x140664698 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x14069AA90 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x1407096A0 (ViFreeToContiguousMemory.c)
 *     MiAssignSessionRanges @ 0x1407AAAD8 (MiAssignSessionRanges.c)
 *     MiAssignSystemVa @ 0x1407AAFAC (MiAssignSystemVa.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_14026F6B8[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14026F6B8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14026F6C8[v6];
      goto LABEL_4;
    }
  }
}
