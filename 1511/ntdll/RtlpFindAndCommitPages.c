/*
 * XREFs of RtlpFindAndCommitPages @ 0x18001E8B0
 * Callers:
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlpFindUCREntry @ 0x18001DD5C (RtlpFindUCREntry.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpHeapAddListEntry @ 0x1800573C4 (RtlpHeapAddListEntry.c)
 *     RtlpHeapFindListLookupEntry @ 0x1800574EC (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180057774 (RtlpHeapRemoveListEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800F0DA8 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F1810 (RtlpLogHeapExtendEvent.c)
 */

unsigned __int64 __fastcall RtlpFindAndCommitPages(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rsi
  __int64 *v5; // rdx
  __int64 ListLookupEntry; // rax
  _QWORD *v7; // rdi
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 (__fastcall *v11)(__int64, __int64 *, unsigned __int64 *); // r14
  int v12; // eax
  _QWORD *v13; // r8
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  _QWORD *v27; // r14
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r13
  bool v31; // cc
  bool v32; // zf
  unsigned __int64 v33; // rdx
  _QWORD *UCREntry; // rax
  __int64 *v35; // rcx
  __int64 *v36; // rdx
  unsigned __int8 v37; // al
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // r8
  _QWORD *v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  unsigned __int64 v47; // rdx
  int HeapProtection; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r8
  __int64 *v51; // rax
  unsigned __int64 v52; // rcx
  __int64 *v53; // rax
  __int64 *v54; // rax
  __int64 v55; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a2;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((v3 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v3 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    RtlpHeapHandleError(1LL);
  }
  v5 = *(__int64 **)(a1 + 320);
  if ( v5 )
  {
    v49 = v3 >> 12;
    if ( v3 >> 12 >= *((unsigned int *)v5 + 2) )
    {
      while ( 1 )
      {
        v54 = (__int64 *)*v5;
        if ( !*v5 )
          break;
        v5 = (__int64 *)*v5;
        if ( v49 < *((unsigned int *)v54 + 2) )
          goto LABEL_64;
      }
      LODWORD(v49) = *((_DWORD *)v5 + 2) - 1;
    }
LABEL_64:
    ListLookupEntry = RtlpHeapFindListLookupEntry(a1, (_DWORD)v5, 0, v49, v3);
    goto LABEL_65;
  }
  ListLookupEntry = a1 + 240;
  v7 = *(_QWORD **)(a1 + 240);
  if ( (_QWORD *)(a1 + 240) == v7 )
  {
LABEL_65:
    v7 = (_QWORD *)ListLookupEntry;
    goto LABEL_5;
  }
  while ( v7[5] < v3 )
  {
    v7 = (_QWORD *)*v7;
    if ( (_QWORD *)ListLookupEntry == v7 )
      goto LABEL_65;
  }
LABEL_5:
  if ( v7 == (_QWORD *)(a1 + 240) )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && v7[5] < *a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v8 = *((_BYTE *)v7 - 2);
  v9 = (unsigned __int64)(v7 - 2);
  if ( v8 )
    v10 = (v9 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v8 << 16) + 0x10000;
  else
    v10 = a1;
  v11 = (__int64 (__fastcall *)(__int64, __int64 *, unsigned __int64 *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360));
  v55 = v7[4];
  if ( v11 )
  {
    v12 = v11(a1, &v55, a2);
  }
  else
  {
    v47 = v7[5];
    if ( v47 - *a2 <= 16LL * *(_QWORD *)(a1 + 176) && v47 < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
      *a2 = v47;
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 1);
    v12 = ZwAllocateVirtualMemory(-1LL, &v55, 0LL, a2, 4096, HeapProtection);
    ++*(_DWORD *)(a1 + 584);
  }
  if ( v12 < 0 )
  {
    ++*(_DWORD *)(a1 + 592);
    return 0LL;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(a1, v55, *a2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v7 - 2);
  }
  *(_BYTE *)(v9 + 10) = 0;
  v13 = v7 + 2;
  *(_BYTE *)(v9 + 15) = 0;
  v14 = v7[2];
  v15 = (__int64 *)v7[3];
  v16 = *(_QWORD *)(v14 + 8);
  v17 = *v15;
  if ( *v15 == v16 && (_QWORD *)v17 == v13 )
  {
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v13, v16, v17, 0LL);
  }
  v18 = v7[5];
  if ( v18 )
  {
    v19 = *(__int64 **)(a1 + 320);
    if ( v19 )
    {
      v50 = v18 >> 12;
      if ( v18 >> 12 >= *((unsigned int *)v19 + 2) )
      {
        while ( 1 )
        {
          v51 = (__int64 *)*v19;
          if ( !*v19 )
            break;
          v19 = (__int64 *)*v19;
          if ( v50 < *((unsigned int *)v51 + 2) )
            goto LABEL_69;
        }
        LODWORD(v50) = *((_DWORD *)v19 + 2) - 1;
      }
LABEL_69:
      RtlpHeapRemoveListEntry(a1, (_DWORD)v19, 0, (_DWORD)v7, v50, v7[5]);
    }
    v20 = *v7;
    v21 = (__int64 *)v7[1];
    v22 = *(_QWORD *)(*v7 + 8LL);
    v23 = *v21;
    if ( *v21 == v22 && (_QWORD *)v23 == v7 )
    {
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v7, v22, v23, 0LL);
    }
  }
  --*(_DWORD *)(v10 + 84);
  *(_DWORD *)(v10 + 80) -= v7[5] >> 12;
  *(_QWORD *)(a1 + 536) += v7[5];
  ++*(_DWORD *)(a1 + 568);
  --*(_DWORD *)(a1 + 564);
  v24 = v7[5];
  if ( v24 >= 0xFF000 )
    *(_QWORD *)(a1 + 544) -= v24;
  v25 = v7[5];
  v26 = *a2;
  if ( v25 > *a2 || v25 + v7[4] == *(_QWORD *)(v10 + 72) )
  {
    v27 = (_QWORD *)(v26 + v7[4] - 48LL);
    v28 = (unsigned __int64)(v27 - 2);
    v27[5] = v25 - v26;
    v27[4] = v27 + 6;
    *(_DWORD *)(v28 + 8) = 65540;
    *(_BYTE *)(v28 + 15) = 3;
    v29 = *(_QWORD *)(v10 + 40);
    if ( v29 == v10 )
    {
      LOBYTE(v30) = 0;
    }
    else
    {
      v30 = ((v28 - v10) >> 16) + 1;
      if ( (v28 - v10) >> 16 > 0xFC )
        RtlpLogHeapFailure(3, v29, (_DWORD)v27 - 16, v10, 0LL, 0LL);
    }
    v31 = RtlpHeapErrorHandlerThreshold < 1;
    *(_BYTE *)(v28 + 14) = v30;
    if ( !v31 )
    {
      v32 = v9 == v28;
      if ( v9 <= v28 )
        goto LABEL_31;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
      RtlpHeapHandleError(1LL);
    }
    v32 = v9 == v28;
LABEL_31:
    if ( !v32 )
      *(_WORD *)(v28 + 12) = *(_WORD *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v28 + 11) = *(_BYTE *)(v28 + 8) ^ *(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10);
      *(_DWORD *)(v28 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    v33 = v27[5];
    if ( v33 )
    {
      UCREntry = RtlpFindUCREntry(a1, v33);
      v35 = (__int64 *)UCREntry[1];
      if ( (_QWORD *)*v35 == UCREntry )
      {
        *v27 = UCREntry;
        v27[1] = v35;
        *v35 = (__int64)v27;
        UCREntry[1] = v27;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)UCREntry, 0, *v35, 0LL);
      }
      v36 = *(__int64 **)(a1 + 320);
      if ( v36 )
      {
        v52 = v27[5] >> 12;
        if ( v52 >= *((unsigned int *)v36 + 2) )
        {
          while ( 1 )
          {
            v53 = (__int64 *)*v36;
            if ( !*v36 )
              break;
            v36 = (__int64 *)*v36;
            if ( v52 < *((unsigned int *)v53 + 2) )
              goto LABEL_73;
          }
          LODWORD(v52) = *((_DWORD *)v36 + 2) - 1;
        }
LABEL_73:
        RtlpHeapAddListEntry(a1, (_DWORD)v36, 0, (_DWORD)v27, v52, v27[5]);
      }
    }
    v37 = *(_BYTE *)(v28 + 14);
    if ( v37 )
      v38 = (v28 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v37 << 16) + 0x10000;
    else
      v38 = a1;
    v39 = *(_QWORD *)(v38 + 96);
    v40 = v27 + 2;
    v41 = (_QWORD *)(v38 + 96);
    v42 = *(_QWORD **)(v39 + 8);
    if ( v42 == v41 )
    {
      *v40 = v39;
      v27[3] = v41;
      *(_QWORD *)(v39 + 8) = v40;
      *v41 = v40;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v41, (_DWORD)v42, 0LL, 0LL);
    }
    ++*(_DWORD *)(v10 + 84);
    *(_DWORD *)(v10 + 80) += v27[5] >> 12;
    *(_QWORD *)(a1 + 536) -= v27[5];
    if ( ++*(_DWORD *)(a1 + 564) > 0xAu
      && !*(_QWORD *)(a1 + 320)
      && (*(_DWORD *)(a1 + 112) & 3) == 2
      && (RtlpDisableHeapLookaside & 1) == 0 )
    {
      *(_DWORD *)(a1 + 120) |= 0x10000000u;
    }
    v43 = v27[5];
    if ( v43 >= 0xFF000 )
      *(_QWORD *)(a1 + 544) += v43;
    *a2 = (v28 - v9) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_47;
  }
  *a2 = v26 + 16LL * *(unsigned __int16 *)(v9 + 8);
LABEL_47:
  *(_BYTE *)(v9 + 11) = 0;
  v44 = *(_QWORD *)(v10 + 40);
  if ( v44 == v10 )
  {
    LOBYTE(v45) = 0;
  }
  else
  {
    v45 = ((v9 - v10) >> 16) + 1;
    if ( (v9 - v10) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, v44, v9, v10, 0LL, 0LL);
  }
  *(_BYTE *)(v9 + 14) = v45;
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapExtendEvent(a1, v9, *a2, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE0380]);
  if ( MEMORY[0x7FFE038A] )
    RtlpLogHeapExtendEvent(a1, v9, *a2, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE038A]);
  return v9;
}
