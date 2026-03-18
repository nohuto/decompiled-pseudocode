/*
 * XREFs of MmFlushImageSection @ 0x140119354
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x1400834A8 (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiAttemptSectionDelete @ 0x1401195C8 (MiAttemptSectionDelete.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  BOOLEAN v4; // bl
  unsigned __int8 CurrentIrql; // bp
  signed __int8 v6; // cf
  unsigned int v7; // edi
  volatile signed __int32 *DataSectionObject; // rdi
  char v9; // al
  volatile signed __int32 *ImageSectionObject; // rdi
  __int64 v12; // rdx
  char v13; // al
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
    }
    else
    {
      v6 = _interlockedbittestandset(&dword_14034E780, 0x1Fu);
      v7 = 0;
      if ( v6 )
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
    }
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
        break;
    }
LABEL_14:
    ImageSectionObject = (volatile signed __int32 *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      else
        dword_14034E780 = 0;
      v4 = 1;
LABEL_18:
      __writecr8(CurrentIrql);
      return v4;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 18) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      else
        dword_14034E780 = 0;
      LOBYTE(v12) = CurrentIrql;
      return MiAttemptSectionDelete(ImageSectionObject, v12, 0LL);
    }
LABEL_36:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
    __writecr8(CurrentIrql);
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
    goto LABEL_36;
  if ( !*((_QWORD *)DataSectionObject + 6) && (DataSectionObject[14] & 2) == 0 )
  {
    v9 = BYTE6(PerfGlobalGroupMask);
    if ( *((_QWORD *)DataSectionObject + 13) > 1uLL )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
        v9 = BYTE6(PerfGlobalGroupMask);
      }
      else
      {
        dword_14034E780 = 0;
      }
      if ( (v9 & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 18, retaddr);
      else
        *((_DWORD *)DataSectionObject + 18) = 0;
      goto LABEL_18;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 18, retaddr);
    else
      *((_DWORD *)DataSectionObject + 18) = 0;
    goto LABEL_14;
  }
  v13 = BYTE6(PerfGlobalGroupMask);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    v13 = BYTE6(PerfGlobalGroupMask);
  }
  else
  {
    dword_14034E780 = 0;
  }
  if ( (v13 & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 18, retaddr);
  else
    *((_DWORD *)DataSectionObject + 18) = 0;
  __writecr8(CurrentIrql);
  return 0;
}
