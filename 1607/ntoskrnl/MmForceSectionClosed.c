/*
 * XREFs of MmForceSectionClosed @ 0x1400A75C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x1400A7650 (MiAttemptSectionDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
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
    v4 = ExAcquireSpinLockExclusive(&dword_140326580);
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
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
      LOBYTE(v7) = DelayClose;
      LOBYTE(v8) = v6;
      return MiAttemptSectionDelete(DataSectionObject, v8, v7);
    }
    ExReleaseSpinLockExclusive(&dword_140326580, v6);
  }
  ExReleaseSpinLockExclusive(&dword_140326580, v4);
  return 1;
}
