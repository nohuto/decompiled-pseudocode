/*
 * XREFs of RtlpFindAndCommitPages @ 0x180034110
 * Callers:
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x180006DF4 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180006F18 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpHeapFindListLookupEntry @ 0x180029F40 (RtlpHeapFindListLookupEntry.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800EEE50 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800EF8B8 (RtlpLogHeapExtendEvent.c)
 */

__int64 *__fastcall RtlpFindAndCommitPages(_QWORD *BaseAddress, PSIZE_T RegionSize)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 *ListLookupEntry; // rax
  __int64 *v7; // rdi
  __int64 *v8; // r15
  unsigned __int8 v9; // al
  __int64 *v10; // rsi
  _QWORD *v11; // rbp
  __int64 (__fastcall *v12)(_QWORD *, PVOID *, PSIZE_T); // r14
  NTSTATUS v13; // eax
  __int64 *v14; // r8
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  ULONG_PTR v26; // rdx
  ULONG_PTR v27; // r8
  __int64 **v28; // r14
  __int64 **v29; // rdi
  _QWORD *v30; // rdx
  __int64 v31; // r13
  int v32; // ecx
  bool v33; // zf
  unsigned __int64 v34; // r13
  __int64 v35; // rdx
  __int64 *v36; // rax
  __int64 *v37; // rcx
  __int64 v38; // rdx
  unsigned __int8 v39; // al
  _QWORD *v40; // r8
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 *v43; // r8
  __int64 *v44; // r9
  unsigned __int64 v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // rdi
  unsigned __int64 v49; // rdx
  ULONG Protect; // eax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
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
  v5 = BaseAddress[40];
  if ( v5 )
  {
    v51 = v3 >> 12;
    if ( v3 >> 12 >= *(unsigned int *)(v5 + 8) )
    {
      while ( 1 )
      {
        v58 = *(_QWORD *)v5;
        if ( !*(_QWORD *)v5 )
          break;
        v5 = *(_QWORD *)v5;
        if ( v51 < *(unsigned int *)(v58 + 8) )
          goto LABEL_66;
      }
      LODWORD(v51) = *(_DWORD *)(v5 + 8) - 1;
    }
LABEL_66:
    ListLookupEntry = RtlpHeapFindListLookupEntry((__int64)BaseAddress, v5, 0, v51, v3);
    goto LABEL_67;
  }
  ListLookupEntry = BaseAddress + 30;
  v7 = (__int64 *)BaseAddress[30];
  if ( BaseAddress + 30 == v7 )
  {
LABEL_67:
    v7 = ListLookupEntry;
    goto LABEL_5;
  }
  while ( v7[5] < v3 )
  {
    v7 = (__int64 *)*v7;
    if ( ListLookupEntry == v7 )
      goto LABEL_67;
  }
LABEL_5:
  v8 = BaseAddress + 30;
  if ( v7 == BaseAddress + 30 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && v7[5] < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v9 = *((_BYTE *)v7 - 2);
  v10 = v7 - 2;
  if ( v9 )
    v11 = (_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v9 << 16) + 0x10000);
  else
    v11 = BaseAddress;
  v12 = (__int64 (__fastcall *)(_QWORD *, PVOID *, PSIZE_T))(RtlpHeapKey ^ BaseAddress[45]);
  BaseAddressa = (PVOID)v7[4];
  if ( v12 )
  {
    v13 = v12(BaseAddress, &BaseAddressa, RegionSize);
  }
  else
  {
    v49 = v7[5];
    if ( v49 - *RegionSize <= 16LL * BaseAddress[22] && v49 < 16 * (unsigned __int64)*((unsigned int *)BaseAddress + 37) )
      *RegionSize = v49;
    *RegionSize = (*RegionSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpGetHeapProtection(BaseAddress);
    v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, RegionSize, 0x1000u, Protect);
    ++*((_DWORD *)BaseAddress + 146);
  }
  if ( v13 < 0 )
  {
    ++*((_DWORD *)BaseAddress + 148);
    return 0LL;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, *RegionSize, 2LL);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *((_DWORD *)v10 + 2) ^= *((_DWORD *)BaseAddress + 34);
    if ( *((_BYTE *)v10 + 11) != (*((_BYTE *)v10 + 8) ^ (unsigned __int8)(*((_BYTE *)v10 + 9) ^ *((_BYTE *)v10 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v7 - 2);
  }
  *((_BYTE *)v10 + 10) = 0;
  v14 = v7 + 2;
  *((_BYTE *)v10 + 15) = 0;
  v15 = v7[2];
  v16 = (__int64 *)v7[3];
  v17 = *(_QWORD *)(v15 + 8);
  v18 = *v16;
  if ( *v16 == v17 && (__int64 *)v18 == v14 )
  {
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v14, v17, v18, 0LL);
  }
  v19 = v7[5];
  if ( v19 )
  {
    v20 = BaseAddress[40];
    if ( v20 )
    {
      v52 = v19 >> 12;
      if ( v19 >> 12 >= *(unsigned int *)(v20 + 8) )
      {
        while ( 1 )
        {
          v53 = *(_QWORD *)v20;
          if ( !*(_QWORD *)v20 )
            break;
          v20 = *(_QWORD *)v20;
          if ( v52 < *(unsigned int *)(v53 + 8) )
            goto LABEL_76;
        }
        LODWORD(v52) = *(_DWORD *)(v20 + 8) - 1;
      }
LABEL_76:
      RtlpHeapRemoveListEntry((__int64)BaseAddress, v20, 0, v7, v52, v7[5]);
    }
    v21 = *v7;
    v22 = (__int64 *)v7[1];
    v23 = *(_QWORD *)(*v7 + 8);
    v24 = *v22;
    if ( *v22 == v23 && (__int64 *)v24 == v7 )
    {
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v7, v23, v24, 0LL);
    }
  }
  --*((_DWORD *)v11 + 21);
  *((_DWORD *)v11 + 20) -= (unsigned __int64)v7[5] >> 12;
  BaseAddress[67] += v7[5];
  ++*((_DWORD *)BaseAddress + 142);
  --*((_DWORD *)BaseAddress + 141);
  v25 = v7[5];
  if ( v25 >= 0xFF000 )
    BaseAddress[68] -= v25;
  v26 = v7[5];
  v27 = *RegionSize;
  if ( v26 > *RegionSize || v26 + v7[4] == v11[9] )
  {
    v28 = (__int64 **)(v27 + v7[4] - 48);
    v29 = v28 - 2;
    v28[5] = (__int64 *)(v26 - v27);
    v28[4] = (__int64 *)(v28 + 6);
    *((_DWORD *)v29 + 2) = 65540;
    *((_BYTE *)v29 + 15) = 3;
    v30 = (_QWORD *)v11[5];
    if ( v30 == v11 )
    {
      LOBYTE(v31) = 0;
    }
    else
    {
      v31 = ((unsigned __int64)((char *)v29 - (char *)v11) >> 16) + 1;
      if ( (unsigned __int64)((char *)v29 - (char *)v11) >> 16 > 0xFC )
        RtlpLogHeapFailure(3, (_DWORD)v30, (_DWORD)v28 - 16, (_DWORD)v11, 0LL, 0LL);
    }
    v32 = RtlpHeapErrorHandlerThreshold;
    *((_BYTE *)v29 + 14) = v31;
    if ( v32 >= 1 )
    {
      v33 = v10 == (__int64 *)v29;
      if ( v10 <= (__int64 *)v29 )
        goto LABEL_31;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
      RtlpHeapHandleError(1LL);
      v32 = RtlpHeapErrorHandlerThreshold;
    }
    v33 = v10 == (__int64 *)v29;
LABEL_31:
    if ( !v33 )
      *((_WORD *)v29 + 6) = *((_WORD *)BaseAddress + 70);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *((_BYTE *)v29 + 11) = *((_BYTE *)v29 + 8) ^ *((_BYTE *)v29 + 9) ^ *((_BYTE *)v29 + 10);
      *((_DWORD *)v29 + 2) ^= *((_DWORD *)BaseAddress + 34);
    }
    v34 = (unsigned __int64)v28[5];
    if ( v34 )
    {
      if ( v32 >= 1 && ((v34 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v34 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
        RtlpHeapHandleError(1LL);
      }
      v35 = BaseAddress[40];
      if ( v35 )
      {
        v54 = v34 >> 12;
        if ( v34 >> 12 >= *(unsigned int *)(v35 + 8) )
        {
          while ( 1 )
          {
            v55 = *(_QWORD *)v35;
            if ( !*(_QWORD *)v35 )
              break;
            v35 = *(_QWORD *)v35;
            if ( v54 < *(unsigned int *)(v55 + 8) )
              goto LABEL_80;
          }
          LODWORD(v54) = *(_DWORD *)(v35 + 8) - 1;
        }
LABEL_80:
        v36 = RtlpHeapFindListLookupEntry((__int64)BaseAddress, v35, 0, v54, v34);
      }
      else
      {
        v36 = (__int64 *)*v8;
        if ( v8 == (__int64 *)*v8 )
        {
LABEL_39:
          v36 = BaseAddress + 30;
        }
        else
        {
          while ( v36[5] < v34 )
          {
            v36 = (__int64 *)*v36;
            if ( v8 == v36 )
              goto LABEL_39;
          }
        }
      }
      v37 = (__int64 *)v36[1];
      if ( (__int64 *)*v37 == v36 )
      {
        *v28 = v36;
        v28[1] = v37;
        *v37 = (__int64)v28;
        v36[1] = (__int64)v28;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v36, 0, *v37, 0LL);
      }
      v38 = BaseAddress[40];
      if ( v38 )
      {
        v56 = (unsigned __int64)v28[5] >> 12;
        if ( v56 >= *(unsigned int *)(v38 + 8) )
        {
          while ( 1 )
          {
            v57 = *(_QWORD *)v38;
            if ( !*(_QWORD *)v38 )
              break;
            v38 = *(_QWORD *)v38;
            if ( v56 < *(unsigned int *)(v57 + 8) )
              goto LABEL_84;
          }
          LODWORD(v56) = *(_DWORD *)(v38 + 8) - 1;
        }
LABEL_84:
        RtlpHeapAddListEntry((__int64)BaseAddress, v38, 0, (__int64)v28, v56, (__int64)v28[5]);
      }
    }
    v39 = *((_BYTE *)v29 + 14);
    if ( v39 )
      v40 = (_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v39 << 16) + 0x10000);
    else
      v40 = BaseAddress;
    v41 = v40[12];
    v42 = v28 + 2;
    v43 = v40 + 12;
    v44 = *(__int64 **)(v41 + 8);
    if ( v44 == v43 )
    {
      *v42 = v41;
      v28[3] = v43;
      *(_QWORD *)(v41 + 8) = v42;
      *v43 = (__int64)v42;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v43, (_DWORD)v44, 0LL, 0LL);
    }
    ++*((_DWORD *)v11 + 21);
    *((_DWORD *)v11 + 20) += (unsigned __int64)v28[5] >> 12;
    BaseAddress[67] -= v28[5];
    if ( ++*((_DWORD *)BaseAddress + 141) > 0xAu
      && !BaseAddress[40]
      && (BaseAddress[14] & 3) == 2
      && (RtlpDisableHeapLookaside & 1) == 0 )
    {
      *((_DWORD *)BaseAddress + 30) |= 0x10000000u;
    }
    v45 = (unsigned __int64)v28[5];
    if ( v45 >= 0xFF000 )
      BaseAddress[68] += v45;
    *RegionSize = ((char *)v29 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_51;
  }
  *RegionSize = v27 + 16LL * *((unsigned __int16 *)v10 + 4);
LABEL_51:
  *((_BYTE *)v10 + 11) = 0;
  v46 = (_QWORD *)v11[5];
  if ( v46 == v11 )
  {
    LOBYTE(v47) = 0;
  }
  else
  {
    v47 = ((unsigned __int64)((char *)v10 - (char *)v11) >> 16) + 1;
    if ( (unsigned __int64)((char *)v10 - (char *)v11) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, (_DWORD)v46, (_DWORD)v10, (_DWORD)v11, 0LL, 0LL);
  }
  *((_BYTE *)v10 + 14) = v47;
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapExtendEvent((int)BaseAddress, (int)v10, *RegionSize, 16 * BaseAddress[24], (HANDLE)MEMORY[0x7FFE0380]);
  if ( MEMORY[0x7FFE038A] )
    RtlpLogHeapExtendEvent((int)BaseAddress, (int)v10, *RegionSize, 16 * BaseAddress[24], (HANDLE)MEMORY[0x7FFE038A]);
  return v10;
}
