/*
 * XREFs of MmFlushImageSection @ 0x1400E956C
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x140011AD8 (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x1400E96DC (MiAttemptSectionDelete.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  KIRQL v4; // di
  volatile signed __int32 *DataSectionObject; // rbx
  volatile signed __int32 *ImageSectionObject; // rbx
  __int64 v8; // rdx

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_1402FE280);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
        break;
    }
LABEL_8:
    ImageSectionObject = (volatile signed __int32 *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      ExReleaseSpinLockExclusive(&dword_1402FE280, v4);
      return 1;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 18) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
      LOBYTE(v8) = v4;
      return MiAttemptSectionDelete(ImageSectionObject, v8, 0LL);
    }
LABEL_13:
    ExReleaseSpinLockExclusive(&dword_1402FE280, v4);
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
    goto LABEL_13;
  if ( !*((_QWORD *)DataSectionObject + 6)
    && (DataSectionObject[14] & 2) == 0
    && *((_QWORD *)DataSectionObject + 13) <= 1uLL )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
    goto LABEL_8;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
  ExReleaseSpinLockExclusive(DataSectionObject + 18, v4);
  return 0;
}
