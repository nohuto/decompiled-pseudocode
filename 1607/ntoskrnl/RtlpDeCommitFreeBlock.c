/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x140092870
 * Callers:
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093454 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x1400946F8 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x1400947F0 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1400948BC (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x140213A34 (RtlpUpdateHeapRates.c)
 *     RtlpHeapHandleError @ 0x140218708 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x140218D48 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x140218EA0 (RtlpLogHeapDecommit.c)
 */

__int64 __fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, _WORD *a2, unsigned __int64 a3)
{
  char v3; // di
  bool v4; // zf
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  char v7; // r13
  __int64 result; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  _WORD *v11; // r14
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  char *v15; // rdx
  char *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *i; // rcx
  _QWORD *v22; // rdx
  _WORD *v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // r14
  unsigned __int64 v28; // rax
  ULONG_PTR v29; // r8
  unsigned __int64 v30; // rax
  char *v31; // r14
  ULONG_PTR v32; // r12
  bool v33; // cc
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // r8
  char *v37; // r8
  __int64 v38; // r12
  unsigned __int64 v39; // r9
  ULONG_PTR v40; // r9
  ULONG_PTR v41; // r9
  char *v42; // r15
  ULONG_PTR v43; // r12
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-30h] BYREF
  __int64 v48; // [rsp+48h] [rbp-28h]
  __int64 v49; // [rsp+50h] [rbp-20h]
  _QWORD *v50; // [rsp+58h] [rbp-18h]
  char *v51; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v53; // [rsp+C0h] [rbp+50h] BYREF

  v53 = a3;
  v3 = 0;
  v4 = RtlpHeapKey == *(_QWORD *)(a1 + 360);
  v5 = (unsigned __int64)a2;
  v6 = a1;
  v49 = 0LL;
  v7 = 0;
  if ( !v4 || a3 < *(_QWORD *)(a1 + 176) )
    return RtlpInsertFreeBlock(a1, a2, a3);
  v9 = a3 + *(_QWORD *)(a1 + 192);
  if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 544) >> (*(_BYTE *)(a1 + 656) + 4) )
  {
LABEL_88:
    a1 = v6;
    return RtlpInsertFreeBlock(a1, a2, a3);
  }
  v11 = (_WORD *)RtlpCoalesceFreeBlocks(a1, a2, &v53);
  v12 = *(_BYTE *)(v5 + 14);
  if ( v12 )
  {
    v10 = (unsigned __int64)v12 << 16;
    v13 = (v5 & 0xFFFFFFFFFFFF0000uLL) - v10 + 0x10000;
  }
  else
  {
    v13 = v6;
  }
  v14 = v53;
  v15 = (char *)&v11[8 * v53];
  v51 = v15;
  if ( v15[15] == 3 )
  {
    v16 = v15 + 16;
    RtlpRemoveUCRBlock(v10, v15 + 16);
    v17 = *((_QWORD *)v16 + 4);
    v18 = *((_QWORD *)v16 + 5);
    --*(_DWORD *)(v13 + 84);
    v49 = v17;
    *(_DWORD *)(v13 + 80) -= *((_QWORD *)v16 + 5) >> 12;
    *(_QWORD *)(v6 + 544) += *((_QWORD *)v16 + 5);
    --*(_DWORD *)(v6 + 572);
    v19 = *((_QWORD *)v16 + 5);
    v48 = v18;
    if ( v19 >= 0xFF000 )
      *(_QWORD *)(v6 + 552) -= v19;
    v15 = v51;
    v20 = *((_QWORD *)v16 + 5) >> 4;
    v7 = 1;
    v14 += v20 + 64;
    v53 = v14;
  }
  else
  {
    v48 = 0LL;
  }
  if ( *(_WORD *)(v6 + 140) == v11[6] )
  {
    BaseAddress = v11;
    for ( i = *(_QWORD **)(v13 + 96); (_QWORD *)(v13 + 96) != i; i = (_QWORD *)*i )
    {
      v22 = i - 2;
      v23 = (_WORD *)(i[2] + i[3]);
      v50 = i - 2;
      if ( v23 == v11 )
        goto LABEL_21;
    }
    v22 = 0LL;
    v50 = 0LL;
LABEL_21:
    if ( RtlpHeapErrorHandlerThreshold >= 1 && !v22 )
    {
      DbgPrint("(UCRBlock != NULL)");
      RtlpHeapHandleError();
    }
    v24 = 8 * v14;
    if ( v7 )
    {
      v25 = (__int64)&v11[v24];
      v51 = (char *)&v11[v24];
    }
    else
    {
      v51 = (char *)&v11[v24];
      v25 = (__int64)&v11[v24 - 16];
    }
    RegionSize = (v25 & 0xFFFFFFFFFFFFF000uLL) - (_QWORD)v11;
    if ( !RegionSize )
    {
      if ( RtlpHeapErrorHandlerThreshold >= 1 )
      {
        if ( v7 )
        {
          DbgPrint("(!TrailingUCR)");
          RtlpHeapHandleError();
        }
      }
      goto LABEL_31;
    }
    if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) >= 0 )
    {
      if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        RtlpLogHeapDecommit(v6, BaseAddress, RegionSize, 5LL);
      ++*(_DWORD *)(v6 + 580);
      v27 = v50;
      v28 = v50[5];
      if ( v28 >= 0xFF000 )
        *(_QWORD *)(v6 + 552) -= v28;
      RtlpRemoveUCRBlock(v26, v27);
      v27[5] += RegionSize;
      RtlpInsertUCRBlock(v6, v27);
      *(_DWORD *)(v13 + 80) += RegionSize >> 12;
      v29 = RegionSize;
      *(_QWORD *)(v6 + 544) -= RegionSize;
      v30 = v27[5];
      if ( v30 >= 0xFF000 )
        *(_QWORD *)(v6 + 552) += v30;
      if ( v7 )
        goto LABEL_54;
      v31 = (char *)BaseAddress + v29;
      *(_WORD *)((char *)BaseAddress + v29 + 12) = *(_WORD *)(v6 + 140);
      LODWORD(v29) = RegionSize;
      if ( v51 == (char *)BaseAddress + RegionSize )
      {
        if ( !*(_DWORD *)(v6 + 124) )
          goto LABEL_54;
        v31[11] = v31[8] ^ v31[9] ^ v31[10];
        *((_DWORD *)v31 + 2) ^= *(_DWORD *)(v6 + 136);
      }
      else
      {
        v31[15] = 0;
        v31[10] = 0;
        v32 = (v24 * 2 - RegionSize) >> 4;
        v33 = RtlpHeapErrorHandlerThreshold < 1;
        *((_WORD *)v31 + 4) = v32;
        if ( !v33 && (unsigned __int16)v32 <= 1u )
        {
          DbgPrint("((LONG)FreeEntry->Size > 1)");
          RtlpHeapHandleError();
        }
        v31[11] = 0;
        v35 = *(_QWORD *)(v13 + 40);
        if ( v35 != v13 )
        {
          if ( (unsigned __int64)&v31[-v13] >> 16 > 0xFC )
            RtlpLogHeapFailure(3, v35, (_DWORD)v31, v13, 0LL);
          v3 = ((unsigned int)((_DWORD)v31 - v13) >> 16) + 1;
        }
        v36 = *((unsigned __int16 *)v31 + 4);
        v31[14] = v3;
        RtlpInsertFreeBlock(v6, v31, v36);
      }
      LODWORD(v29) = RegionSize;
LABEL_54:
      result = DWORD2(PerfGlobalGroupMask);
      if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        return RtlpLogHeapContractEvent(v6, (_DWORD)BaseAddress, v29, 16 * (unsigned int)*(_QWORD *)(v6 + 192), v7, v48);
      return result;
    }
LABEL_44:
    RtlpUpdateHeapRates(v6, 3LL);
    if ( v7 )
    {
      RtlpCreateUCREntry(v34, v13, v49 - 48, v48, (__int64)v11, (__int64)&v53);
      v14 = v53;
    }
    goto LABEL_31;
  }
  v37 = (char *)(((unsigned __int64)v11 + 4159) & 0xFFFFFFFFFFFFF000uLL);
  BaseAddress = v37;
  if ( v37 == (char *)(v11 + 40) )
  {
    v37 += 4096;
    BaseAddress = v37;
  }
  v38 = 8 * v14;
  if ( v7 )
    v39 = (unsigned __int64)&v11[v38];
  else
    v39 = (unsigned __int64)&v11[v38 - 16];
  v40 = v39 & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v40;
  if ( v40 < (unsigned __int64)v37 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 1 && v7 )
    {
      DbgPrint("(!TrailingUCR)", v15);
      RtlpHeapHandleError();
    }
    goto LABEL_31;
  }
  v41 = v40 - (_QWORD)v37;
  RegionSize = v41;
  if ( v15[15] != 3 && (!v41 || v41 < *(_QWORD *)(v6 + 176)) )
  {
LABEL_31:
    a3 = v14;
    a2 = v11;
    goto LABEL_88;
  }
  if ( v41 )
  {
    ++*(_DWORD *)(v6 + 580);
    if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
      goto LABEL_44;
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapDecommit(v6, BaseAddress, RegionSize, 6LL);
    v41 = RegionSize;
    v37 = (char *)BaseAddress;
  }
  if ( !v7 )
  {
    v42 = &v37[v41];
    *(_WORD *)&v37[v41 + 12] = *(_WORD *)(v6 + 140);
    LODWORD(v41) = RegionSize;
    LODWORD(v37) = (_DWORD)BaseAddress;
    if ( &v11[v38] == (_WORD *)((char *)BaseAddress + RegionSize) )
    {
      if ( !*(_DWORD *)(v6 + 124) )
        goto LABEL_83;
      v42[11] = v42[8] ^ v42[9] ^ v42[10];
      *((_DWORD *)v42 + 2) ^= *(_DWORD *)(v6 + 136);
    }
    else
    {
      v42[15] = 0;
      v42[10] = 0;
      v43 = ((unsigned __int64)v11 + v38 * 2 - RegionSize - (_QWORD)BaseAddress) >> 4;
      v33 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v42 + 4) = v43;
      if ( !v33 && (unsigned __int16)v43 <= 1u )
      {
        DbgPrint("(LONG)FreeEntry->Size > 1");
        RtlpHeapHandleError();
      }
      v42[11] = 0;
      v44 = *(_QWORD *)(v13 + 40);
      if ( v44 == v13 )
      {
        LOBYTE(v45) = 0;
      }
      else
      {
        v45 = ((unsigned __int64)&v42[-v13] >> 16) + 1;
        if ( (unsigned __int64)&v42[-v13] >> 16 > 0xFC )
          RtlpLogHeapFailure(3, v44, (_DWORD)v42, v13, 0LL);
      }
      v46 = *((unsigned __int16 *)v42 + 4);
      v42[14] = v45;
      RtlpInsertFreeBlock(v6, v42, v46);
    }
    LODWORD(v41) = RegionSize;
    LODWORD(v37) = (_DWORD)BaseAddress;
  }
LABEL_83:
  RtlpCreateUCREntry(v6, v13, (_DWORD)v37 - 48, v41, (__int64)v11, (__int64)&v51);
  RtlpInsertFreeBlock(v6, v11, v51);
  result = DWORD2(PerfGlobalGroupMask);
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
    return RtlpLogHeapContractEvent(
             v6,
             (_DWORD)BaseAddress,
             RegionSize,
             16 * (unsigned int)*(_QWORD *)(v6 + 192),
             0,
             0LL);
  return result;
}
