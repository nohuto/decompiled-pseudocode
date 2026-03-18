/*
 * XREFs of RtlSetBits @ 0x140028420
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x14007CB08 (RtlFindClearBitsAndSet.c)
 *     MiStoreEvictPageFile @ 0x1400B0530 (MiStoreEvictPageFile.c)
 *     MiFindFreePageFileSpace @ 0x1400B65FC (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x1401118C8 (MiSetPageFileAllocationBits.c)
 *     MiAssignSharedUserRanges @ 0x14013D1A0 (MiAssignSharedUserRanges.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDF10 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE330 (MiExtendPagingFileMaximum.c)
 *     PopSetBootPhaseRange @ 0x1403CB780 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1403CB7B8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x1403CB7FC (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x1403D1700 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 *     HvCheckBin @ 0x14042EFC0 (HvCheckBin.c)
 *     MiCopyToCfgBitMap @ 0x14042F1E0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042F650 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     SepAddLuidToIndexEntry @ 0x14046E2DC (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x14046E834 (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x140476BFC (SepGetLowBoxNumberEntry.c)
 *     RtlMarkExceptionHandlingPages @ 0x140482230 (RtlMarkExceptionHandlingPages.c)
 *     MiLockdownSections @ 0x1404839E0 (MiLockdownSections.c)
 *     MiReserveDriverPtes @ 0x1404CD0DC (MiReserveDriverPtes.c)
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140514670 (HvpRemoveFreeCellHint.c)
 *     HvpAddFreeCellHint @ 0x1405151F8 (HvpAddFreeCellHint.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14055E464 (CmpMountPreloadedHives.c)
 *     HvpRecoverData @ 0x1406112B8 (HvpRecoverData.c)
 *     HvpUpdateRecoveryVector @ 0x1406129E8 (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x14065B530 (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x140708620 (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x1407AB088 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
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
      v7 = byte_14026F698[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14026F6A8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14026F698[v6];
      goto LABEL_4;
    }
  }
}
