/*
 * XREFs of MmForceSectionClosed @ 0x1401194D0
 * Callers:
 *     <none>
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiAttemptSectionDelete @ 0x1401195C8 (MiAttemptSectionDelete.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // ebx
  volatile signed __int32 *DataSectionObject; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

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
      v5 = 0;
      if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
    }
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->ImageSectionObject;
      if ( !DataSectionObject )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
        else
          dword_14034E780 = 0;
        __writecr8(CurrentIrql);
        return 1;
      }
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
    __writecr8(CurrentIrql);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
  else
    dword_14034E780 = 0;
  LOBYTE(v9) = DelayClose;
  LOBYTE(v8) = CurrentIrql;
  return MiAttemptSectionDelete(DataSectionObject, v8, v9);
}
