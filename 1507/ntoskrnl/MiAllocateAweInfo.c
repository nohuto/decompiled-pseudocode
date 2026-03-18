/*
 * XREFs of MiAllocateAweInfo @ 0x1406A5BA4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x14011A828 (ExInitializeAutoExpandPushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *MiAllocateAweInfo()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x77416D4Du);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    ExInitializeAutoExpandPushLock(v1 + 1, 1);
  }
  return v1;
}
