/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x140715E70
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     VfTriageAddDrivers @ 0x1407D16BC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1407D1AE4 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall VfSuspectDriversAllocateEntry(const void **a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)a1 + 1) + 40LL, 0x44536656u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 0;
    PoolWithTag[5] = 0;
    *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 10;
    *((_WORD *)PoolWithTag + 12) = *(_WORD *)a1;
    *((_WORD *)PoolWithTag + 13) = *((_WORD *)a1 + 1);
    memmove(PoolWithTag + 10, a1[1], *(unsigned __int16 *)a1);
  }
  return v3;
}
