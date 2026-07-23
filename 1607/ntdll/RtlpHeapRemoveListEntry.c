/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x1800289DC
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpPopulateListIndex @ 0x18004CB2C (RtlpPopulateListIndex.c)
 *     RtlpUpdateUCRIndexRemove @ 0x180084A1C (RtlpUpdateUCRIndexRemove.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapRemoveListEntry(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, int a6)
{
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // rbp
  __int64 result; // rax
  __int64 *v15; // r11
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // [rsp+38h] [rbp-10h]

  v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = 2 * v9;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = a5 - *(_DWORD *)(a2 + 24);
  v11 = *(_QWORD *)(a2 + 48);
  v12 = *(_DWORD *)(a2 + 8);
  v13 = v10;
  result = v12 - 1;
  v15 = *(__int64 **)(v11 + 8 * v13);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == (_DWORD)result )
    --*(_DWORD *)(a2 + 20);
  if ( v15 == a4 )
  {
    if ( !*(_QWORD *)a2 )
      --v12;
    if ( a5 >= v12 )
    {
      result = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(v11 + 8 * v13) = result;
        return result;
      }
      *(_QWORD *)(v11 + 8 * v13) = 0LL;
    }
    else
    {
      v16 = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        if ( a3 )
        {
          v18 = *(_DWORD *)(v16 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v18 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v16 - 16 + 8);
            if ( HIBYTE(v18) != (BYTE2(v18) ^ (unsigned __int8)(BYTE1(v18) ^ v18)) )
              RtlpLogHeapFailure(3, a1, v16 - 16, 0, 0LL, 0LL);
          }
          v17 = a6 - (unsigned __int16)v18;
        }
        else
        {
          v17 = a6 - *(_DWORD *)(v16 + 40);
        }
        if ( !v17 )
        {
          result = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(result + 8 * v13) = v16;
          return result;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v13) = 0LL;
    }
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4LL * (v9 >> 5)) &= ~(1 << (v9 & 0x1F));
  }
  return result;
}
