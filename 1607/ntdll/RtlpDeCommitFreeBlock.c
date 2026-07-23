/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x18004A800
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B49C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18004C460 (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpCollectFreeBlocks @ 0x180028BE4 (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180028D98 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DEC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpRemoveUCRBlock @ 0x180029354 (RtlpRemoveUCRBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004ADF0 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B49C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x18004CEC0 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x18004D01C (RtlpInsertUCRBlock.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x1800F9154 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1800F9284 (RtlpLogHeapDecommit.c)
 */

char __fastcall RtlpDeCommitFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r12
  char v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // r9
  unsigned __int64 v26; // r9
  ULONG_PTR v27; // r9
  _BYTE *v28; // rdi
  ULONG_PTR v29; // rax
  bool v30; // cc
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // r8
  _QWORD *v34; // r8
  _QWORD *v35; // rcx
  __int64 v36; // r9
  __int64 *v37; // r13
  int v38; // edx
  __int64 v39; // r15
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  _BYTE *v43; // rdi
  ULONG_PTR v44; // r15
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // r8
  __int64 v48; // rdi
  int v50[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v51; // [rsp+48h] [rbp-28h]
  __int64 v52; // [rsp+50h] [rbp-20h]
  __int64 v53; // [rsp+58h] [rbp-18h] BYREF
  __int64 v54; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-8h] BYREF
  ULONG_PTR v56; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v57; // [rsp+C0h] [rbp+50h] BYREF
  char v58; // [rsp+C8h] [rbp+58h]

  v58 = a4;
  v57 = a3;
  v52 = 0LL;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
    goto LABEL_10;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 628);
      if ( RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &v55, &v53) )
        *(_QWORD *)(v8 + 632) -= v53;
    }
    v11 = a2;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
    {
LABEL_10:
      LOBYTE(v13) = RtlpInsertFreeBlock(a1, a2, a3);
      return v13;
    }
    v9 = a3 + *(_QWORD *)(a1 + 192);
    if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 544) >> (*(_BYTE *)(a1 + 656) + 4) )
    {
LABEL_9:
      a1 = v8;
      a3 = v6;
      goto LABEL_10;
    }
    v10 = RtlpCoalesceFreeBlocks(a1);
    v6 = v57;
    v11 = v10;
    if ( v57 - 257 <= 0xFDFF )
    {
      RtlpInsertFreeBlock(v8, v10, v57);
      v12 = *(_QWORD *)(v8 + 544) - 16LL * *(_QWORD *)(v8 + 192);
      v13 = *(_QWORD *)(v8 + 640) >> 4;
      if ( v12 < *(_QWORD *)(v8 + 640) - v13 )
      {
        v13 = *(_QWORD *)(v8 + 648) >> 2;
        if ( v12 > *(_QWORD *)(v8 + 648) - v13 )
        {
          LOBYTE(v13) = RtlpCollectFreeBlocks(v8);
          *(_QWORD *)(v8 + 648) = v12;
          *(_QWORD *)(v8 + 640) = v12;
        }
      }
      return v13;
    }
  }
  v14 = *(_BYTE *)(v7 + 14);
  if ( v14 )
    v15 = (v7 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v14 << 16) + 0x10000;
  else
    v15 = v8;
  v16 = v11 + 16 * v6;
  v53 = v16;
  if ( *(_BYTE *)(v16 + 15) == 3 )
  {
    v17 = v16 + 16;
    RtlpRemoveUCRBlock(v8, (__int64 *)(v16 + 16));
    v18 = *(_QWORD *)(v17 + 32);
    v19 = *(_QWORD *)(v17 + 40);
    --*(_DWORD *)(v15 + 84);
    v52 = v18;
    *(_DWORD *)(v15 + 80) -= *(_QWORD *)(v17 + 40) >> 12;
    *(_QWORD *)(v8 + 544) += *(_QWORD *)(v17 + 40);
    --*(_DWORD *)(v8 + 572);
    v20 = *(_QWORD *)(v17 + 40);
    v51 = v19;
    if ( v20 >= 0xFF000 )
      *(_QWORD *)(v8 + 552) -= v20;
    v21 = *(_QWORD *)(v17 + 40);
    v16 = v53;
    v5 = v58;
    v4 = 1;
    v6 += (v21 >> 4) + 64;
    v57 = v6;
  }
  else
  {
    v51 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_20;
  v34 = (_QWORD *)(v15 + 96);
  *(_QWORD *)v50 = v11;
  v35 = *(_QWORD **)(v15 + 96);
  v36 = v11;
  while ( v34 != v35 )
  {
    v37 = v35 - 2;
    if ( v35[2] + v35[3] == v11 )
      goto LABEL_51;
    v35 = (_QWORD *)*v35;
  }
  v37 = 0LL;
LABEL_51:
  if ( v5 && !v37 )
  {
LABEL_20:
    v22 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v50 = v22;
    if ( v22 == v11 + 80 )
    {
      v22 += 4096LL;
      *(_QWORD *)v50 = v22;
    }
    v23 = 16 * v6;
    v24 = v11 + 16 * v6;
    v25 = v24 - 32;
    if ( v4 )
      v25 = v11 + 16 * v6;
    v26 = v25 & 0xFFFFFFFFFFFFF000uLL;
    v56 = v26;
    if ( v26 < v22 )
    {
      if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
        goto LABEL_37;
      if ( NtCurrentPeb()->Ldr )
        goto LABEL_121;
      goto LABEL_122;
    }
    v27 = v26 - v22;
    v56 = v27;
    if ( !v58 && *(_BYTE *)(v16 + 15) != 3 && (!v27 || v27 < *(_QWORD *)(v8 + 176)) )
      goto LABEL_37;
    if ( v27 )
    {
      ++*(_DWORD *)(v8 + 580);
      if ( RtlpSecMemFreeVirtualMemory(-4096LL, (PVOID *)v50, &v56, 0x4000u) < 0 )
      {
LABEL_94:
        ++*(_DWORD *)(v8 + 596);
        if ( !v4 )
        {
LABEL_37:
          a2 = v11;
          goto LABEL_9;
        }
        RtlpCreateUCREntry(v8, v15, v52 - 48, v51, v11, (__int64)&v57);
LABEL_124:
        v6 = v57;
        goto LABEL_37;
      }
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapDecommit(v8, *(_QWORD *)v50, v56, 6LL);
      v27 = v56;
      v22 = *(_QWORD *)v50;
    }
    if ( v4 )
    {
LABEL_32:
      RtlpCreateUCREntry(v8, v15, v22 - 48, v27, v11, (__int64)&v54);
      RtlpInsertFreeBlock(v8, v11, v54);
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapContractEvent(v8, v50[0], v56, 16 * *(_QWORD *)(v8 + 192), 0, 0LL, (HANDLE)MEMORY[0x7FFE0380]);
      LOBYTE(v13) = MEMORY[0x7FFE038A];
      if ( MEMORY[0x7FFE038A] )
        LOBYTE(v13) = RtlpLogHeapContractEvent(
                        v8,
                        v50[0],
                        v56,
                        16 * (unsigned int)*(_QWORD *)(v8 + 192),
                        0,
                        0LL,
                        (HANDLE)MEMORY[0x7FFE038A]);
      return v13;
    }
    v28 = (_BYTE *)(v27 + v22);
    *(_WORD *)(v27 + v22 + 12) = *(_WORD *)(v8 + 140);
    LODWORD(v27) = v56;
    LODWORD(v22) = v50[0];
    if ( v24 == v56 + *(_QWORD *)v50 )
    {
      if ( !*(_DWORD *)(v8 + 124) )
        goto LABEL_32;
      v28[11] = v28[8] ^ v28[9] ^ v28[10];
      *((_DWORD *)v28 + 2) ^= *(_DWORD *)(v8 + 136);
    }
    else
    {
      v28[15] = 0;
      v28[10] = 0;
      v29 = (v23 + v11 - v56 - *(_QWORD *)v50) >> 4;
      v30 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v28 + 4) = v29;
      if ( !v30 && (unsigned __int16)v29 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v16);
        DbgPrint("(LONG)FreeEntry->Size > 1");
        RtlpHeapHandleError(1LL);
      }
      v28[11] = 0;
      v31 = *(_QWORD *)(v15 + 40);
      if ( v31 == v15 )
      {
        LOBYTE(v32) = 0;
      }
      else
      {
        v32 = ((unsigned __int64)&v28[-v15] >> 16) + 1;
        if ( (unsigned __int64)&v28[-v15] >> 16 > 0xFC )
          RtlpLogHeapFailure(3, v31, (_DWORD)v28, v15, 0LL, 0LL);
      }
      v33 = *((unsigned __int16 *)v28 + 4);
      v28[14] = v32;
      RtlpInsertFreeBlock(v8, v28, v33);
    }
    LODWORD(v22) = v50[0];
    LODWORD(v27) = v56;
    goto LABEL_32;
  }
  v38 = RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v37 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v34, v11);
    else
      DbgPrint("HEAP: ", (unsigned int)RtlpHeapErrorHandlerThreshold, v34, v11);
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v36 = *(_QWORD *)v50;
    v38 = RtlpHeapErrorHandlerThreshold;
    v6 = v57;
  }
  v39 = 16 * v6;
  if ( v4 )
    v40 = v11 + v39;
  else
    v40 = v11 + v39 - 32;
  v56 = (v40 & 0xFFFFFFFFFFFFF000uLL) - v36;
  if ( !v56 )
  {
    if ( v38 < 1 || !v4 )
      goto LABEL_37;
    if ( NtCurrentPeb()->Ldr )
    {
LABEL_121:
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_123:
      DbgPrint("(!TrailingUCR)");
      RtlpHeapHandleError(1LL);
      goto LABEL_124;
    }
LABEL_122:
    DbgPrint("HEAP: ");
    goto LABEL_123;
  }
  if ( RtlpSecMemFreeVirtualMemory((__int64)v35, (PVOID *)v50, &v56, 0x4000u) < 0 )
    goto LABEL_94;
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v8, *(_QWORD *)v50, v56, 5LL);
  ++*(_DWORD *)(v8 + 580);
  v41 = v37[5];
  if ( v41 >= 0xFF000 )
    *(_QWORD *)(v8 + 552) -= v41;
  RtlpRemoveUCRBlock(v8, v37);
  v37[5] += v56;
  RtlpInsertUCRBlock(v8, v37);
  *(_DWORD *)(v15 + 80) += v56 >> 12;
  *(_QWORD *)(v8 + 544) -= v56;
  v42 = v37[5];
  if ( v42 >= 0xFF000 )
    *(_QWORD *)(v8 + 552) += v42;
  if ( !v4 )
  {
    v43 = (_BYTE *)(*(_QWORD *)v50 + v56);
    *(_WORD *)(*(_QWORD *)v50 + v56 + 12) = *(_WORD *)(v8 + 140);
    if ( v11 + v39 == v56 + *(_QWORD *)v50 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v43[11] = v43[8] ^ v43[9] ^ v43[10];
        *((_DWORD *)v43 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v43[15] = 0;
      v43[10] = 0;
      v44 = (v39 - v56) >> 4;
      v30 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v43 + 4) = v44;
      if ( !v30 && (unsigned __int16)v44 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v43[11] = 0;
      v45 = *(_QWORD *)(v15 + 40);
      if ( v45 == v15 )
      {
        LOBYTE(v46) = 0;
      }
      else
      {
        v46 = ((unsigned __int64)&v43[-v15] >> 16) + 1;
        if ( (unsigned __int64)&v43[-v15] >> 16 > 0xFC )
          RtlpLogHeapFailure(3, v45, (_DWORD)v43, v15, 0LL, 0LL);
      }
      v47 = *((unsigned __int16 *)v43 + 4);
      v43[14] = v46;
      RtlpInsertFreeBlock(v8, v43, v47);
    }
  }
  if ( MEMORY[0x7FFE0380] )
  {
    v48 = v51;
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapContractEvent(v8, v50[0], v56, 16 * *(_QWORD *)(v8 + 192), v4, v51, (HANDLE)MEMORY[0x7FFE0380]);
  }
  else
  {
    v48 = v51;
  }
  LOBYTE(v13) = MEMORY[0x7FFE038A];
  if ( MEMORY[0x7FFE038A] )
    LOBYTE(v13) = RtlpLogHeapContractEvent(
                    v8,
                    v50[0],
                    v56,
                    16 * (unsigned int)*(_QWORD *)(v8 + 192),
                    v4,
                    v48,
                    (HANDLE)MEMORY[0x7FFE038A]);
  return v13;
}
