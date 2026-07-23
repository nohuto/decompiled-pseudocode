/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x1800F79F4
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpCollectFreeBlocks @ 0x180028BE4 (RtlpCollectFreeBlocks.c)
 *     RtlSetUserValueHeap @ 0x180029040 (RtlSetUserValueHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B49C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18004C460 (RtlpGrowBlockInPlace.c)
 *     RtlpPopulateListIndex @ 0x18004CB2C (RtlpPopulateListIndex.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     RtlpSetupExtendedBlock @ 0x18008F280 (RtlpSetupExtendedBlock.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917C4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E94E0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 */

_UNKNOWN **__fastcall RtlpAnalyzeHeapFailure(__int64 a1, unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v5; // r9
  unsigned int v6; // r8d
  int v7; // edi
  char v8; // cl
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD **v12; // rdx
  _QWORD **v13; // rax
  unsigned __int16 v14; // dx
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int16 v17; // cx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // ecx
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 0LL;
  v6 = 0;
  if ( !byte_180152408 )
  {
    v7 = *(_DWORD *)(a1 + 124);
    if ( (v7 & *(_DWORD *)(a2 + 8)) != 0 )
      goto LABEL_34;
    v6 = 10;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
      && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
    {
      goto LABEL_34;
    }
    v6 = 1;
    if ( *(_BYTE *)(a2 + 14) )
    {
      v5 = (a2 & 0xFFFFFFFFFFFF0000uLL) - ((*(unsigned __int8 *)(a2 + 14) - 1LL) << 16);
      v21 = v5;
    }
    else
    {
      v5 = a1;
      v21 = a1;
    }
    if ( *(_DWORD *)(v5 + 16) != -1114130 )
      goto LABEL_34;
    v8 = *(_BYTE *)(a2 + 15);
    if ( v8 != 4 )
    {
      v6 = 2;
      if ( a2 < *(_QWORD *)(v5 + 48) || a2 >= *(_QWORD *)(v5 + 72) || *(_QWORD *)(v5 + 40) != a1 )
        goto LABEL_34;
    }
    v6 = 3;
    if ( v8 == 3 )
    {
      v9 = a2 + 16;
      v10 = *(_QWORD *)(v9 + 32);
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_34;
      if ( v10 < *(_QWORD *)(v5 + 48) )
        goto LABEL_34;
      if ( *(_QWORD *)(v9 + 40) + v10 > *(_QWORD *)(v5 + 72) )
        goto LABEL_34;
      v6 = 4;
      v11 = **(_QWORD **)(v9 + 8);
      if ( v11 != *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
        goto LABEL_34;
      if ( v11 != v9 )
        goto LABEL_34;
      v6 = 5;
      v12 = (_QWORD **)(v9 + 16);
      v13 = (_QWORD **)*v12[1];
      if ( v13 != (_QWORD **)(*v12)[1] || v13 != v12 )
        goto LABEL_34;
    }
    else
    {
      v6 = 6;
      if ( (*(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12) ^ *(_WORD *)(a1 + 140)) != *(_WORD *)(a2 + 8) )
        goto LABEL_34;
    }
    v6 = 7;
    v14 = *(_WORD *)(a1 + 140);
    if ( v14 == *(_WORD *)(a2 + 12) )
      goto LABEL_30;
    v15 = a2 - 16 * (v14 ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
    if ( v7 )
    {
      v16 = *(_DWORD *)(v15 + 8);
      LOWORD(v22) = v16;
      if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
        v22 = v16 ^ *(_DWORD *)(a1 + 136);
      v17 = v22;
      v5 = v21;
      v6 = 7;
    }
    else
    {
      v17 = *(_WORD *)(v15 + 8);
    }
    if ( v17 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
    {
LABEL_30:
      v6 = 8;
      if ( (*(_BYTE *)(a2 + 10) & 1) != 0
        || (v18 = **(_QWORD **)(a2 + 24), v18 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v18 == a2 + 16 )
      {
        v6 = 9;
      }
    }
LABEL_34:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
      *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v6 > 5 )
    {
      if ( v6 <= 7 )
        goto LABEL_48;
      if ( v6 == 8 )
      {
        v19 = 8LL;
        v20 = 12;
        return (_UNKNOWN **)RtlpLogHeapFailure(v20, a1, a2, v19, 0LL, 0LL);
      }
      if ( v6 == 10 )
        goto LABEL_48;
      v20 = 2;
    }
    else
    {
      if ( v6 < 4 )
      {
        if ( v6 > 1 )
        {
          if ( v6 == 2 )
          {
            v19 = *(_QWORD *)(v5 + 40);
            v20 = 11;
          }
          else
          {
            v19 = 3LL;
            v20 = 0;
          }
          return (_UNKNOWN **)RtlpLogHeapFailure(v20, a1, a2, v19, 0LL, 0LL);
        }
LABEL_48:
        v20 = 3;
        goto LABEL_49;
      }
      v20 = 13;
    }
LABEL_49:
    v19 = v6;
    return (_UNKNOWN **)RtlpLogHeapFailure(v20, a1, a2, v19, 0LL, 0LL);
  }
  return result;
}
