/*
 * XREFs of MiAllocateMemoryListLocks @ 0x140569C3C
 * Callers:
 *     MiInitializeMirroring @ 0x140583560 (MiInitializeMirroring.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID MiAllocateMemoryListLocks()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  PVOID v2; // rbx

  v0 = 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_14034EBBC + 27);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x614C6D4Du);
  v2 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v0);
  return v2;
}
