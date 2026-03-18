/*
 * XREFs of MmCanFileBeTruncated @ 0x14000EA34
 * Callers:
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 * Callees:
 *     MiCanFileBeTruncatedInternal @ 0x140011AD8 (MiCanFileBeTruncatedInternal.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  __int64 CanFileBeTruncatedInternal; // rax
  KIRQL OldIrql; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp+10h]

  if ( NewFileSize )
    QuadPart = NewFileSize->QuadPart;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(SectionPointer, (__int64)&OldIrql);
  if ( OldIrql == 17 )
    return 0;
  if ( CanFileBeTruncatedInternal )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72), OldIrql);
  return 1;
}
