/*
 * XREFs of RtlpFindEntry @ 0x140094AD0
 * Callers:
 *     RtlpInsertFreeBlock @ 0x1400930CC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x1400932DC (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x1400936CC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14009409C (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x14068889C (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x140094B44 (RtlpHeapFindListLookupEntry.c)
 */

__int64 __fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v4; // esi
  unsigned __int64 i; // rax
  int v6; // ecx
  __int64 result; // rax
  __int64 *v8; // rax

  v2 = *(__int64 **)(a1 + 312);
  v4 = a1;
  for ( i = *((unsigned int *)v2 + 2); ; i = *((unsigned int *)v8 + 2) )
  {
    if ( a2 < i )
    {
      v6 = a2;
      goto LABEL_4;
    }
    v8 = (__int64 *)*v2;
    if ( !*v2 )
      break;
    v2 = (__int64 *)*v2;
  }
  v6 = *((_DWORD *)v2 + 2) - 1;
LABEL_4:
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(v4, (_DWORD)v2, 1, v6, a2);
    if ( result )
      break;
    v2 = (__int64 *)*v2;
    v6 = *((_DWORD *)v2 + 6);
  }
  return result;
}
