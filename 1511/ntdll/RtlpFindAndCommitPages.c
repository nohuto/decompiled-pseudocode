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

unsigned __int64 __fastcall RtlpFindAndCommitPages(_QWORD *BaseAddress, PSIZE_T RegionSize)
{
  unsigned __int64 v3; // rsi
  __int64 *v5; // rdx
  char *ListLookupEntry; // rax
  char *v7; // rdi
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rbp
  __int64 (__fastcall *v11)(_QWORD *, PVOID *, PSIZE_T); // r14
  NTSTATUS v12; // eax
  char *v13; // r8
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
  ULONG_PTR v25; // rdx
  ULONG_PTR v26; // r8
  _QWORD *v27; // r14
  unsigned __int64 v28; // rdi
  _QWORD *v29; // rdx
  __int64 v30; // r13
  bool v31; // cc
  bool v32; // zf
  unsigned __int64 v33; // rdx
  _QWORD *UCREntry; // rax
  __int64 *v35; // rcx
  __int64 *v36; // rdx
  unsigned __int8 v37; // al
  _QWORD *v38; // r8
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // r8
  _QWORD *v42; // r9
  unsigned __int64 v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // rdi
  unsigned __int64 v47; // rdx
  ULONG Protect; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r8
  __int64 *v51; // rax
  unsigned __int64 v52; // rcx
  __int64 *v53; // rax
  __int64 *v54; // rax
  PVOID BaseAddressa; // [rsp+60h] [rbp+8h] BYREF

  v3 = *RegionSize;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((v3 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v3 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    RtlpHeapHandleError(1LL);
  }
  v5 = (__int64 *)BaseAddress[40];
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
    ListLookupEntry = (char *)RtlpHeapFindListLookupEntry((_DWORD)BaseAddress, (_DWORD)v5, 0, v49, v3);
    goto LABEL_65;
  }
  ListLookupEntry = (char *)(BaseAddress + 30);
  v7 = (char *)BaseAddress[30];
  if ( BaseAddress + 30 == (_QWORD *)v7 )
  {
LABEL_65:
    v7 = ListLookupEntry;
    goto LABEL_5;
  }
  while ( *((_QWORD *)v7 + 5) < v3 )
  {
    v7 = *(char **)v7;
    if ( ListLookupEntry == v7 )
      goto LABEL_65;
  }
LABEL_5:
  if ( v7 == (char *)(BaseAddress + 30) )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *((_QWORD *)v7 + 5) < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v8 = *(v7 - 2);
  v9 = (unsigned __int64)(v7 - 16);
  if ( v8 )
    v10 = (_QWORD *)((v9 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v8 << 16) + 0x10000);
  else
    v10 = BaseAddress;
  v11 = (__int64 (__fastcall *)(_QWORD *, PVOID *, PSIZE_T))(RtlpHeapKey ^ BaseAddress[45]);
  BaseAddressa = (PVOID)*((_QWORD *)v7 + 4);
  if ( v11 )
  {
    v12 = v11(BaseAddress, &BaseAddressa, RegionSize);
  }
  else
  {
    v47 = *((_QWORD *)v7 + 5);
    if ( v47 - *RegionSize <= 16LL * BaseAddress[22] && v47 < 16 * (unsigned __int64)*((unsigned int *)BaseAddress + 37) )
      *RegionSize = v47;
    *RegionSize = (*RegionSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpGetHeapProtection(BaseAddress, 1);
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, RegionSize, 0x1000u, Protect);
    ++*((_DWORD *)BaseAddress + 146);
  }
  if ( v12 < 0 )
  {
    ++*((_DWORD *)BaseAddress + 148);
    return 0LL;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, *RegionSize, 2LL);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v7 - 16);
  }
  *(_BYTE *)(v9 + 10) = 0;
  v13 = v7 + 16;
  *(_BYTE *)(v9 + 15) = 0;
  v14 = *((_QWORD *)v7 + 2);
  v15 = (__int64 *)*((_QWORD *)v7 + 3);
  v16 = *(_QWORD *)(v14 + 8);
  v17 = *v15;
  if ( *v15 == v16 && (char *)v17 == v13 )
  {
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v13, v16, v17, 0LL);
  }
  v18 = *((_QWORD *)v7 + 5);
  if ( v18 )
  {
    v19 = (__int64 *)BaseAddress[40];
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
      RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v19, 0, (_DWORD)v7, v50, *((_QWORD *)v7 + 5));
    }
    v20 = *(_QWORD *)v7;
    v21 = (__int64 *)*((_QWORD *)v7 + 1);
    v22 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
    v23 = *v21;
    if ( *v21 == v22 && (char *)v23 == v7 )
    {
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v7, v22, v23, 0LL);
    }
  }
  --*((_DWORD *)v10 + 21);
  *((_DWORD *)v10 + 20) -= *((_QWORD *)v7 + 5) >> 12;
  BaseAddress[67] += *((_QWORD *)v7 + 5);
  ++*((_DWORD *)BaseAddress + 142);
  --*((_DWORD *)BaseAddress + 141);
  v24 = *((_QWORD *)v7 + 5);
  if ( v24 >= 0xFF000 )
    BaseAddress[68] -= v24;
  v25 = *((_QWORD *)v7 + 5);
  v26 = *RegionSize;
  if ( v25 > *RegionSize || v25 + *((_QWORD *)v7 + 4) == v10[9] )
  {
    v27 = (_QWORD *)(v26 + *((_QWORD *)v7 + 4) - 48LL);
    v28 = (unsigned __int64)(v27 - 2);
    v27[5] = v25 - v26;
    v27[4] = v27 + 6;
    *(_DWORD *)(v28 + 8) = 65540;
    *(_BYTE *)(v28 + 15) = 3;
    v29 = (_QWORD *)v10[5];
    if ( v29 == v10 )
    {
      LOBYTE(v30) = 0;
    }
    else
    {
      v30 = ((v28 - (unsigned __int64)v10) >> 16) + 1;
      if ( (v28 - (unsigned __int64)v10) >> 16 > 0xFC )
        RtlpLogHeapFailure(3, (_DWORD)v29, (_DWORD)v27 - 16, (_DWORD)v10, 0LL, 0LL);
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
      *(_WORD *)(v28 + 12) = *((_WORD *)BaseAddress + 70);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v28 + 11) = *(_BYTE *)(v28 + 8) ^ *(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10);
      *(_DWORD *)(v28 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    v33 = v27[5];
    if ( v33 )
    {
      UCREntry = RtlpFindUCREntry((__int64)BaseAddress, v33);
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
      v36 = (__int64 *)BaseAddress[40];
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
        RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v36, 0, (_DWORD)v27, v52, v27[5]);
      }
    }
    v37 = *(_BYTE *)(v28 + 14);
    if ( v37 )
      v38 = (_QWORD *)((v28 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v37 << 16) + 0x10000);
    else
      v38 = BaseAddress;
    v39 = v38[12];
    v40 = v27 + 2;
    v41 = v38 + 12;
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
    ++*((_DWORD *)v10 + 21);
    *((_DWORD *)v10 + 20) += v27[5] >> 12;
    BaseAddress[67] -= v27[5];
    if ( ++*((_DWORD *)BaseAddress + 141) > 0xAu
      && !BaseAddress[40]
      && (BaseAddress[14] & 3) == 2
      && (RtlpDisableHeapLookaside & 1) == 0 )
    {
      *((_DWORD *)BaseAddress + 30) |= 0x10000000u;
    }
    v43 = v27[5];
    if ( v43 >= 0xFF000 )
      BaseAddress[68] += v43;
    *RegionSize = (v28 - v9) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_47;
  }
  *RegionSize = v26 + 16LL * *(unsigned __int16 *)(v9 + 8);
LABEL_47:
  *(_BYTE *)(v9 + 11) = 0;
  v44 = (_QWORD *)v10[5];
  if ( v44 == v10 )
  {
    LOBYTE(v45) = 0;
  }
  else
  {
    v45 = ((v9 - (unsigned __int64)v10) >> 16) + 1;
    if ( (v9 - (unsigned __int64)v10) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, (_DWORD)v44, v9, (_DWORD)v10, 0LL, 0LL);
  }
  *(_BYTE *)(v9 + 14) = v45;
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapExtendEvent((int)BaseAddress, v9, *RegionSize, 16 * BaseAddress[24], (HANDLE)MEMORY[0x7FFE0380]);
  if ( MEMORY[0x7FFE038A] )
    RtlpLogHeapExtendEvent((int)BaseAddress, v9, *RegionSize, 16 * BaseAddress[24], (HANDLE)MEMORY[0x7FFE038A]);
  return v9;
}
