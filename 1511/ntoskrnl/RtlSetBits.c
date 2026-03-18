/*
 * XREFs of RtlSetBits @ 0x140061410
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     MiStoreEvictPageFile @ 0x1400ECEEC (MiStoreEvictPageFile.c)
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140109328 (MiSetPageFileAllocationBits.c)
 *     MiAttemptPageFileReductionApc @ 0x1401DC124 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x1401DC544 (MiExtendPagingFileMaximum.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140223D08 (RtlpSparseBitmapCtxUpdateBits.c)
 *     PopGenerateUnHibernatedMdl @ 0x14039DE20 (PopGenerateUnHibernatedMdl.c)
 *     PopSetBootPhaseRange @ 0x14039FA80 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x14039FAB8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x14039FAC4 (PopCloneRange.c)
 *     PnprMirrorMarkedPages @ 0x1403B00EC (PnprMirrorMarkedPages.c)
 *     SepGetLowBoxNumberEntry @ 0x1403BEF4C (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x1403C5868 (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x1403C69EC (MiObtainRelocationBits.c)
 *     MiLockdownSections @ 0x1403CFEB0 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x1403D0014 (RtlMarkExceptionHandlingPages.c)
 *     HvpAddFreeCellHint @ 0x1403D9584 (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     HvCheckBin @ 0x140416190 (HvCheckBin.c)
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     HvpRemoveFreeCellHint @ 0x140479A30 (HvpRemoveFreeCellHint.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     HvpRecoverData @ 0x1405ECCC0 (HvpRecoverData.c)
 *     HvpUpdateRecoveryVector @ 0x1405EE10C (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x140625CBC (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x1406BC5AC (ViAllocateContiguousMemory.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
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
      v7 = byte_140247340[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_1402453A0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140247340[v6];
      goto LABEL_4;
    }
  }
}
