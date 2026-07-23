/*
 * XREFs of RtlSetBits @ 0x140027FA0
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     MiStoreEvictPageFile @ 0x1400AE60C (MiStoreEvictPageFile.c)
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140111E2C (MiSetPageFileAllocationBits.c)
 *     MiAssignSharedUserRanges @ 0x14013D710 (MiAssignSharedUserRanges.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDD3C (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE15C (MiExtendPagingFileMaximum.c)
 *     PopSetBootPhaseRange @ 0x1403CB780 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1403CB7B8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x1403CB7FC (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x1403D1700 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 *     HvCheckBin @ 0x14042DE90 (HvCheckBin.c)
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     SepAddLuidToIndexEntry @ 0x14046D1AC (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x14046D704 (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     RtlMarkExceptionHandlingPages @ 0x140480F84 (RtlMarkExceptionHandlingPages.c)
 *     MiLockdownSections @ 0x140482734 (MiLockdownSections.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x1404F7A60 (HvpRemoveFreeCellHint.c)
 *     HvpAddFreeCellHint @ 0x1404F85E8 (HvpAddFreeCellHint.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     HvpRecoverData @ 0x14061136C (HvpRecoverData.c)
 *     HvpUpdateRecoveryVector @ 0x140612A9C (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x14065B614 (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x140708650 (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x1407AB088 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
      v7 = byte_14026F6B8[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14026F6C8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14026F6B8[v6];
      goto LABEL_4;
    }
  }
}
