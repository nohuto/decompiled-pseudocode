/*
 * XREFs of InitDevExts @ 0x1C0001CF0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00220C0 (ProcLibGlobalInit.c)
 * Callees:
 *     memset @ 0x1C00025C0 (memset.c)
 */

__int64 __fastcall InitDevExts(unsigned int a1)
{
  SIZE_T v1; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v3; // ebx

  v1 = 8LL * a1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x72637250u);
  v3 = 0;
  DevExts = (__int64)PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v1);
  else
    return (unsigned int)-1073741670;
  return v3;
}
