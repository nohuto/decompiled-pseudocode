/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x1400834A8
 * Callers:
 *     MmCanFileBeTruncated @ 0x140081EE4 (MmCanFileBeTruncated.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiEndingOffset @ 0x140055120 (MiEndingOffset.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiFindLastSubsection @ 0x140082B4C (MiFindLastSubsection.c)
 *     MmFlushImageSection @ 0x140119354 (MmFlushImageSection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v10; // ebx
  volatile signed __int32 *DataSectionObject; // rbx
  char v12; // dl
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v16; // rax
  bool v17; // zf
  unsigned int v18; // ebx
  unsigned __int64 v19; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  while ( 1 )
  {
    *a5 = 17;
    if ( !SectionObjectPointer->ImageSectionObject )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
      }
      else
      {
        v10 = 0;
        if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
          v10 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
        while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (dword_14034E780 & 0x40000000) == 0 )
            _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
        }
      }
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_7;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      else
        dword_14034E780 = 0;
      __writecr8(CurrentIrql);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
    }
    else
    {
      v18 = 0;
      if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
        v18 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v18);
      }
    }
LABEL_7:
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      else
        dword_14034E780 = 0;
      __writecr8(CurrentIrql);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
    __writecr8(CurrentIrql);
  }
  v12 = BYTE6(PerfGlobalGroupMask);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    v12 = BYTE6(PerfGlobalGroupMask);
  }
  else
  {
    dword_14034E780 = 0;
  }
  if ( DataSectionObject[14] & 1 | ((DataSectionObject[14] & 2) != 0) )
  {
    v17 = (v12 & 1) == 0;
  }
  else
  {
    if ( *((_QWORD *)DataSectionObject + 13) > 1uLL && (DataSectionObject[14] & 8) == 0 && !a4 )
      goto LABEL_26;
    if ( !*((_QWORD *)DataSectionObject + 6) || a3 == 1 && (a4 == 1 || !*((_QWORD *)DataSectionObject + 5)) )
    {
LABEL_14:
      *a5 = CurrentIrql;
      return DataSectionObject;
    }
    if ( a2 )
    {
      LastSubsection = (__int64)(DataSectionObject + 30);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection((__int64)DataSectionObject, 1);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v16 = MiEndingOffset(LastSubsection);
      if ( *a2 >= v16 )
      {
        v19 = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v19 )
          *a2 = v19;
        goto LABEL_14;
      }
    }
LABEL_26:
    v17 = (BYTE6(PerfGlobalGroupMask) & 1) == 0;
  }
  if ( v17 )
    *((_DWORD *)DataSectionObject + 18) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 18, retaddr);
  __writecr8(CurrentIrql);
  return 0LL;
}
