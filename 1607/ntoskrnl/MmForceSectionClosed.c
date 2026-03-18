/*
 * XREFs of MmForceSectionClosed @ 0x1400A9040
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x1400A90D0 (MiAttemptSectionDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C2F60 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  KIRQL v4; // al
  char *DataSectionObject; // rbx
  KIRQL v6; // di
  __int64 v7; // r8
  __int64 v8; // rdx

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140326540);
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    v6 = v4;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      DataSectionObject = (char *)SectionObjectPointer->ImageSectionObject;
      if ( !DataSectionObject )
        break;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326540);
      LOBYTE(v7) = DelayClose;
      LOBYTE(v8) = v6;
      return MiAttemptSectionDelete(DataSectionObject, v8, v7);
    }
    ExReleaseSpinLockExclusive(&dword_140326540, v6);
  }
  ExReleaseSpinLockExclusive(&dword_140326540, v4);
  return 1;
}
