/*
 * XREFs of RtlpFindAndCommitPages @ 0x1800283F0
 * Callers:
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800289DC (RtlpHeapRemoveListEntry.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpHeapFindListLookupEntry @ 0x18004B1E0 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapAddListEntry @ 0x18004C2E4 (RtlpHeapAddListEntry.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F9310 (RtlpLogHeapExtendEvent.c)
 */

unsigned __int64 __fastcall RtlpFindAndCommitPages(_QWORD *BaseAddress, PSIZE_T RegionSize)
{
  unsigned __int64 v3; // rsi
  __int64 *v5; // rdx
  char *ListLookupEntry; // rax
  char *v7; // rdi
  _QWORD *v8; // r15
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rbp
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
  int v31; // ecx
  bool v32; // zf
  unsigned __int64 v33; // r13
  __int64 *v34; // rdx
  _QWORD *v35; // rax
  __int64 *v36; // rcx
  __int64 *v37; // rdx
  unsigned __int8 v38; // al
  _QWORD *v39; // r8
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // r8
  _QWORD *v43; // r9
  unsigned __int64 v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // rdi
  unsigned __int64 v48; // rdx
  ULONG Protect; // eax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r8
  __int64 *v52; // rax
  unsigned __int64 v53; // rcx
  __int64 *v54; // rax
  unsigned __int64 v55; // rcx
  __int64 *v56; // rax
  __int64 *v57; // rax
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
    v50 = v3 >> 12;
    if ( v3 >> 12 >= *((unsigned int *)v5 + 2) )
    {
      while ( 1 )
      {
        v57 = (__int64 *)*v5;
        if ( !*v5 )
          break;
        v5 = (__int64 *)*v5;
        if ( v50 < *((unsigned int *)v57 + 2) )
          goto LABEL_66;
      }
      LODWORD(v50) = *((_DWORD *)v5 + 2) - 1;
    }
LABEL_66:
    ListLookupEntry = (char *)RtlpHeapFindListLookupEntry((_DWORD)BaseAddress, (_DWORD)v5, 0, v50, v3);
    goto LABEL_67;
  }
  ListLookupEntry = (char *)(BaseAddress + 30);
  v7 = (char *)BaseAddress[30];
  if ( BaseAddress + 30 == (_QWORD *)v7 )
  {
LABEL_67:
    v7 = ListLookupEntry;
    goto LABEL_5;
  }
  while ( *((_QWORD *)v7 + 5) < v3 )
  {
    v7 = *(char **)v7;
    if ( ListLookupEntry == v7 )
      goto LABEL_67;
  }
LABEL_5:
  v8 = BaseAddress + 30;
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
  v9 = *(v7 - 2);
  v10 = (unsigned __int64)(v7 - 16);
  if ( v9 )
    v11 = (_QWORD *)((v10 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v9 << 16) + 0x10000);
  else
    v11 = BaseAddress;
  BaseAddressa = (PVOID)*((_QWORD *)v7 + 4);
  if ( RtlpHeapKey != BaseAddress[45] )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD *, PVOID *, PSIZE_T))(RtlpHeapKey ^ BaseAddress[45]))(
            BaseAddress,
            &BaseAddressa,
            RegionSize);
  }
  else
  {
    v48 = *((_QWORD *)v7 + 5);
    if ( v48 - *RegionSize <= 16LL * BaseAddress[22] && v48 < 16 * (unsigned __int64)*((unsigned int *)BaseAddress + 37) )
      *RegionSize = v48;
    *RegionSize = (*RegionSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpGetHeapProtection(BaseAddress);
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, RegionSize, 0x1000u, Protect);
    ++*((_DWORD *)BaseAddress + 148);
  }
  if ( v12 < 0 )
  {
    ++*((_DWORD *)BaseAddress + 150);
    return 0LL;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, *RegionSize, 2LL);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v10 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v7 - 16);
  }
  *(_BYTE *)(v10 + 10) = 0;
  v13 = v7 + 16;
  *(_BYTE *)(v10 + 15) = 0;
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
      v51 = v18 >> 12;
      if ( v18 >> 12 >= *((unsigned int *)v19 + 2) )
      {
        while ( 1 )
        {
          v52 = (__int64 *)*v19;
          if ( !*v19 )
            break;
          v19 = (__int64 *)*v19;
          if ( v51 < *((unsigned int *)v52 + 2) )
            goto LABEL_76;
        }
        LODWORD(v51) = *((_DWORD *)v19 + 2) - 1;
      }
LABEL_76:
      RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v19, 0, (_DWORD)v7, v51, *((_QWORD *)v7 + 5));
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
  --*((_DWORD *)v11 + 21);
  *((_DWORD *)v11 + 20) -= *((_QWORD *)v7 + 5) >> 12;
  BaseAddress[68] += *((_QWORD *)v7 + 5);
  ++*((_DWORD *)BaseAddress + 144);
  --*((_DWORD *)BaseAddress + 143);
  v24 = *((_QWORD *)v7 + 5);
  if ( v24 >= 0xFF000 )
    BaseAddress[69] -= v24;
  v25 = *((_QWORD *)v7 + 5);
  v26 = *RegionSize;
  if ( v25 > *RegionSize || v25 + *((_QWORD *)v7 + 4) == v11[9] )
  {
    v27 = (_QWORD *)(v26 + *((_QWORD *)v7 + 4) - 48LL);
    v28 = (unsigned __int64)(v27 - 2);
    v27[5] = v25 - v26;
    v27[4] = v27 + 6;
    *(_DWORD *)(v28 + 8) = 65540;
    *(_BYTE *)(v28 + 15) = 3;
    v29 = (_QWORD *)v11[5];
    if ( v29 == v11 )
    {
      LOBYTE(v30) = 0;
    }
    else
    {
      v30 = ((v28 - (unsigned __int64)v11) >> 16) + 1;
      if ( (v28 - (unsigned __int64)v11) >> 16 > 0xFC )
        RtlpLogHeapFailure(3, (_DWORD)v29, (_DWORD)v27 - 16, (_DWORD)v11, 0LL, 0LL);
    }
    v31 = RtlpHeapErrorHandlerThreshold;
    *(_BYTE *)(v28 + 14) = v30;
    if ( v31 >= 1 )
    {
      v32 = v10 == v28;
      if ( v10 <= v28 )
        goto LABEL_31;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
      RtlpHeapHandleError(1LL);
      v31 = RtlpHeapErrorHandlerThreshold;
    }
    v32 = v10 == v28;
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
      if ( v31 >= 1 && ((v33 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v33 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
        RtlpHeapHandleError(1LL);
      }
      v34 = (__int64 *)BaseAddress[40];
      if ( v34 )
      {
        v53 = v33 >> 12;
        if ( v33 >> 12 >= *((unsigned int *)v34 + 2) )
        {
          while ( 1 )
          {
            v54 = (__int64 *)*v34;
            if ( !*v34 )
              break;
            v34 = (__int64 *)*v34;
            if ( v53 < *((unsigned int *)v54 + 2) )
              goto LABEL_80;
          }
          LODWORD(v53) = *((_DWORD *)v34 + 2) - 1;
        }
LABEL_80:
        v35 = (_QWORD *)RtlpHeapFindListLookupEntry((_DWORD)BaseAddress, (_DWORD)v34, 0, v53, v33);
      }
      else
      {
        v35 = (_QWORD *)*v8;
        if ( v8 == (_QWORD *)*v8 )
        {
LABEL_39:
          v35 = BaseAddress + 30;
        }
        else
        {
          while ( v35[5] < v33 )
          {
            v35 = (_QWORD *)*v35;
            if ( v8 == v35 )
              goto LABEL_39;
          }
        }
      }
      v36 = (__int64 *)v35[1];
      if ( (_QWORD *)*v36 == v35 )
      {
        *v27 = v35;
        v27[1] = v36;
        *v36 = (__int64)v27;
        v35[1] = v27;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v35, 0, *v36, 0LL);
      }
      v37 = (__int64 *)BaseAddress[40];
      if ( v37 )
      {
        v55 = v27[5] >> 12;
        if ( v55 >= *((unsigned int *)v37 + 2) )
        {
          while ( 1 )
          {
            v56 = (__int64 *)*v37;
            if ( !*v37 )
              break;
            v37 = (__int64 *)*v37;
            if ( v55 < *((unsigned int *)v56 + 2) )
              goto LABEL_84;
          }
          LODWORD(v55) = *((_DWORD *)v37 + 2) - 1;
        }
LABEL_84:
        RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v37, 0, (_DWORD)v27, v55, v27[5]);
      }
    }
    v38 = *(_BYTE *)(v28 + 14);
    if ( v38 )
      v39 = (_QWORD *)((v28 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v38 << 16) + 0x10000);
    else
      v39 = BaseAddress;
    v40 = v39[12];
    v41 = v27 + 2;
    v42 = v39 + 12;
    v43 = *(_QWORD **)(v40 + 8);
    if ( v43 == v42 )
    {
      *v41 = v40;
      v27[3] = v42;
      *(_QWORD *)(v40 + 8) = v41;
      *v42 = v41;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v42, (_DWORD)v43, 0LL, 0LL);
    }
    ++*((_DWORD *)v11 + 21);
    *((_DWORD *)v11 + 20) += v27[5] >> 12;
    BaseAddress[68] -= v27[5];
    if ( ++*((_DWORD *)BaseAddress + 143) > 0xAu
      && !BaseAddress[40]
      && (BaseAddress[14] & 3) == 2
      && (RtlpDisableHeapLookaside & 1) == 0 )
    {
      *((_DWORD *)BaseAddress + 30) |= 0x10000000u;
    }
    v44 = v27[5];
    if ( v44 >= 0xFF000 )
      BaseAddress[69] += v44;
    *RegionSize = (v28 - v10) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_51;
  }
  *RegionSize = v26 + 16LL * *(unsigned __int16 *)(v10 + 8);
LABEL_51:
  *(_BYTE *)(v10 + 11) = 0;
  v45 = (_QWORD *)v11[5];
  if ( v45 == v11 )
  {
    LOBYTE(v46) = 0;
  }
  else
  {
    v46 = ((v10 - (unsigned __int64)v11) >> 16) + 1;
    if ( (v10 - (unsigned __int64)v11) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, (_DWORD)v45, v10, (_DWORD)v11, 0LL, 0LL);
  }
  *(_BYTE *)(v10 + 14) = v46;
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapExtendEvent((int)BaseAddress, v10, *RegionSize, 16 * BaseAddress[24], (HANDLE)MEMORY[0x7FFE0380]);
  if ( MEMORY[0x7FFE038A] )
    RtlpLogHeapExtendEvent((int)BaseAddress, v10, *RegionSize, 16 * BaseAddress[24], (HANDLE)MEMORY[0x7FFE038A]);
  return v10;
}
