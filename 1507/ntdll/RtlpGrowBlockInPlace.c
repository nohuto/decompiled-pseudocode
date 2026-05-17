/*
 * XREFs of RtlpGrowBlockInPlace @ 0x180006558
 * Callers:
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpCreateSplitBlock @ 0x1800069E8 (RtlpCreateSplitBlock.c)
 *     RtlpZeroBlockFromOffset @ 0x1800070BC (RtlpZeroBlockFromOffset.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180095F60 (RtlCompareMemoryUlong.c)
 *     RtlpUpdateTagEntry @ 0x1800DAB80 (RtlpUpdateTagEntry.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  unsigned int v8; // r13d
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 *v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 i; // rax
  unsigned int v19; // ecx
  unsigned int v20; // r12d
  unsigned int v21; // eax
  __int64 v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // r9
  _QWORD *v25; // r10
  __int64 v26; // rdi
  char v27; // al
  unsigned __int16 v28; // dx
  char v29; // cl
  char v30; // r14
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  unsigned __int8 v37; // al
  int v38; // edx
  char result; // al
  __int64 *v40; // rax
  __int64 v41; // r15
  unsigned __int64 v42; // rax
  __int64 v43; // r9
  unsigned __int64 v44; // rdi
  __int64 v45; // r14
  __int64 v46; // rax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // [rsp+40h] [rbp-78h]
  __int64 *v53; // [rsp+48h] [rbp-70h]
  int v54; // [rsp+50h] [rbp-68h]
  int v55; // [rsp+60h] [rbp-58h]
  __int64 v56; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v58; // [rsp+D0h] [rbp+18h]
  __int64 v59; // [rsp+D0h] [rbp+18h]
  char v61; // [rsp+E0h] [rbp+28h]

  v5 = a4;
  v6 = a5;
  v8 = a2;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v61 = *(_BYTE *)(a3 + 10);
  v10 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)((*(_DWORD *)(a1 + 124) >> 20) & *(_BYTE *)(a1 + 138))) & 1) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v10);
  }
  v11 = *(unsigned __int16 *)(v10 + 8);
  v58 = (int)(v11 + *(unsigned __int16 *)(a3 + 8));
  if ( v58 < v6 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 0;
  }
  v12 = (_QWORD *)(v10 + 16);
  v13 = *(_QWORD *)(v10 + 16);
  v53 = *(__int64 **)(v10 + 24);
  v52 = v13;
  v14 = *v53;
  v15 = *(_QWORD *)(v13 + 8);
  if ( *v53 != v15 || (_QWORD *)v14 != v12 )
  {
    RtlpLogHeapFailure(12, a1, (_DWORD)v12, v15, v14, 0LL);
    return 0;
  }
  *(_QWORD *)(a1 + 192) -= v11;
  v16 = *(__int64 **)(a1 + 312);
  if ( v16 )
  {
    v17 = *(unsigned __int16 *)(v10 + 8);
    for ( i = *((unsigned int *)v16 + 2); ; i = *((unsigned int *)v40 + 2) )
    {
      if ( v17 < i )
      {
        v19 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_13;
      }
      v40 = (__int64 *)*v16;
      if ( !*v16 )
        break;
      v16 = (__int64 *)*v16;
    }
    v19 = *((_DWORD *)v16 + 2) - 1;
LABEL_13:
    v20 = v19 - *((_DWORD *)v16 + 6);
    v21 = 2 * v20;
    if ( !*((_DWORD *)v16 + 3) )
      v21 = v19 - *((_DWORD *)v16 + 6);
    v22 = v16[6];
    v23 = *((_DWORD *)v16 + 2);
    v24 = v21;
    v56 = v21;
    v25 = *(_QWORD **)(v22 + 8LL * v21);
    --*((_DWORD *)v16 + 4);
    if ( v19 == v23 - 1 )
      --*((_DWORD *)v16 + 5);
    if ( v25 == v12 )
    {
      if ( !*v16 )
        --v23;
      if ( v19 >= v23 )
      {
        v8 = a2;
        if ( *v12 == v16[4] )
        {
          *(_QWORD *)(v22 + 8LL * v21) = 0LL;
          *(_DWORD *)(v16[5] + 4LL * (v20 >> 5)) &= ~(1 << (v20 & 0x1F));
        }
        else
        {
          *(_QWORD *)(v22 + 8LL * v21) = *v12;
        }
        goto LABEL_28;
      }
      v26 = *v12;
      if ( *v12 == v16[4] )
        goto LABEL_26;
      v55 = *(_DWORD *)(v26 - 16 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v55 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v26 - 16 + 8);
        if ( HIBYTE(v55) != (BYTE2(v55) ^ (unsigned __int8)(BYTE1(v55) ^ v55)) )
        {
          RtlpLogHeapFailure(3, a1, v26 - 16, 0, 0LL, 0LL);
          v24 = v56;
          v13 = v52;
        }
      }
      if ( (_DWORD)v17 == (unsigned __int16)v55 )
      {
        *(_QWORD *)(v16[6] + 8 * v24) = v26;
      }
      else
      {
LABEL_26:
        *(_QWORD *)(v16[6] + 8 * v24) = 0LL;
        *(_DWORD *)(v16[5] + 4LL * (v20 >> 5)) &= ~(1 << (v20 & 0x1F));
      }
    }
    v8 = a2;
LABEL_28:
    v5 = a4;
  }
  *v53 = v13;
  *(_QWORD *)(v13 + 8) = v53;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1, v10) )
  {
    LOBYTE(v43) = 1;
    RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), v43);
    return 0;
  }
  v27 = *(_BYTE *)(v10 + 10);
  if ( (v27 & 4) != 0 )
  {
    v44 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v27 & 2) != 0 && v44 > 4 )
      v44 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v45 = RtlCompareMemoryUlong(v10 + 32, v44, 4277075694LL);
    if ( v45 != v44 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v45 + v10 + 32));
      RtlpBreakPointHeap(v10);
    }
  }
  v28 = *(_WORD *)(a3 + 8);
  v29 = *(_BYTE *)(a3 + 15);
  v30 = *(_BYTE *)(v10 + 10);
  if ( v29 == 5 )
  {
    v31 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v29 & 0x40) != 0 )
  {
    v31 = *(unsigned __int16 *)(a3 + 16LL * (v29 & 0x3F) + 12);
  }
  else if ( (v29 & 0x3F) == 0x3F )
  {
    if ( v29 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v48 = *(_DWORD *)(a3 + 8);
        LOWORD(v54) = v48;
        if ( (v48 & *(_DWORD *)(a1 + 124)) != 0 )
          v54 = *(_DWORD *)(a1 + 136) ^ v48;
        v28 = v54;
      }
      v47 = v28;
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a3 + 8) ^ (a3 >> 4)) )
        v46 = 0LL;
      else
        v46 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)(a3 >> 4)) >> 12));
      v47 = *(unsigned __int16 *)(v46 + 36);
    }
    v31 = *(_QWORD *)(a3 + 16LL * v47);
  }
  else
  {
    v31 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v32 = 16 * *(unsigned __int16 *)(a3 + 8) - v31;
  v33 = v58 - v6;
  v59 = v33;
  if ( v33 <= 2 )
  {
    v6 += v33;
    v59 = 0LL;
  }
  if ( (v61 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *(_WORD *)(a3 + 16 * v6 - 14) = RtlpUpdateTagEntry(
                                        a1,
                                        *(unsigned __int16 *)(a3 + 16 * v6 - 14),
                                        *(unsigned __int16 *)(a3 + 8),
                                        v6,
                                        4);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_BYTE *)(a3 + 11) = RtlpUpdateTagEntry(a1, *(unsigned __int8 *)(a3 + 11), *(unsigned __int16 *)(a3 + 8), v6, 4);
  }
  v34 = v59;
  *(_WORD *)(a3 + 8) = v6;
  if ( v59 )
  {
    v35 = 16 * v6;
    v36 = 16 * v6 - v5;
    if ( v36 >= 0x3F )
    {
      *(_QWORD *)(v35 + a3) = v36;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v36;
    }
    v37 = *(_BYTE *)(a3 + 14);
    if ( v37 )
      v38 = (a3 & 0xFFFF0000) - (v37 << 16) + 0x10000;
    else
      v38 = a1;
    LOBYTE(v34) = v30;
    RtlpCreateSplitBlock(a1, v38, a3 + v35, v34, (*(_BYTE *)(a1 + 112) & 0x40) != 0, v6, v59);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v30;
    v41 = 16 * v6;
    v42 = v41 - v5;
    if ( v41 - v5 >= 0x3F )
    {
      *(_QWORD *)(v41 + a3) = v42;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v42;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *(_WORD *)(a1 + 140);
  }
  if ( (v8 & 8) != 0 )
  {
    if ( v5 < v32 )
      v32 = v5;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v32);
    goto LABEL_50;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    goto LABEL_50;
  v49 = v32 & 3;
  if ( (v32 & 3) != 0 )
    v49 = 4 - v49;
  if ( v5 <= v49 + v32 )
    goto LABEL_50;
  if ( ((v5 - v49 - v32) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    goto LABEL_50;
  v50 = ((v5 - v49 - v32) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
  v51 = v49 + v32 + a3 + 16;
  if ( !v50 )
    goto LABEL_50;
  if ( (v51 & 4) == 0 )
  {
LABEL_104:
    memset64((void *)v51, 0xBAADF00DBAADF00DuLL, v50 >> 1);
    if ( (v50 & 1) != 0 )
      *(_DWORD *)(v51 + 4 * v50 - 4) = -1163005939;
    goto LABEL_50;
  }
  *(_DWORD *)v51 = -1163005939;
  if ( --v50 )
  {
    v51 += 4LL;
    goto LABEL_104;
  }
LABEL_50:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
  {
    *(_QWORD *)(a3 + v5 + 16) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a3 + v5 + 24) = 0xABABABABABABABABuLL;
  }
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (v8 >> 4) & 0xE0;
  return result;
}
