/*
 * XREFs of VfProbeAndCaptureUnicodeStringBuffer @ 0x140702A38
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140702A08 (VfProbeAndCaptureUnicodeString.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeStringBuffer(unsigned __int16 *a1, POOL_TYPE a2)
{
  unsigned __int16 v4; // ax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  PVOID PoolWithTag; // rax
  PVOID v9; // rdi

  v4 = *a1;
  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = v6 + v4;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithTag = ExAllocatePoolWithTag(a2, *a1, 0x43536656u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
    *((_QWORD *)a1 + 1) = v9;
  }
  else
  {
    *((_QWORD *)a1 + 1) = MmBadPointer;
  }
  a1[1] = *a1;
  return 0LL;
}
