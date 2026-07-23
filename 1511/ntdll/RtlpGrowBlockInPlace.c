/*
 * XREFs of RtlpGrowBlockInPlace @ 0x180056578
 * Callers:
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlpZeroBlockFromOffset @ 0x1800578B8 (RtlpZeroBlockFromOffset.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A92F0 (RtlCompareMemoryUlong.c)
 *     RtlpUpdateTagEntry @ 0x1800E1BE4 (RtlpUpdateTagEntry.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        _DWORD *BaseAddress,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  unsigned int v8; // r13d
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 *v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 i; // rax
  __int64 *v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  unsigned int v22; // eax
  __int64 v23; // rdi
  unsigned int v24; // edx
  __int64 v25; // r9
  _QWORD *v26; // r10
  __int64 v27; // rdi
  char v28; // al
  SIZE_T v29; // rdi
  SIZE_T v30; // r14
  unsigned __int16 v31; // dx
  char v32; // cl
  char v33; // r14
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // ecx
  int v37; // eax
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // r15
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  char result; // al
  __int64 v47; // [rsp+40h] [rbp-78h]
  __int64 *v48; // [rsp+48h] [rbp-70h]
  int v49; // [rsp+50h] [rbp-68h]
  int v50; // [rsp+60h] [rbp-58h]
  __int64 v51; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v53; // [rsp+D0h] [rbp+18h]
  __int64 v54; // [rsp+D0h] [rbp+18h]
  char v56; // [rsp+E0h] [rbp+28h]

  v5 = a4;
  v6 = a5;
  v8 = a2;
  if ( a5 > (unsigned int)BaseAddress[37] )
    return 0;
  v56 = *(_BYTE *)(a3 + 10);
  v10 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)((BaseAddress[31] >> 20) & *((_BYTE *)BaseAddress + 138))) & 1) != 0 )
    return 0;
  if ( BaseAddress[31] )
  {
    *(_DWORD *)(v10 + 8) ^= BaseAddress[34];
    if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v10);
  }
  v11 = *(unsigned __int16 *)(v10 + 8);
  v53 = (int)(v11 + *(unsigned __int16 *)(a3 + 8));
  if ( v53 < v6 )
  {
    if ( BaseAddress[31] )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= BaseAddress[34];
    }
    return 0;
  }
  v12 = (_QWORD *)(v10 + 16);
  v13 = *(_QWORD *)(v10 + 16);
  v48 = *(__int64 **)(v10 + 24);
  v47 = v13;
  v14 = *v48;
  v15 = *(_QWORD *)(v13 + 8);
  if ( *v48 != v15 || (_QWORD *)v14 != v12 )
  {
    RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v12, v15, v14, 0LL);
    return 0;
  }
  *((_QWORD *)BaseAddress + 24) -= v11;
  v16 = (__int64 *)*((_QWORD *)BaseAddress + 39);
  if ( v16 )
  {
    v17 = *(unsigned __int16 *)(v10 + 8);
    for ( i = *((unsigned int *)v16 + 2); ; i = *((unsigned int *)v19 + 2) )
    {
      if ( v17 < i )
      {
        v20 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_17;
      }
      v19 = (__int64 *)*v16;
      if ( !*v16 )
        break;
      v16 = (__int64 *)*v16;
    }
    v20 = *((_DWORD *)v16 + 2) - 1;
LABEL_17:
    v21 = v20 - *((_DWORD *)v16 + 6);
    v22 = 2 * v21;
    if ( !*((_DWORD *)v16 + 3) )
      v22 = v20 - *((_DWORD *)v16 + 6);
    v23 = v16[6];
    v24 = *((_DWORD *)v16 + 2);
    v25 = v22;
    v51 = v22;
    v26 = *(_QWORD **)(v23 + 8LL * v22);
    --*((_DWORD *)v16 + 4);
    if ( v20 == v24 - 1 )
      --*((_DWORD *)v16 + 5);
    if ( v26 == v12 )
    {
      if ( !*v16 )
        --v24;
      if ( v20 >= v24 )
      {
        v8 = a2;
        if ( *v12 == v16[4] )
        {
          *(_QWORD *)(v23 + 8LL * v22) = 0LL;
          *(_DWORD *)(v16[5] + 4LL * (v21 >> 5)) &= ~(1 << (v21 & 0x1F));
        }
        else
        {
          *(_QWORD *)(v23 + 8LL * v22) = *v12;
        }
        goto LABEL_32;
      }
      v27 = *v12;
      if ( *v12 == v16[4] )
        goto LABEL_37;
      v50 = *(_DWORD *)(v27 - 16 + 8);
      if ( BaseAddress[31] )
      {
        v50 = BaseAddress[34] ^ *(_DWORD *)(v27 - 16 + 8);
        if ( HIBYTE(v50) != (BYTE2(v50) ^ (unsigned __int8)(BYTE1(v50) ^ v50)) )
        {
          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v27 - 16, 0, 0LL, 0LL);
          v25 = v51;
          v13 = v47;
        }
      }
      if ( (_DWORD)v17 != (unsigned __int16)v50 )
      {
LABEL_37:
        *(_QWORD *)(v16[6] + 8 * v25) = 0LL;
        *(_DWORD *)(v16[5] + 4LL * (v21 >> 5)) &= ~(1 << (v21 & 0x1F));
      }
      else
      {
        *(_QWORD *)(v16[6] + 8 * v25) = v27;
      }
    }
    v8 = a2;
LABEL_32:
    v5 = a4;
  }
  *v48 = v13;
  *(_QWORD *)(v13 + 8) = v48;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !RtlpCommitBlock(BaseAddress, v10) )
  {
    RtlpDeCommitFreeBlock((unsigned __int64)BaseAddress, v10, *(unsigned __int16 *)(v10 + 8), 1);
    return 0;
  }
  v28 = *(_BYTE *)(v10 + 10);
  if ( (v28 & 4) != 0 )
  {
    v29 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v28 & 2) != 0 && v29 > 4 )
      v29 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v30 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v29, 0xFEEEFEEE);
    if ( v30 != v29 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v30 + v10 + 32));
      RtlpBreakPointHeap(v10);
    }
  }
  v31 = *(_WORD *)(a3 + 8);
  v32 = *(_BYTE *)(a3 + 15);
  v33 = *(_BYTE *)(v10 + 10);
  if ( v32 == 5 )
  {
    v34 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70);
  }
  else if ( (v32 & 0x40) != 0 )
  {
    v34 = *(unsigned __int16 *)(a3 + 16LL * (v32 & 0x3F) + 12);
  }
  else if ( (v32 & 0x3F) == 0x3F )
  {
    if ( v32 >= 0 )
    {
      if ( BaseAddress[31] )
      {
        v37 = *(_DWORD *)(a3 + 8);
        LOWORD(v49) = v37;
        if ( (v37 & BaseAddress[31]) != 0 )
          v49 = BaseAddress[34] ^ v37;
        v31 = v49;
      }
      v36 = v31;
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(a3 + 8) ^ (a3 >> 4)) )
        v35 = 0LL;
      else
        v35 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)(a3 >> 4)) >> 12));
      v36 = *(unsigned __int16 *)(v35 + 36);
    }
    v34 = *(_QWORD *)(a3 + 16LL * v36);
  }
  else
  {
    v34 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v38 = 16 * *(unsigned __int16 *)(a3 + 8) - v34;
  v39 = v53 - v6;
  v54 = v39;
  if ( v39 <= 2 )
  {
    v6 += v39;
    v54 = 0LL;
  }
  if ( (v56 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *(_WORD *)(a3 + 16 * v6 - 14) = RtlpUpdateTagEntry(
                                        (_DWORD)BaseAddress,
                                        *(unsigned __int16 *)(a3 + 16 * v6 - 14),
                                        *(unsigned __int16 *)(a3 + 8),
                                        v6,
                                        4);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_BYTE *)(a3 + 11) = RtlpUpdateTagEntry(
                            (_DWORD)BaseAddress,
                            *(unsigned __int8 *)(a3 + 11),
                            *(unsigned __int16 *)(a3 + 8),
                            v6,
                            4);
  }
  *(_WORD *)(a3 + 8) = v6;
  if ( v54 )
  {
    v42 = 16 * v6 - v5;
    if ( v42 >= 0x3F )
    {
      *(_QWORD *)(16 * v6 + a3) = v42;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v42;
    }
    RtlpCreateSplitBlock(BaseAddress, (BaseAddress[28] & 0x40) != 0, v6, v54);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v33;
    v40 = 16 * v6;
    v41 = v40 - v5;
    if ( v40 - v5 >= 0x3F )
    {
      *(_QWORD *)(v40 + a3) = v41;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v41;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *((_WORD *)BaseAddress + 70);
  }
  if ( (v8 & 8) != 0 )
  {
    if ( v5 < v38 )
      v38 = v5;
    RtlpZeroBlockFromOffset(BaseAddress, a3 + 16, v38);
    goto LABEL_98;
  }
  if ( (BaseAddress[28] & 0x40) == 0 )
    goto LABEL_98;
  v43 = v38 & 3;
  if ( (v38 & 3) != 0 )
    v43 = 4 - v43;
  if ( v5 <= v43 + v38 )
    goto LABEL_98;
  if ( ((v5 - v43 - v38) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    goto LABEL_98;
  v44 = ((v5 - v43 - v38) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
  v45 = v43 + v38 + a3 + 16;
  if ( !v44 )
    goto LABEL_98;
  if ( (v45 & 4) == 0 )
  {
LABEL_96:
    memset64((void *)v45, 0xBAADF00DBAADF00DuLL, v44 >> 1);
    if ( (v44 & 1) != 0 )
      *(_DWORD *)(v45 + 4 * v44 - 4) = -1163005939;
    goto LABEL_98;
  }
  *(_DWORD *)v45 = -1163005939;
  if ( --v44 )
  {
    v45 += 4LL;
    goto LABEL_96;
  }
LABEL_98:
  if ( (BaseAddress[28] & 0x20) != 0 )
  {
    *(_QWORD *)(a3 + v5 + 16) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a3 + v5 + 24) = 0xABABABABABABABABuLL;
  }
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (v8 >> 4) & 0xE0;
  return result;
}
