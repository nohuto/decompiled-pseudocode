/*
 * XREFs of RtlClearBits @ 0x14003B430
 * Callers:
 *     MiClearNonPagedBitMapBits @ 0x14001A124 (MiClearNonPagedBitMapBits.c)
 *     MiStoreEvictPageFile @ 0x1400ECEEC (MiStoreEvictPageFile.c)
 *     MiReleaseSessionVa @ 0x1400EF034 (MiReleaseSessionVa.c)
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1401DC124 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1401DC968 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x1401F87DC (RtlFindSetBitsAndClear.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140223D08 (RtlpSparseBitmapCtxUpdateBits.c)
 *     PopMirrorPhysicalMemory @ 0x14039EA74 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1403AFFA8 (PnprMarkOrMirrorPages.c)
 *     SepGetLowBoxNumberEntry @ 0x1403BEF4C (SepGetLowBoxNumberEntry.c)
 *     MiObtainRelocationBits @ 0x1403C69EC (MiObtainRelocationBits.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     HvpAdjustBitmap @ 0x1403D83DC (HvpAdjustBitmap.c)
 *     PspQueryRateControlHistory @ 0x1403EBB78 (PspQueryRateControlHistory.c)
 *     HvIsCellAllocated @ 0x1403F94C0 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x14041B3BC (MiReturnImageBase.c)
 *     HvpRemoveFreeCellHint @ 0x140479A30 (HvpRemoveFreeCellHint.c)
 *     HvFreeHivePartial @ 0x140488090 (HvFreeHivePartial.c)
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1405384C0 (MiCreatePagefile.c)
 *     HvpRecoverData @ 0x1405ECCC0 (HvpRecoverData.c)
 *     MiCreateSessionDriverProtos @ 0x140621578 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x140659690 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x1406BD618 (ViFreeToContiguousMemory.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
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
      v7 = ~(byte_140247340[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140247340[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1402453A0[v6];
      goto LABEL_4;
    }
  }
}
