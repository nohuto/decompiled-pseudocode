/*
 * XREFs of MiCheckControlArea @ 0x140027A60
 * Callers:
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     MiDereferenceControlAreaBySection @ 0x14002712C (MiDereferenceControlAreaBySection.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MmTrimSection @ 0x14008EBB0 (MmTrimSection.c)
 *     MiFlushRelease @ 0x1400A43EC (MiFlushRelease.c)
 *     MiDereferenceControlArea @ 0x1400B32FC (MiDereferenceControlArea.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemCacheReferences @ 0x1401E6C20 (MiRemoveSystemCacheReferences.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAC74 (MiFreeOverlappedFlushEntry.c)
 * Callees:
 *     MiGetNextPartition @ 0x140001E08 (MiGetNextPartition.c)
 *     MiBuildWakeList @ 0x1400268F0 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiClearFilePointer @ 0x14008F584 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x1400A5778 (MiImageUnused.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     MiCleanSection @ 0x140112210 (MiCleanSection.c)
 *     MiShouldTrimUnusedSegments @ 0x1401DF244 (MiShouldTrimUnusedSegments.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnImageBase @ 0x14042DC84 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x1404A25C4 (MiSegmentDelete.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 inserted; // r15
  unsigned int v5; // ebx
  KIRQL v6; // bp
  __int64 *v7; // r14
  int v9; // eax
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf
  __int64 *v15; // rbx
  __int64 *i; // rbx
  _QWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  inserted = 0LL;
  v5 = 0;
  v6 = a2;
  v7 = 0LL;
  v18[1] = 0LL;
  v18[0] = 0xFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( *(_QWORD *)(a1 + 80) )
      v5 = 4;
  }
  else if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v9 = *(_DWORD *)(a1 + 56);
      if ( (v9 & 0x40000) != 0 )
      {
        v5 = 1;
      }
      else
      {
        if ( (v9 & 0x20020) != 0x20020 )
          inserted = MiInsertUnusedSegment(a1, a2, a3, a4);
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
          MiImageUnused(a1, 1LL, v18);
      }
      if ( (*(_DWORD *)(a1 + 56) & 0x20020) == 0x20020 )
      {
        *(_DWORD *)(a1 + 56) |= 4u;
        *(_QWORD *)(a1 + 40) = 1LL;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
        MiPurgeImageSection(a1);
        v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        *(_DWORD *)(a1 + 56) &= ~4u;
        v6 = v10;
        v14 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        if ( !v14 || *(_QWORD *)(a1 + 24) )
        {
          v5 = v5 & 0xFFFFFFFA | 4;
        }
        else if ( *(_QWORD *)(a1 + 32) )
        {
          if ( (v5 & 1) == 0 )
          {
            inserted = MiInsertUnusedSegment(a1, v11, v12, v13);
            v5 |= 4u;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) |= 1u;
          v5 = v5 & 0xFFFFFFFC | 2;
          MiClearFilePointer(a1);
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 56) |= 1u;
      v5 = 2;
      MiClearFilePointer(a1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v5 = 2;
  }
  if ( (v5 & 4) != 0 )
  {
    v7 = MiBuildWakeList(a1, 3);
    v5 &= ~4u;
  }
  if ( v5 )
  {
    if ( (v5 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, v6, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      __writecr8(v6);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    __writecr8(v6);
    if ( v7 )
    {
      do
      {
        v15 = (__int64 *)*v7;
        KeSignalGate(v7 + 2, 1LL);
        v7 = v15;
      }
      while ( v15 );
    }
    if ( qword_1403251A8 >= 9 * (qword_140325228 / 0xAuLL) )
    {
      if ( (unsigned int)MiShouldTrimUnusedSegments(qword_140325228, qword_140325228 / 0xAuLL) )
      {
        for ( i = MiGetNextPartition(0LL); i; i = MiGetNextPartition(i) )
        {
          if ( i[192] )
            KeSetEvent((PRKEVENT)(i + 155), 0, 0);
        }
      }
    }
  }
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  return MiReturnImageBase(v18);
}
