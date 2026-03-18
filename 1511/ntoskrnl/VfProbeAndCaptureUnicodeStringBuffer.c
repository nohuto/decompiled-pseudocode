/*
 * XREFs of VfProbeAndCaptureUnicodeStringBuffer @ 0x1406B7220
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1406B71F0 (VfProbeAndCaptureUnicodeString.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeStringBuffer(unsigned __int16 *a1, POOL_TYPE a2)
{
  unsigned __int16 v4; // ax
  ULONG64 v6; // rcx
  ULONG64 v7; // rdx
  PVOID PoolWithTag; // rax
  PVOID v9; // rdi

  v4 = *a1;
  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = v6 + v4;
    if ( v7 > MmUserProbeAddress || v7 < v6 )
      *(_BYTE *)MmUserProbeAddress = 0;
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
