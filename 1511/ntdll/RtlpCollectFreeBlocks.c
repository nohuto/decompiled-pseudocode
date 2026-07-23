/*
 * XREFs of RtlpCollectFreeBlocks @ 0x180052CA8
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpFlushHeap @ 0x180051248 (RtlpFlushHeap.c)
 * Callees:
 *     RtlpDecommitBlock @ 0x180052D68 (RtlpDecommitBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpCollectFreeBlocks(__int64 a1)
{
  __int64 v1; // rbp
  __int64 i; // rsi
  __int64 result; // rax

  v1 = a1 + 336;
  for ( i = *(_QWORD *)(a1 + 344); i != v1; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        RtlpAnalyzeHeapFailure(a1, i - 16);
    }
    result = 256LL;
    if ( *(_WORD *)(i - 8) <= 0x100u )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
        result = *(unsigned int *)(a1 + 136);
        *(_DWORD *)(i - 8) ^= result;
      }
      return result;
    }
    if ( (*(_BYTE *)(i - 6) & 8) != 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
        result = *(unsigned int *)(a1 + 136);
        *(_DWORD *)(i - 8) ^= result;
      }
    }
    else
    {
      result = RtlpDecommitBlock(a1);
    }
  }
  return result;
}
