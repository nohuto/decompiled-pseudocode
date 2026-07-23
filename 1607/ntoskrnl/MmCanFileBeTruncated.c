/*
 * XREFs of MmCanFileBeTruncated @ 0x140073274
 * Callers:
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiCanFileBeTruncatedInternal @ 0x140072E5C (MiCanFileBeTruncatedInternal.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  char *v2; // rax
  LONGLONG QuadPart; // rax
  KIRQL OldIrql; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG v6; // [rsp+48h] [rbp+10h] BYREF

  if ( NewFileSize )
  {
    QuadPart = NewFileSize->QuadPart;
    NewFileSize = (PLARGE_INTEGER)&v6;
    v6 = QuadPart;
  }
  v2 = MiCanFileBeTruncatedInternal(SectionPointer, (unsigned __int64 *)&NewFileSize->QuadPart, 0, 0, &OldIrql);
  if ( OldIrql == 17 )
    return 0;
  if ( v2 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18, OldIrql);
  return 1;
}
