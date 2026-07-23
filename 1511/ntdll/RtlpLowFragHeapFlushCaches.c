/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x18004F614
 * Callers:
 *     RtlpFlushHeap @ 0x180051248 (RtlpFlushHeap.c)
 * Callees:
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004F7C8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004FBB0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpInterlockedFlushSList @ 0x1800A8970 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800F1ABC (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1800F1B4C (RtlpLogHeapSubSegmentFree.c)
 */

struct _PEB *__fastcall RtlpLowFragHeapFlushCaches(__int64 a1)
{
  _QWORD *v2; // r15
  __int64 v3; // rsi
  _BYTE *v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned int v7; // ebp
  _DWORD *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r15
  int v11; // ebx
  struct _PEB *result; // rax
  struct _PEB *v13; // r14
  unsigned __int64 v14; // rax
  ULONG v15; // r8d
  struct _PEB *v16; // r13
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  __int64 v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+68h] [rbp+10h]

  v2 = (_QWORD *)(a1 + 2224);
  v3 = 0LL;
  v4 = (_BYTE *)(a1 + 679);
  v5 = 129LL;
  do
  {
    v6 = 0LL;
    if ( (*v4 & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v7 = 1;
    }
    else
    {
      v7 = RtlpAffinityState;
      if ( !RtlpAffinityState )
        goto LABEL_9;
    }
    do
    {
      if ( (_DWORD)v6 )
        v8 = (_DWORD *)(192 * v6 + *v2 - 192LL);
      else
        v8 = (_DWORD *)*(v2 - 129);
      if ( v8 )
      {
        if ( v8[41] == 1 )
        {
          v14 = RtlpLocalInfoAllocFromCache(v8, (unsigned int)v6);
          if ( v14 )
          {
            *(_DWORD *)(*(_QWORD *)v8 + 36LL) = 0;
            RtlpLowFragHeapFree(*(_QWORD *)(a1 + 24), v14, v15);
          }
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v7 );
LABEL_9:
    v4 += 4;
    ++v2;
    --v5;
  }
  while ( v5 );
  v9 = a1 + 96;
  v10 = 12LL;
  v19 = a1 + 96;
  v20 = 12LL;
  do
  {
    v11 = 0;
    result = (struct _PEB *)RtlpInterlockedFlushSList(v9);
    v13 = result;
    if ( result )
    {
      do
      {
        v16 = v13;
        v13 = *(struct _PEB **)&v13->InheritedAddressSpace;
        v17 = 1LL << LOBYTE(v16->ImageBaseAddress);
        if ( v17 > 0xF0000 )
          v17 = 983040LL;
        v18 = v17 + WORD1(v16->ImageBaseAddress);
        v3 += v18;
        result = (struct _PEB *)RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v16);
        ++v11;
        if ( MEMORY[0x7FFE0380] )
        {
          result = NtCurrentPeb();
          if ( (result->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v16, v18, 0LL);
            result = (struct _PEB *)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v16, v18, 0LL);
          }
        }
      }
      while ( v13 );
      v9 = v19;
      v10 = v20;
      if ( v11 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 16), -v11);
    }
    v9 += 48LL;
    --v10;
    v19 = v9;
    v20 = v10;
  }
  while ( v10 );
  if ( v3 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v3);
  return result;
}
