/*
 * XREFs of MiCheckControlArea @ 0x140027EE0
 * Callers:
 *     MmFlushSection @ 0x140022558 (MmFlushSection.c)
 *     MiDereferenceControlAreaBySection @ 0x1400275AC (MiDereferenceControlAreaBySection.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiAddViewsForSection @ 0x14002C690 (MiAddViewsForSection.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MmTrimSection @ 0x14008F450 (MmTrimSection.c)
 *     MiFlushRelease @ 0x1400A5E74 (MiFlushRelease.c)
 *     MiDereferenceControlArea @ 0x1400B54C4 (MiDereferenceControlArea.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemCacheReferences @ 0x1401E6DF4 (MiRemoveSystemCacheReferences.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAE48 (MiFreeOverlappedFlushEntry.c)
 * Callees:
 *     MiGetNextPartition @ 0x140001C94 (MiGetNextPartition.c)
 *     MiBuildWakeList @ 0x140026D70 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x140026FEC (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     MiClearFilePointer @ 0x14008FE24 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x1400A7200 (MiImageUnused.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 *     MiCleanSection @ 0x140111CAC (MiCleanSection.c)
 *     MiShouldTrimUnusedSegments @ 0x1401DF418 (MiShouldTrimUnusedSegments.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiReturnSubsectionCharges @ 0x1401F5310 (MiReturnSubsectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DE9C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnImageBase @ 0x14042EDB4 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
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
    if ( qword_140325168 >= 9 * (qword_1403251E8 / 0xAuLL) )
    {
      if ( (unsigned int)MiShouldTrimUnusedSegments(qword_1403251E8, qword_1403251E8 / 0xAuLL) )
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
