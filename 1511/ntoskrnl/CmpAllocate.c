/*
 * XREFs of CmpAllocate @ 0x1403D8F04
 * Callers:
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x1403D8344 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x1403D8F60 (CmpClaimGlobalQuota.c)
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
