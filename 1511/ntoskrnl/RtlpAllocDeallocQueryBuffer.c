/*
 * XREFs of RtlpAllocDeallocQueryBuffer @ 0x1404C8BEC
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
