/*
 * XREFs of RtlClearBits @ 0x14002D6E0
 * Callers:
 *     MiClearNonPagedBitMapBits @ 0x140083D54 (MiClearNonPagedBitMapBits.c)
 *     MiReleaseSessionVa @ 0x1400ADE10 (MiReleaseSessionVa.c)
 *     MiStoreEvictPageFile @ 0x1400B0530 (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     BgpFwFreeMemory @ 0x14012968C (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDF10 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1401EE648 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x140212B40 (RtlFindSetBitsAndClear.c)
 *     PopMirrorPhysicalMemory @ 0x1403CA5D8 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1403DC0C4 (PnprMarkOrMirrorPages.c)
 *     MiReturnImageBase @ 0x14042EDB4 (MiReturnImageBase.c)
 *     MiCopyToCfgBitMap @ 0x14042F1E0 (MiCopyToCfgBitMap.c)
 *     HvIsCellAllocated @ 0x1404399C0 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043C940 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     PspQueryRateControlHistory @ 0x14046917C (PspQueryRateControlHistory.c)
 *     MiObtainRelocationBits @ 0x14046E834 (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x140476BFC (SepGetLowBoxNumberEntry.c)
 *     HvpAddBin @ 0x14047DF10 (HvpAddBin.c)
 *     HvpAdjustBitmap @ 0x14047EF7C (HvpAdjustBitmap.c)
 *     HvFreeHivePartial @ 0x140481AF0 (HvFreeHivePartial.c)
 *     HvpRemoveFreeCellHint @ 0x140514670 (HvpRemoveFreeCellHint.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiReleaseDriverPtes @ 0x140544938 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x140568D38 (MiCreatePagefile.c)
 *     HvpRecoverData @ 0x1406112B8 (HvpRecoverData.c)
 *     MiCreateSessionDriverProtos @ 0x1406645B4 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x14069A9AC (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x140709670 (ViFreeToContiguousMemory.c)
 *     MiAssignSessionRanges @ 0x1407AAAD8 (MiAssignSessionRanges.c)
 *     MiAssignSystemVa @ 0x1407AAFAC (MiAssignSystemVa.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
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
      v7 = ~(byte_14026F698[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14026F698[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14026F6A8[v6];
      goto LABEL_4;
    }
  }
}
