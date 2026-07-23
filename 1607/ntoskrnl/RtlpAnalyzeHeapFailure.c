/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x1402183D8
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x140092ADC (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093454 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 *     RtlpPopulateListIndex @ 0x14012EC00 (RtlpPopulateListIndex.c)
 *     RtlpSetupExtendedBlock @ 0x140213748 (RtlpSetupExtendedBlock.c)
 *     RtlZeroHeap @ 0x140688980 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x14021360C (RtlpHeapExceptionFilter.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  int v6; // edi
  unsigned __int8 v7; // dl
  char v8; // cl
  ULONG_PTR v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // cx
  ULONG_PTR v15; // rax
  int v16; // ecx
  __int16 v17; // dx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // ecx
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 124);
  if ( (v6 & *(_DWORD *)(a2 + 8)) != 0 )
    goto LABEL_33;
  v5 = 10;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
    && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
  {
    goto LABEL_33;
  }
  v5 = 1;
  v7 = *(_BYTE *)(a2 + 14);
  if ( v7 )
  {
    v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) - ((v7 - 1LL) << 16);
    v21 = v4;
  }
  else
  {
    v4 = a1;
    v21 = a1;
  }
  if ( *(_DWORD *)(v4 + 16) != -1114130 )
    goto LABEL_33;
  v8 = *(_BYTE *)(a2 + 15);
  if ( v8 != 4 )
  {
    v5 = 2;
    if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
      goto LABEL_33;
  }
  v5 = 3;
  if ( v8 == 3 )
  {
    v9 = a2 + 16;
    v10 = *(_QWORD *)(a2 + 48);
    if ( (v10 & 0xFFF) != 0 )
      goto LABEL_33;
    if ( v10 < *(_QWORD *)(v4 + 48) )
      goto LABEL_33;
    if ( *(_QWORD *)(a2 + 56) + v10 > *(_QWORD *)(v4 + 72) )
      goto LABEL_33;
    v5 = 4;
    v11 = **(_QWORD **)(a2 + 24);
    if ( v11 != *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
      goto LABEL_33;
    if ( v11 != v9 )
      goto LABEL_33;
    v5 = 5;
    v12 = **(_QWORD **)(a2 + 40);
    if ( v12 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v12 != a2 + 32 )
      goto LABEL_33;
  }
  else
  {
    v5 = 6;
    if ( (*(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12) ^ *(_WORD *)(a1 + 140)) != *(_WORD *)(a2 + 8) )
      goto LABEL_33;
  }
  v5 = 7;
  v13 = *(_WORD *)(a1 + 140);
  v14 = *(_WORD *)(a2 + 12);
  if ( v13 == v14 )
    goto LABEL_29;
  v15 = a2 - 16 * (v13 ^ (unsigned __int64)v14);
  if ( v6 )
  {
    v16 = *(_DWORD *)(v15 + 8);
    LOWORD(v22) = v16;
    if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
      v22 = v16 ^ *(_DWORD *)(a1 + 136);
    v17 = v22;
    v4 = v21;
    v5 = 7;
  }
  else
  {
    v17 = *(_WORD *)(v15 + 8);
  }
  if ( v17 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
  {
LABEL_29:
    v5 = 8;
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0
      || (v18 = **(_QWORD **)(a2 + 24), v18 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v18 == a2 + 16 )
    {
      v5 = 9;
    }
  }
LABEL_33:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v5 > 5 )
  {
    if ( v5 <= 7 )
      goto LABEL_47;
    if ( v5 == 8 )
    {
      v19 = 8LL;
      v20 = 12;
      goto LABEL_49;
    }
    if ( v5 == 10 )
      goto LABEL_47;
    v20 = 2;
LABEL_48:
    v19 = v5;
    goto LABEL_49;
  }
  if ( v5 >= 4 )
  {
    v20 = 13;
    goto LABEL_48;
  }
  if ( v5 <= 1 )
  {
LABEL_47:
    v20 = 3;
    goto LABEL_48;
  }
  if ( v5 == 2 )
  {
    v19 = *(_QWORD *)(v4 + 40);
    v20 = 11;
  }
  else
  {
    v19 = 3LL;
    v20 = 0;
  }
LABEL_49:
  RtlpLogHeapFailure(v20, a1, a2, v19, 0LL);
}
