/*
 * XREFs of MmCanFileBeTruncated @ 0x140081EE4
 * Callers:
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 * Callees:
 *     MiCanFileBeTruncatedInternal @ 0x1400834A8 (MiCanFileBeTruncatedInternal.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v3; // bl
  _DWORD *v5; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp+10h]

  if ( NewFileSize )
    QuadPart = NewFileSize->QuadPart;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(SectionPointer, (__int64)&v7);
  v3 = v7;
  if ( (_BYTE)v7 == 17 )
    return 0;
  if ( CanFileBeTruncatedInternal )
  {
    v5 = (_DWORD *)(CanFileBeTruncatedInternal + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
    else
      *v5 = 0;
    __writecr8(v3);
  }
  return 1;
}
