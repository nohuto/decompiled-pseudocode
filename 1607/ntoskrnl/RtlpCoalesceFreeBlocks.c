/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x140093454
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x140092870 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlpHeapRemoveListEntry @ 0x1400941E8 (RtlpHeapRemoveListEntry.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x140167A50 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r9
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 *v10; // r14
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 *v14; // rdx
  unsigned __int64 j; // rax
  int v16; // r8d
  char v17; // al
  __int64 *v18; // r14
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 *v22; // rdx
  unsigned __int64 i; // rax
  int v24; // ecx
  char v25; // al
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rax
  SIZE_T v29; // rdi
  SIZE_T v30; // rax
  SIZE_T v31; // rdi
  SIZE_T v32; // rax
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+38h] [rbp-20h]

  v4 = a2;
  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v7 = a2 - v5;
  if ( a2 - v5 != a2
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*(_DWORD *)(a1 + 124) >> 20) & *(_BYTE *)(a1 + 138))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v18 = *(__int64 **)(v7 + 24);
    v19 = v7 + 16;
    v20 = *(_QWORD *)(v7 + 16);
    v21 = *(_QWORD *)(v20 + 8);
    if ( *v18 == v21 && *v18 == v19 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
      v22 = *(__int64 **)(a1 + 312);
      if ( v22 )
      {
        for ( i = *((unsigned int *)v22 + 2); ; i = *((unsigned int *)v28 + 2) )
        {
          if ( *(unsigned __int16 *)(v7 + 8) < i )
          {
            v24 = *(unsigned __int16 *)(v7 + 8);
            goto LABEL_29;
          }
          v28 = (__int64 *)*v22;
          if ( !*v22 )
            break;
          v22 = (__int64 *)*v22;
        }
        v24 = *((_DWORD *)v22 + 2) - 1;
LABEL_29:
        LOBYTE(v19) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v22, v19, v7 + 16, v24, *(unsigned __int16 *)(v7 + 8));
      }
      *v18 = v20;
      *(_QWORD *)(v20 + 8) = v18;
      v25 = *(_BYTE *)(v7 + 10);
      if ( (v25 & 4) != 0 )
      {
        v29 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
        if ( (v25 & 2) != 0 && v29 > 4 )
          v29 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
        v30 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v29, 0xFEEEFEEE);
        if ( v30 != v29 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v7,
            (const void *)(v30 + v7 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
      }
      v26 = *(unsigned __int16 *)(v7 + 8);
      v4 = v7;
      *(_BYTE *)(v7 + 10) = 0;
      *(_BYTE *)(v7 + 15) = 0;
      *a3 += v26;
      *(_WORD *)(v7 + 8) = *(_WORD *)a3;
      *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
    }
    else
    {
      RtlpLogHeapFailure(12, a1, v19, v21, *v18);
    }
  }
  v8 = v4 + 16LL * *a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v34 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v8 + 8);
    if ( HIBYTE(v34) != (BYTE2(v34) ^ (unsigned __int8)(BYTE1(v34) ^ v34)) )
      RtlpLogHeapFailure(3, a1, v8, 0, 0LL);
  }
  while ( ((*(_BYTE *)(v8 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v10 = *(__int64 **)(v8 + 24);
    v11 = v8 + 16;
    v12 = *(_QWORD *)(v8 + 16);
    v13 = *(_QWORD *)(v12 + 8);
    if ( *v10 == v13 && *v10 == v11 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
      v14 = *(__int64 **)(a1 + 312);
      if ( v14 )
      {
        for ( j = *((unsigned int *)v14 + 2); ; j = *((unsigned int *)v27 + 2) )
        {
          if ( *(unsigned __int16 *)(v8 + 8) < j )
          {
            v16 = *(unsigned __int16 *)(v8 + 8);
            goto LABEL_17;
          }
          v27 = (__int64 *)*v14;
          if ( !*v14 )
            break;
          v14 = (__int64 *)*v14;
        }
        v16 = *((_DWORD *)v14 + 2) - 1;
LABEL_17:
        v33 = v16;
        LOBYTE(v16) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v14, v16, v8 + 16, v33, *(unsigned __int16 *)(v8 + 8));
      }
      *v10 = v12;
      *(_QWORD *)(v12 + 8) = v10;
      v17 = *(_BYTE *)(v8 + 10);
      if ( (v17 & 4) != 0 )
      {
        v31 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        if ( (v17 & 2) != 0 && v31 > 4 )
          v31 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
        v32 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v31, 0xFEEEFEEE);
        if ( v32 != v31 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v8,
            (const void *)(v32 + v8 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
      }
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      *a3 += *(unsigned __int16 *)(v8 + 8);
      *(_WORD *)(v4 + 8) = *(_WORD *)a3;
      *(_WORD *)(v4 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
      return v4;
    }
    RtlpLogHeapFailure(12, a1, v11, v13, *v10);
  }
  return v4;
}
