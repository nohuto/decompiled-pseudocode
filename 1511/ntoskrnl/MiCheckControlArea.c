/*
 * XREFs of MiCheckControlArea @ 0x14006D900
 * Callers:
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiFlushRelease @ 0x140098554 (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x1400A6E80 (MiDereferenceControlAreaBySection.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MmTrimSection @ 0x1400E8FF0 (MmTrimSection.c)
 *     MiDereferenceControlArea @ 0x1400EF460 (MiDereferenceControlArea.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401DA230 (MiFreeOverlappedFlushEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x14003AAEC (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 *     MiImageUnused @ 0x1400E6C4C (MiImageUnused.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     MiClearFilePointer @ 0x1400EA004 (MiClearFilePointer.c)
 *     MiCleanSection @ 0x140107088 (MiCleanSection.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x14041B3BC (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 inserted; // r12
  KIRQL v5; // r14
  __int64 *v6; // r15
  unsigned int v7; // ebx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  int v15; // eax
  __int64 *v16; // rbx
  KIRQL v17; // al
  __int64 v18; // rdx
  bool v19; // zf
  _DWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  inserted = 0LL;
  v5 = a2;
  v6 = 0LL;
  v20[1] = 0;
  v7 = 0;
  v21 = 0LL;
  v20[0] = -1;
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( *(_QWORD *)(a1 + 80) )
      v7 = 4;
  }
  else if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v15 = *(_DWORD *)(a1 + 56);
      if ( (v15 & 0x40000) != 0 )
      {
        v7 = 1;
      }
      else
      {
        if ( (v15 & 0x20020) != 0x20020 )
          inserted = MiInsertUnusedSegment(a1, a2);
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
          MiImageUnused(a1, 1LL, v20);
      }
      if ( (*(_DWORD *)(a1 + 56) & 0x20020) == 0x20020 )
      {
        *(_DWORD *)(a1 + 56) |= 4u;
        *(_QWORD *)(a1 + 40) = 1LL;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v5);
        MiPurgeImageSection(a1);
        v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        *(_DWORD *)(a1 + 56) &= ~4u;
        v5 = v17;
        v19 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        if ( !v19 || *(_QWORD *)(a1 + 24) )
        {
          v7 = v7 & 0xFFFFFFFA | 4;
        }
        else if ( *(_QWORD *)(a1 + 32) )
        {
          if ( (v7 & 1) == 0 )
          {
            inserted = MiInsertUnusedSegment(a1, v18);
            v7 |= 4u;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) |= 1u;
          v7 = v7 & 0xFFFFFFFC | 2;
          MiClearFilePointer(a1, v18);
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 56) |= 1u;
      v7 = 2;
      MiClearFilePointer(a1, a2);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v7 = 2;
  }
  if ( (v7 & 4) != 0 )
  {
    v6 = MiBuildWakeList(a1, 3);
    v7 &= ~4u;
  }
  if ( v7 )
  {
    if ( (v7 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, v5, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      __writecr8(v5);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    __writecr8(v5);
    if ( v6 )
    {
      do
      {
        v16 = (__int64 *)*v6;
        KeSignalGate(v6 + 2, 1LL);
        v6 = v16;
      }
      while ( v16 );
    }
    v8 = qword_1402FF7A8;
    if ( qword_1402FF7A8 && qword_1402FF798 )
    {
      if ( qword_1402FF7A8 > (unsigned __int64)qword_140301528 )
        v8 = qword_140301528;
      v9 = 100 * qword_1402FF798;
      if ( v8 == 8275486 )
        v10 = v9 / 0x7E461E;
      else
        v10 = v9 / v8;
      if ( (unsigned int)v10 > dword_140381104 )
        goto LABEL_55;
      v11 = MiState[0];
      if ( MiState[0] > (unsigned __int64)qword_140301528 )
        v11 = qword_140301528;
      v12 = 100 * qword_1402FE198;
      v13 = v11 == 4179486 ? v12 / 0x3FC61E : v12 / v11;
      if ( (unsigned int)v13 > dword_140381104 )
LABEL_55:
        v3 = 1;
      if ( (v3 & 1) != 0 )
        KeSetEvent(&stru_140300218, 0, 0);
    }
  }
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  return MiReturnImageBase(v20);
}
