/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x14010B680
 * Callers:
 *     VerifierMmDoesFileHaveUserWritableReferences @ 0x1407422F8 (VerifierMmDoesFileHaveUserWritableReferences.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // ebx
  char *DataSectionObject; // rbx
  ULONG v5; // edi
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
      v3 = 0;
      if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
        v3 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v3);
      }
    }
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      else
        dword_14034E780 = 0;
      __writecr8(CurrentIrql);
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)DataSectionObject + 18) )
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
  v5 = *((_DWORD *)DataSectionObject + 23);
  if ( !v5 )
    v5 = *((_QWORD *)DataSectionObject + 13) > 1uLL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 72, retaddr);
  else
    *((_DWORD *)DataSectionObject + 18) = 0;
  __writecr8(CurrentIrql);
  return v5;
}
