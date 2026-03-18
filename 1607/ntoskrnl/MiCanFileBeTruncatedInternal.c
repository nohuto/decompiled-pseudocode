/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x1400732DC
 * Callers:
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1400736F4 (MmCanFileBeTruncated.c)
 * Callees:
 *     MiEndingOffset @ 0x1400235F0 (MiEndingOffset.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MmFlushImageSection @ 0x1400A8F60 (MmFlushImageSection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C2F60 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFindLastSubsection @ 0x1400FD130 (MiFindLastSubsection.c)
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
      v10 = ExAcquireSpinLockExclusive(&dword_140326540);
      v11 = v10;
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusive(&dword_140326540, v10);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    v11 = ExAcquireSpinLockExclusive(&dword_140326540);
LABEL_3:
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusive(&dword_140326540, v11);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    ExReleaseSpinLockExclusive(&dword_140326540, v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326540);
  if ( !(DataSectionObject[56] & 1 | ((*((_DWORD *)DataSectionObject + 14) & 2) != 0))
    && (*((_QWORD *)DataSectionObject + 14) <= 1uLL || (*((_DWORD *)DataSectionObject + 14) & 8) != 0 || a4) )
  {
    if ( !*((_QWORD *)DataSectionObject + 6) || a3 == 1 && (!*((_QWORD *)DataSectionObject + 5) || a4 == 1) )
      goto LABEL_8;
    if ( a2 )
    {
      LastSubsection = (__int64)(DataSectionObject + 128);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection(DataSectionObject, 1LL);
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
