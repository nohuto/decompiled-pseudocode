/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x180065980
 * Callers:
 *     RtlExpandHashTable @ 0x1800653C0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x180065898 (RtlpCreateHashTable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 */

__int64 RtlpAllocateSecondLevelDir()
{
  __int64 result; // rax
  _QWORD *v1; // rcx
  __int64 v2; // rdx

  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 2048LL);
  if ( result )
  {
    v1 = (_QWORD *)result;
    v2 = 128LL;
    do
    {
      v1[1] = v1;
      *v1 = v1;
      v1 += 2;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
