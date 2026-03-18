/*
 * XREFs of MmFlushImageSection @ 0x1400A8F60
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x1400732DC (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x1400A90D0 (MiAttemptSectionDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C2F60 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  KIRQL v4; // di
  volatile LONG *DataSectionObject; // rbx
  char *ImageSectionObject; // rbx
  __int64 v8; // rdx

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140326540);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile LONG *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
        break;
    }
LABEL_8:
    ImageSectionObject = (char *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      ExReleaseSpinLockExclusive(&dword_140326540, v4);
      return 1;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326540);
      LOBYTE(v8) = v4;
      return MiAttemptSectionDelete(ImageSectionObject, v8, 0LL);
    }
LABEL_13:
    ExReleaseSpinLockExclusive(&dword_140326540, v4);
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
    goto LABEL_13;
  if ( !*((_QWORD *)DataSectionObject + 6)
    && (DataSectionObject[14] & 2) == 0
    && *((_QWORD *)DataSectionObject + 14) <= 1uLL )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
    goto LABEL_8;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326540);
  ExReleaseSpinLockExclusive(DataSectionObject + 18, v4);
  return 0;
}
