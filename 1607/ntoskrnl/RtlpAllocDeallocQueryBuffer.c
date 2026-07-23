/*
 * XREFs of RtlpAllocDeallocQueryBuffer @ 0x1404DB3C4
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocDeallocQueryBuffer(SIZE_T *a1, void *a2, __int64 a3, int *a4)
{
  PVOID PoolWithTag; // rsi
  int v5; // ebx

  PoolWithTag = 0LL;
  v5 = 0;
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
  if ( a1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a1, 0x76727152u);
    if ( !PoolWithTag )
      v5 = -1073741801;
  }
  if ( a4 )
    *a4 = v5;
  return PoolWithTag;
}
