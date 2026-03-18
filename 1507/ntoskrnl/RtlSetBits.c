/*
 * XREFs of RtlSetBits @ 0x14008B810
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiStoreEvictPageFile @ 0x140127CA4 (MiStoreEvictPageFile.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     MiAttemptPageFileReductionApc @ 0x140220E7C (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140221290 (MiExtendPagingFileMaximum.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402220BC (MiTrimUnusedPageFileRegionsApc.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140273CF0 (RtlpSparseBitmapCtxUpdateBits.c)
 *     PopSetBootPhaseRange @ 0x1403F2584 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1403F267C (PopDiscardRange.c)
 *     PnprMirrorMarkedPages @ 0x1404006D8 (PnprMirrorMarkedPages.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x14046BA68 (MiObtainRelocationBits.c)
 *     HvpAddFreeCellHint @ 0x14049F24C (HvpAddFreeCellHint.c)
 *     HvpRemoveFreeCellHint @ 0x14049F5E0 (HvpRemoveFreeCellHint.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     HvCheckBin @ 0x1404B86C0 (HvCheckBin.c)
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiLockdownSections @ 0x1405767B4 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x140576918 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     HvpRecoverData @ 0x1406650F0 (HvpRecoverData.c)
 *     HvpUpdateRecoveryVector @ 0x1406665FC (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x1406A5728 (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x14073D098 (ViAllocateContiguousMemory.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_140297800[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140295400[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140297800[v6];
      goto LABEL_4;
    }
  }
}
