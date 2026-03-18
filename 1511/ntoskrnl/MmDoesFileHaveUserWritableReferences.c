/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x1400A6440
 * Callers:
 *     VerifierMmDoesFileHaveUserWritableReferences @ 0x1406C0AB8 (VerifierMmDoesFileHaveUserWritableReferences.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  KIRQL CurrentIrql; // si
  _DWORD *DataSectionObject; // rbx
  ULONG v4; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1402FE280, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_1402FE280, CurrentIrql);
    DataSectionObject = SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
      __writecr8(CurrentIrql);
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      break;
    ExReleaseSpinLockExclusive(&dword_1402FE280, CurrentIrql);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1402FE280, retaddr);
  else
    dword_1402FE280 = 0;
  v4 = DataSectionObject[23];
  if ( !v4 )
    v4 = *((_QWORD *)DataSectionObject + 13) > 1uLL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 18, retaddr);
  else
    DataSectionObject[18] = 0;
  __writecr8(CurrentIrql);
  return v4;
}
