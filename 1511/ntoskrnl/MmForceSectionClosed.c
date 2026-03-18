/*
 * XREFs of MmForceSectionClosed @ 0x1400E964C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x1400E96DC (MiAttemptSectionDelete.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  KIRQL v4; // al
  volatile signed __int32 *DataSectionObject; // rbx
  KIRQL v6; // di
  __int64 v7; // r8
  __int64 v8; // rdx

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_1402FE280);
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    v6 = v4;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->ImageSectionObject;
      if ( !DataSectionObject )
        break;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
      LOBYTE(v7) = DelayClose;
      LOBYTE(v8) = v6;
      return MiAttemptSectionDelete(DataSectionObject, v8, v7);
    }
    ExReleaseSpinLockExclusive(&dword_1402FE280, v6);
  }
  ExReleaseSpinLockExclusive(&dword_1402FE280, v4);
  return 1;
}
