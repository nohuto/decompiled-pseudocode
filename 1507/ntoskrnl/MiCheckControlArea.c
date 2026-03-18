/*
 * XREFs of MiCheckControlArea @ 0x14008B090
 * Callers:
 *     MiDereferenceControlArea @ 0x140025CDC (MiDereferenceControlArea.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiDereferenceControlAreaBySection @ 0x140089ED0 (MiDereferenceControlAreaBySection.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MmTrimSection @ 0x1400F8B8C (MmTrimSection.c)
 *     MiFlushRelease @ 0x1401198B8 (MiFlushRelease.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021E6C0 (MiFreeOverlappedFlushEntry.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiBuildWakeList @ 0x140088660 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x140089B00 (MiInsertUnusedSegment.c)
 *     MiClearFilePointer @ 0x1401201B4 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x1401202EC (MiImageUnused.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     MiCleanSection @ 0x140158DAC (MiCleanSection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x1404B7DB8 (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bp
  char v4; // di
  __int64 inserted; // r15
  __int64 *v6; // r14
  unsigned int v7; // ebx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rdx
  unsigned int v20; // r13d
  signed __int32 v21; // eax
  bool v22; // zf
  _DWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+28h] [rbp-30h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  CurrentIrql = a2;
  v4 = 0;
  inserted = 0LL;
  v6 = 0LL;
  v23[1] = 0;
  v7 = 0;
  v24 = 0LL;
  v23[0] = -1;
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
          inserted = MiInsertUnusedSegment(a1);
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
          MiImageUnused(a1, 1LL, v23);
      }
      v16 = *(_DWORD *)(a1 + 56);
      if ( (v16 & 0x20020) == 0x20020 )
      {
        *(_QWORD *)(a1 + 40) = 1LL;
        *(_DWORD *)(a1 + 56) = v16 | 4;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
        else
          *(_DWORD *)(a1 + 72) = 0;
        __writecr8(CurrentIrql);
        MiPurgeImageSection(a1);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
        }
        else
        {
          v20 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
            v20 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
          while ( 1 )
          {
            v21 = *(_DWORD *)(a1 + 72);
            if ( (v21 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v21 & 0x40000000) == 0 )
              _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v21 | 0x40000000, v21);
            if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v20);
          }
        }
        *(_DWORD *)(a1 + 56) &= ~4u;
        v22 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        if ( !v22 || *(_QWORD *)(a1 + 24) )
        {
          v7 = v7 & 0xFFFFFFFA | 4;
        }
        else if ( *(_QWORD *)(a1 + 32) )
        {
          if ( (v7 & 1) == 0 )
          {
            inserted = MiInsertUnusedSegment(a1);
            v7 |= 4u;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) |= 1u;
          v7 = v7 & 0xFFFFFFFC | 2;
          MiClearFilePointer(a1, v19);
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
      MiCleanSection(a1, CurrentIrql, 0LL);
    }
    else
    {
      v17 = (_DWORD *)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17, retaddr);
      else
        *v17 = 0;
      __writecr8(CurrentIrql);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    __writecr8(CurrentIrql);
    if ( v6 )
    {
      do
      {
        v18 = (__int64 *)*v6;
        KeSignalGate(v6 + 2, 1LL);
        v6 = v18;
      }
      while ( v18 );
    }
    if ( qword_14034FC68 && qword_14034FC58 )
    {
      v8 = qword_14034FC68;
      if ( qword_14034FC68 > (unsigned __int64)qword_140355368 )
        v8 = qword_140355368;
      v9 = 100 * qword_14034FC58;
      if ( v8 == 8275486 )
        v10 = v9 / 0x7E461E;
      else
        v10 = v9 / v8;
      if ( (unsigned int)v10 > dword_1403D00F4 )
        goto LABEL_72;
      v11 = MiState[0];
      if ( MiState[0] > (unsigned __int64)qword_140355368 )
        v11 = qword_140355368;
      v12 = 100 * qword_14034E658;
      v13 = v11 == 4179486 ? v12 / 0x3FC61E : v12 / v11;
      if ( (unsigned int)v13 > dword_1403D00F4 )
LABEL_72:
        v4 = 1;
      if ( (v4 & 1) != 0 )
        KeSetEvent(&stru_1403541A8, 0, 0);
    }
  }
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  return MiReturnImageBase(v23);
}
