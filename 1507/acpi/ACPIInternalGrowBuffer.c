/*
 * XREFs of ACPIInternalGrowBuffer @ 0x1C006841C
 * Callers:
 *     PnpiGrowResourceDescriptor @ 0x1C00682B0 (PnpiGrowResourceDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C00683B0 (PnpiGrowResourceList.c)
 * Callees:
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIInternalGrowBuffer(const void **a1, unsigned int a2, unsigned int a3)
{
  PVOID PoolWithTag; // rax
  void *v7; // rdi

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a3, 0x52706341u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    if ( *a1 )
    {
      memmove(v7, *a1, a2);
      ExFreePoolWithTag((PVOID)*a1, 0);
    }
    *a1 = v7;
    return 0LL;
  }
  else
  {
    if ( *a1 )
    {
      ExFreePoolWithTag((PVOID)*a1, 0);
      *a1 = 0LL;
    }
    return 3221225626LL;
  }
}
