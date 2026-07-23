/*
 * XREFs of RtlpCoalesceHeap @ 0x180090B34
 * Callers:
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x1800909F0 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800289DC (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004ADF0 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B49C (RtlpCoalesceFreeBlocks.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpCoalesceHeap(unsigned __int64 a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 v2; // rsi
  _QWORD *v3; // r14
  __int64 v5; // rdi
  bool v6; // zf
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 *v12; // r12
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 i; // rax
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 336);
  v2 = 0LL;
  v3 = *(_QWORD **)(a1 + 344);
  if ( (_QWORD *)(a1 + 336) == v3 )
    return v2;
  do
  {
    v5 = (__int64)(v3 - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v3 - 2);
    }
    v6 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v7 = *(unsigned __int16 *)(v5 + 8);
    v3 = (_QWORD *)*v3;
    v21 = v7;
    if ( !v6 )
    {
      v12 = *(__int64 **)(v5 + 24);
      v13 = v5 + 16;
      v14 = *(_QWORD *)(v5 + 16);
      v15 = *v12;
      v16 = *(_QWORD *)(v14 + 8);
      if ( *v12 != v16 || v15 != v13 )
      {
        RtlpLogHeapFailure(12, a1, v13, v16, v15, 0LL);
        goto LABEL_31;
      }
      *(_QWORD *)(a1 + 192) -= v7;
      v17 = *(_QWORD *)(a1 + 312);
      if ( v17 )
      {
        for ( i = *(unsigned int *)(v17 + 8); ; i = *(unsigned int *)(v19 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v20 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_26;
          }
          v19 = *(_QWORD *)v17;
          if ( !*(_QWORD *)v17 )
            break;
          v17 = *(_QWORD *)v17;
        }
        v20 = *(_DWORD *)(v17 + 8) - 1;
LABEL_26:
        RtlpHeapRemoveListEntry(a1, v17, 1, (__int64 *)(v5 + 16), v20, *(unsigned __int16 *)(v5 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        RtlpCommitBlock((PVOID)a1, v5);
      v9 = *(unsigned __int16 *)(v5 + 8);
      v10 = v5;
LABEL_30:
      RtlpDeCommitFreeBlock(a1, v10, v9, 1);
LABEL_31:
      v3 = (_QWORD *)v1[1];
      continue;
    }
    v8 = RtlpCoalesceFreeBlocks(a1, v5, &v21, 1);
    v9 = v21;
    v10 = v8;
    if ( v21 != v7 )
    {
      if ( v8 != v5 && (*(_WORD *)(v8 + 8) < 0x100u || *(_WORD *)(v8 + 12) != *(_WORD *)(a1 + 140)) )
      {
        RtlpInsertFreeBlock(a1, v8, v21);
        goto LABEL_31;
      }
      goto LABEL_30;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v8 + 8) )
      v2 = v8;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
      *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v2 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v2 + 11) != (*(_BYTE *)(v2 + 8) ^ (unsigned __int8)(*(_BYTE *)(v2 + 9) ^ *(_BYTE *)(v2 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v2);
    }
  }
  return v2;
}
