/*
 * XREFs of RtlpCoalesceHeap @ 0x180078F24
 * Callers:
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x180078DE0 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x180006F18 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18007902C (RtlpCoalesceFreeBlocks.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpCoalesceHeap(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbp
  unsigned __int64 v5; // rsi
  _QWORD *v6; // r14
  __int64 v8; // rdi
  bool v9; // zf
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 *v15; // r12
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 i; // rax
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 336);
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 344);
  if ( (_QWORD *)(a1 + 336) == v6 )
    return v5;
  do
  {
    v8 = (__int64)(v6 - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6 - 2);
    }
    v9 = (*(_BYTE *)(v8 + 10) & 8) == 0;
    v10 = *(unsigned __int16 *)(v8 + 8);
    v6 = (_QWORD *)*v6;
    v24 = v10;
    if ( !v9 )
    {
      v15 = *(__int64 **)(v8 + 24);
      v16 = v8 + 16;
      v17 = *(_QWORD *)(v8 + 16);
      v18 = *v15;
      v19 = *(_QWORD *)(v17 + 8);
      if ( *v15 != v19 || v18 != v16 )
      {
        RtlpLogHeapFailure(12, a1, v16, v19, v18, 0LL);
        goto LABEL_31;
      }
      *(_QWORD *)(a1 + 192) -= v10;
      v20 = *(_QWORD *)(a1 + 312);
      if ( v20 )
      {
        for ( i = *(unsigned int *)(v20 + 8); ; i = *(unsigned int *)(v22 + 8) )
        {
          if ( *(unsigned __int16 *)(v8 + 8) < i )
          {
            v23 = *(unsigned __int16 *)(v8 + 8);
            goto LABEL_26;
          }
          v22 = *(_QWORD *)v20;
          if ( !*(_QWORD *)v20 )
            break;
          v20 = *(_QWORD *)v20;
        }
        v23 = *(_DWORD *)(v20 + 8) - 1;
LABEL_26:
        RtlpHeapRemoveListEntry(a1, v20, 1, (__int64 *)(v8 + 16), v23, *(unsigned __int16 *)(v8 + 8));
      }
      *v15 = v17;
      *(_QWORD *)(v17 + 8) = v15;
      if ( (*(_BYTE *)(v8 + 10) & 8) != 0 )
        RtlpCommitBlock(a1, v8);
      v12 = *(unsigned __int16 *)(v8 + 8);
      v13 = v8;
LABEL_30:
      RtlpDeCommitFreeBlock(a1, v13, v12, 1);
LABEL_31:
      v6 = (_QWORD *)v4[1];
      continue;
    }
    LOBYTE(a4) = 1;
    v11 = RtlpCoalesceFreeBlocks(a1, v8, &v24, a4);
    v12 = v24;
    v13 = v11;
    if ( v24 != v10 )
    {
      if ( v11 != v8 && (*(_WORD *)(v11 + 8) < 0x100u || *(_WORD *)(v11 + 12) != *(_WORD *)(a1 + 140)) )
      {
        RtlpInsertFreeBlock(a1, v11, v24);
        goto LABEL_31;
      }
      goto LABEL_30;
    }
    if ( !v5 || *(_WORD *)(v5 + 8) < *(_WORD *)(v11 + 8) )
      v5 = v11;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  while ( v4 != v6 );
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
  }
  return v5;
}
