/*
 * XREFs of CmpAllocate @ 0x140513ED4
 * Callers:
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpClaimGlobalQuota @ 0x140513F30 (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x140514570 (CmpReleaseGlobalQuota.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
