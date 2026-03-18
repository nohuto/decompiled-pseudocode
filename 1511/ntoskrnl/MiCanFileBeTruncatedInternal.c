/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x140011AD8
 * Callers:
 *     MmCanFileBeTruncated @ 0x14000EA34 (MmCanFileBeTruncated.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 * Callees:
 *     MiFindLastSubsection @ 0x1400081A0 (MiFindLastSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiEndingOffset @ 0x14007C880 (MiEndingOffset.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmFlushImageSection @ 0x1400E956C (MmFlushImageSection.c)
 */

char *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        KIRQL *a5)
{
  bool v9; // zf
  KIRQL v10; // al
  KIRQL v11; // di
  char *DataSectionObject; // rbx
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax

  while ( 1 )
  {
    v9 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v9 )
    {
      v10 = ExAcquireSpinLockExclusive(&dword_1402FE280);
      v11 = v10;
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusive(&dword_1402FE280, v10);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    v11 = ExAcquireSpinLockExclusive(&dword_1402FE280);
LABEL_3:
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusive(&dword_1402FE280, v11);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    ExReleaseSpinLockExclusive(&dword_1402FE280, v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
  if ( !(DataSectionObject[56] & 1 | ((*((_DWORD *)DataSectionObject + 14) & 2) != 0))
    && (*((_QWORD *)DataSectionObject + 13) <= 1uLL || (*((_DWORD *)DataSectionObject + 14) & 8) != 0 || a4) )
  {
    if ( !*((_QWORD *)DataSectionObject + 6) || a3 == 1 && (a4 == 1 || !*((_QWORD *)DataSectionObject + 5)) )
      goto LABEL_8;
    if ( a2 )
    {
      LastSubsection = (__int64)(DataSectionObject + 120);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection((__int64)DataSectionObject, 1);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v16 = MiEndingOffset(LastSubsection);
      if ( *a2 >= v16 )
      {
        v17 = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v17 )
          *a2 = v17;
LABEL_8:
        *a5 = v11;
        return DataSectionObject;
      }
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)DataSectionObject + 18, v11);
  return 0LL;
}
