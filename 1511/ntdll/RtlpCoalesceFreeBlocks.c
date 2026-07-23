/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x18001DDEC
 * Callers:
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x18008E114 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180057774 (RtlpHeapRemoveListEntry.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A92F0 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(_DWORD *BaseAddress, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v5; // r13
  unsigned __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 *v13; // r14
  unsigned __int64 v14; // r12
  unsigned __int64 i; // rax
  __int64 *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r15d
  unsigned int v19; // eax
  __int64 v20; // r10
  unsigned int v21; // edx
  __int64 v22; // r9
  _QWORD *v23; // r11
  __int64 v24; // r13
  __int64 v25; // r9
  char v26; // al
  SIZE_T v27; // r14
  SIZE_T v28; // r15
  __int64 *v29; // r15
  __int64 v30; // r8
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 *v34; // rdx
  unsigned __int64 j; // rax
  __int64 *v36; // rax
  int v37; // r9d
  __int64 v38; // r9
  char v39; // al
  SIZE_T v40; // rdi
  SIZE_T v41; // r14
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 *v44; // r15
  __int64 v45; // r8
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 *v49; // rdx
  unsigned __int64 k; // rax
  __int64 *v51; // rax
  int v52; // r9d
  __int64 v53; // r9
  char v54; // al
  SIZE_T v55; // r14
  SIZE_T v56; // r12
  __int64 *v57; // r15
  __int64 v58; // r8
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 *v62; // rdx
  unsigned __int64 m; // rax
  __int64 *v64; // rax
  int v65; // r9d
  __int64 v66; // r9
  char v67; // al
  SIZE_T v68; // r14
  SIZE_T v69; // r12
  __int64 *v71; // [rsp+30h] [rbp-30h]
  int v72; // [rsp+40h] [rbp-20h]
  int v73; // [rsp+50h] [rbp-10h]
  __int64 v74; // [rsp+A0h] [rbp+40h]
  __int64 v75; // [rsp+A8h] [rbp+48h]

  v5 = a3;
  v6 = 16 * (*((unsigned __int16 *)BaseAddress + 70) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v7 = a2;
  v8 = a2 - v6;
  if ( a2 - v6 == a2
    || ((*(_BYTE *)(v8 + 10) ^ (unsigned __int8)((BaseAddress[31] >> 20) & *((_BYTE *)BaseAddress + 138))) & 1) != 0 )
  {
    goto LABEL_73;
  }
  if ( BaseAddress[31] )
  {
    *(_DWORD *)(v8 + 8) ^= BaseAddress[34];
    if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, a2 - v6);
  }
  if ( a4 )
  {
    v10 = (_QWORD *)(v7 + 16);
    v75 = *(_QWORD *)(v7 + 16);
    v71 = *(__int64 **)(v7 + 24);
    v11 = *v71;
    v12 = *(_QWORD *)(v75 + 8);
    if ( *v71 != v12 || (_QWORD *)v11 != v10 )
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v10, v12, v11, 0LL);
LABEL_48:
      a4 = 0;
      goto LABEL_49;
    }
    *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v7 + 8);
    v13 = (__int64 *)*((_QWORD *)BaseAddress + 39);
    if ( v13 )
    {
      v14 = *(unsigned __int16 *)(v7 + 8);
      for ( i = *((unsigned int *)v13 + 2); ; i = *((unsigned int *)v16 + 2) )
      {
        if ( v14 < i )
        {
          v17 = *(unsigned __int16 *)(v7 + 8);
          goto LABEL_15;
        }
        v16 = (__int64 *)*v13;
        if ( !*v13 )
          break;
        v13 = (__int64 *)*v13;
      }
      v17 = *((_DWORD *)v13 + 2) - 1;
LABEL_15:
      v18 = v17 - *((_DWORD *)v13 + 6);
      v19 = 2 * v18;
      if ( !*((_DWORD *)v13 + 3) )
        v19 = v17 - *((_DWORD *)v13 + 6);
      v20 = v13[6];
      v21 = *((_DWORD *)v13 + 2);
      v22 = v19;
      v74 = v19;
      v23 = *(_QWORD **)(v20 + 8LL * v19);
      --*((_DWORD *)v13 + 4);
      if ( v17 == v21 - 1 )
        --*((_DWORD *)v13 + 5);
      if ( v23 == v10 )
      {
        if ( !*v13 )
          --v21;
        if ( v17 >= v21 )
        {
          if ( *v10 != v13[4] )
          {
            *(_QWORD *)(v20 + 8LL * v19) = *v10;
            goto LABEL_35;
          }
          *(_QWORD *)(v20 + 8LL * v19) = 0LL;
        }
        else
        {
          v24 = *v10;
          if ( *v10 != v13[4] )
          {
            v72 = *(_DWORD *)(v24 - 16 + 8);
            if ( BaseAddress[31] )
            {
              v72 = BaseAddress[34] ^ *(_DWORD *)(v24 - 16 + 8);
              if ( HIBYTE(v72) != (BYTE2(v72) ^ (unsigned __int8)(BYTE1(v72) ^ v72)) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v24 - 16, 0, 0LL, 0LL);
                v22 = v74;
              }
            }
            if ( (_DWORD)v14 == (unsigned __int16)v72 )
            {
              *(_QWORD *)(v13[6] + 8 * v22) = v24;
              v5 = a3;
              goto LABEL_35;
            }
          }
          v5 = a3;
          *(_QWORD *)(v13[6] + 8 * v22) = 0LL;
        }
        *(_DWORD *)(v13[5] + 4LL * (v18 >> 5)) &= ~(1 << (v18 & 0x1F));
      }
    }
LABEL_35:
    *v71 = v75;
    *(_QWORD *)(v75 + 8) = v71;
    if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
    {
      v26 = *(_BYTE *)(v7 + 10);
      if ( (v26 & 4) != 0 )
      {
        v27 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
        if ( (v26 & 2) != 0 && v27 > 4 )
          v27 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
        v28 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v27, 0xFEEEFEEE);
        if ( v28 != v27 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v7,
            (const void *)(v28 + v7 + 32));
          RtlpBreakPointHeap(v7);
        }
      }
    }
    else
    {
      LOBYTE(v25) = 1;
      RtlpDeCommitFreeBlock(BaseAddress, v7, *(unsigned __int16 *)(v7 + 8), v25);
    }
    goto LABEL_48;
  }
LABEL_49:
  v29 = *(__int64 **)(v8 + 24);
  v30 = v8 + 16;
  v31 = *(_QWORD *)(v8 + 16);
  v32 = *v29;
  v33 = *(_QWORD *)(v31 + 8);
  if ( *v29 == v33 && v32 == v30 )
  {
    *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v8 + 8);
    v34 = (__int64 *)*((_QWORD *)BaseAddress + 39);
    if ( v34 )
    {
      for ( j = *((unsigned int *)v34 + 2); ; j = *((unsigned int *)v36 + 2) )
      {
        if ( *(unsigned __int16 *)(v8 + 8) < j )
        {
          v37 = *(unsigned __int16 *)(v8 + 8);
          goto LABEL_57;
        }
        v36 = (__int64 *)*v34;
        if ( !*v34 )
          break;
        v34 = (__int64 *)*v34;
      }
      v37 = *((_DWORD *)v34 + 2) - 1;
LABEL_57:
      LOBYTE(v30) = 1;
      RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v34, v30, v8 + 16, v37, *(unsigned __int16 *)(v8 + 8));
    }
    *v29 = v31;
    *(_QWORD *)(v31 + 8) = v29;
    if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
    {
      v39 = *(_BYTE *)(v8 + 10);
      if ( (v39 & 4) != 0 )
      {
        v40 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        if ( (v39 & 2) != 0 && v40 > 4 )
          v40 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
        v41 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v40, 0xFEEEFEEE);
        if ( v41 != v40 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v8,
            (const void *)(v41 + v8 + 32));
          RtlpBreakPointHeap(v8);
        }
      }
      v42 = *(unsigned __int16 *)(v8 + 8);
      v7 = v8;
      *(_BYTE *)(v8 + 10) = 0;
      *(_BYTE *)(v8 + 15) = 0;
      *v5 += v42;
      *(_WORD *)(v8 + 8) = *(_WORD *)v5;
      *(_WORD *)(v8 + 16LL * *v5 + 12) = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)v5;
    }
    else
    {
      LOBYTE(v38) = 1;
      RtlpDeCommitFreeBlock(BaseAddress, v8, *(unsigned __int16 *)(v8 + 8), v38);
    }
  }
  else
  {
    RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v30, v33, v32, 0LL);
  }
LABEL_73:
  v43 = v7 + 16LL * *v5;
  if ( BaseAddress[31] )
  {
    v73 = BaseAddress[34] ^ *(_DWORD *)(v43 + 8);
    if ( HIBYTE(v73) != (BYTE2(v73) ^ (unsigned __int8)(BYTE1(v73) ^ v73)) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v43, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v43 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (BaseAddress[31] >> 20))) & 1) == 0 )
  {
    if ( BaseAddress[31] )
    {
      *(_DWORD *)(v43 + 8) ^= BaseAddress[34];
      if ( *(_BYTE *)(v43 + 11) != (*(_BYTE *)(v43 + 8) ^ (unsigned __int8)(*(_BYTE *)(v43 + 9) ^ *(_BYTE *)(v43 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v43);
    }
    if ( a4 )
    {
      v44 = *(__int64 **)(v7 + 24);
      v45 = v7 + 16;
      v46 = *(_QWORD *)(v7 + 16);
      v47 = *v44;
      v48 = *(_QWORD *)(v46 + 8);
      if ( *v44 == v48 && v47 == v45 )
      {
        *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v7 + 8);
        v49 = (__int64 *)*((_QWORD *)BaseAddress + 39);
        if ( v49 )
        {
          for ( k = *((unsigned int *)v49 + 2); ; k = *((unsigned int *)v51 + 2) )
          {
            if ( *(unsigned __int16 *)(v7 + 8) < k )
            {
              v52 = *(unsigned __int16 *)(v7 + 8);
              goto LABEL_89;
            }
            v51 = (__int64 *)*v49;
            if ( !*v49 )
              break;
            v49 = (__int64 *)*v49;
          }
          v52 = *((_DWORD *)v49 + 2) - 1;
LABEL_89:
          LOBYTE(v45) = 1;
          RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v49, v45, v7 + 16, v52, *(unsigned __int16 *)(v7 + 8));
        }
        *v44 = v46;
        *(_QWORD *)(v46 + 8) = v44;
        if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
        {
          v54 = *(_BYTE *)(v7 + 10);
          if ( (v54 & 4) != 0 )
          {
            v55 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
            if ( (v54 & 2) != 0 && v55 > 4 )
              v55 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
            v56 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v55, 0xFEEEFEEE);
            if ( v56 != v55 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v7,
                (const void *)(v56 + v7 + 32));
              RtlpBreakPointHeap(v7);
            }
          }
        }
        else
        {
          LOBYTE(v53) = 1;
          RtlpDeCommitFreeBlock(BaseAddress, v7, *(unsigned __int16 *)(v7 + 8), v53);
        }
      }
      else
      {
        RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v45, v48, v47, 0LL);
      }
      a4 = 0;
    }
    v57 = *(__int64 **)(v43 + 24);
    v58 = v43 + 16;
    v59 = *(_QWORD *)(v43 + 16);
    v60 = *v57;
    v61 = *(_QWORD *)(v59 + 8);
    if ( *v57 == v61 && v60 == v58 )
    {
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v43 + 8);
      v62 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v62 )
      {
        for ( m = *((unsigned int *)v62 + 2); ; m = *((unsigned int *)v64 + 2) )
        {
          if ( *(unsigned __int16 *)(v43 + 8) < m )
          {
            v65 = *(unsigned __int16 *)(v43 + 8);
            goto LABEL_113;
          }
          v64 = (__int64 *)*v62;
          if ( !*v62 )
            break;
          v62 = (__int64 *)*v62;
        }
        v65 = *((_DWORD *)v62 + 2) - 1;
LABEL_113:
        LOBYTE(v58) = 1;
        RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v62, v58, v43 + 16, v65, *(unsigned __int16 *)(v43 + 8));
      }
      *v57 = v59;
      *(_QWORD *)(v59 + 8) = v57;
      if ( (*(_BYTE *)(v43 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
      {
        v67 = *(_BYTE *)(v43 + 10);
        if ( (v67 & 4) != 0 )
        {
          v68 = 16LL * *(unsigned __int16 *)(v43 + 8) - 32;
          if ( (v67 & 2) != 0 && v68 > 4 )
            v68 = 16LL * *(unsigned __int16 *)(v43 + 8) - 36;
          v69 = RtlCompareMemoryUlong((PVOID)(v43 + 32), v68, 0xFEEEFEEE);
          if ( v69 != v68 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v43,
              (const void *)(v43 + 32 + v69));
            RtlpBreakPointHeap(v43);
          }
        }
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *v5 += *(unsigned __int16 *)(v43 + 8);
        *(_WORD *)(v7 + 8) = *(_WORD *)v5;
        *(_WORD *)(v7 + 16LL * *v5 + 12) = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)v5;
        return v7;
      }
      LOBYTE(v66) = 1;
      RtlpDeCommitFreeBlock(BaseAddress, v43, *(unsigned __int16 *)(v43 + 8), v66);
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v58, v61, v60, 0LL);
    }
  }
  return v7;
}
