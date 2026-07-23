/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x1400941E8
 * Callers:
 *     RtlpCreateSplitBlock @ 0x140092ADC (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093454 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpPopulateListIndex @ 0x14012EC00 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x140688980 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x140094520 (RtlpHeapListCompare.c)
 */

__int64 __fastcall RtlpHeapRemoveListEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // r14
  __int64 result; // rax
  __int64 *v14; // r10
  __int64 v15; // rbp

  v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = 2 * v8;
  if ( !*(_DWORD *)(a2 + 12) )
    v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = *(_QWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 8);
  v12 = v9;
  result = v11 - 1;
  v14 = *(__int64 **)(v10 + 8 * v12);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == (_DWORD)result )
    --*(_DWORD *)(a2 + 20);
  if ( v14 == a4 )
  {
    if ( !*(_QWORD *)a2 )
      --v11;
    if ( a5 >= v11 )
    {
      result = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(v10 + 8 * v12) = result;
        return result;
      }
      *(_QWORD *)(v10 + 8 * v12) = 0LL;
    }
    else
    {
      v15 = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        LOBYTE(a4) = 1;
        if ( !(unsigned int)RtlpHeapListCompare(a1, v15, a6, a4) )
        {
          result = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(result + 8 * v12) = v15;
          return result;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v12) = 0LL;
    }
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4LL * (v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
