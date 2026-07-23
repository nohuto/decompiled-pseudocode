/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x1400964F0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400268DC (MiGetControlAreaPartition.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  KIRQL CurrentIrql; // di
  char *DataSectionObject; // rbx
  __int64 v4; // rdx
  __int64 v5; // r9
  ULONG v6; // esi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140326580, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_140326580, CurrentIrql);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
      __writecr8(CurrentIrql);
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    ExReleaseSpinLockExclusive(&dword_140326580, CurrentIrql);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140326580, retaddr);
  else
    dword_140326580 = 0;
  v6 = *((_DWORD *)DataSectionObject + 23);
  if ( !v6 )
  {
    v7 = *((_QWORD *)DataSectionObject + 14);
    if ( v7 > 1 )
    {
      if ( *(char **)(MiGetControlAreaPartition((__int64)DataSectionObject, v4, v7, v5) + 1528) == DataSectionObject )
        --v8;
      if ( v8 > 1 )
        v6 = 1;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(DataSectionObject + 72, retaddr);
  else
    *((_DWORD *)DataSectionObject + 18) = 0;
  __writecr8(CurrentIrql);
  return v6;
}
