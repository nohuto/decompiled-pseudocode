/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14011F60C
 * Callers:
 *     RtlpCreateHashTable @ 0x14011F4D0 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x140135DE8 (RtlExpandHashTable.c)
 * Callees:
 *     RtlpAllocateSecondLevelDirUsingFreeList @ 0x14011F638 (RtlpAllocateSecondLevelDirUsingFreeList.c)
 */

__int64 RtlpAllocateSecondLevelDir()
{
  __int64 result; // rax
  _QWORD *v1; // rcx
  __int64 v2; // rdx

  result = RtlpAllocateSecondLevelDirUsingFreeList();
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
