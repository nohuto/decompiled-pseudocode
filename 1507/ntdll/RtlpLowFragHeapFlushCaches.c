/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x180008B34
 * Callers:
 *     RtlpFlushHeap @ 0x180008638 (RtlpFlushHeap.c)
 * Callees:
 *     RtlpLocalInfoAllocFromCache @ 0x180008CE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlockToHeap @ 0x180009080 (RtlpFreeUserBlockToHeap.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpInterlockedFlushSList @ 0x1800955E0 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800EFB64 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1800EFBF4 (RtlpLogHeapSubSegmentFree.c)
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
  __int64 v14; // rax
  struct _PEB *v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+68h] [rbp+10h]

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
        goto LABEL_8;
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
            RtlpLowFragHeapFree(*(_QWORD *)(a1 + 24), v14);
          }
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v7 );
LABEL_8:
    v4 += 4;
    ++v2;
    --v5;
  }
  while ( v5 );
  v9 = a1 + 96;
  v10 = 12LL;
  v18 = a1 + 96;
  v19 = 12LL;
  do
  {
    v11 = 0;
    result = (struct _PEB *)RtlpInterlockedFlushSList(v9);
    v13 = result;
    if ( result )
    {
      do
      {
        v15 = v13;
        v13 = *(struct _PEB **)&v13->InheritedAddressSpace;
        v16 = 1LL << LOBYTE(v15->ImageBaseAddress);
        if ( v16 > 0xF0000 )
          v16 = 983040LL;
        v17 = v16 + WORD1(v15->ImageBaseAddress);
        v3 += v17;
        result = (struct _PEB *)RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v15);
        ++v11;
        if ( MEMORY[0x7FFE0380] )
        {
          result = NtCurrentPeb();
          if ( (result->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
            result = (struct _PEB *)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
          }
        }
      }
      while ( v13 );
      v9 = v18;
      v10 = v19;
      if ( v11 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 16), -v11);
    }
    v9 += 48LL;
    --v10;
    v18 = v9;
    v19 = v10;
  }
  while ( v10 );
  if ( v3 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v3);
  return result;
}
