/*
 * XREFs of RtlClearBits @ 0x140062740
 * Callers:
 *     MiReleaseSessionVa @ 0x14010876C (MiReleaseSessionVa.c)
 *     MiStoreEvictPageFile @ 0x140127CA4 (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     MiClearNonPagedBitMapBits @ 0x1401539D0 (MiClearNonPagedBitMapBits.c)
 *     MiZeroPageFile @ 0x14020DB5C (MiZeroPageFile.c)
 *     MiAttemptPageFileReductionApc @ 0x140220E7C (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402216C8 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x140247704 (RtlFindSetBitsAndClear.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140273CF0 (RtlpSparseBitmapCtxUpdateBits.c)
 *     PopMirrorPhysicalMemory @ 0x1403F1244 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x140400594 (PnprMarkOrMirrorPages.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x14044D4F0 (HvFreeHivePartial.c)
 *     MiObtainRelocationBits @ 0x14046BA68 (MiObtainRelocationBits.c)
 *     HvpRemoveFreeCellHint @ 0x14049F5E0 (HvpRemoveFreeCellHint.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     HvpAdjustBitmap @ 0x1404AF3A8 (HvpAdjustBitmap.c)
 *     MiReturnImageBase @ 0x1404B7DB8 (MiReturnImageBase.c)
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 *     PspQueryRateControlHistory @ 0x140506D2C (PspQueryRateControlHistory.c)
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 *     HvpRecoverData @ 0x1406650F0 (HvpRecoverData.c)
 *     MiCreateSessionDriverProtos @ 0x1406A0C0C (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x1406DBC88 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x14073E260 (ViFreeToContiguousMemory.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
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
      v7 = ~(byte_140297800[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140297800[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140295400[v6];
      goto LABEL_4;
    }
  }
}
