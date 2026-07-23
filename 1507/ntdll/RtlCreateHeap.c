/*
 * XREFs of RtlCreateHeap @ 0x180005330
 * Callers:
 *     CsrpConnectToServer @ 0x1800044D4 (CsrpConnectToServer.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x180044C20 (RtlDetectHeapLeaks.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x1800E0E00 (RtlHeapTrkInitialize.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 *     RtlDebugCreateHeap @ 0x1800EC2EC (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 *     RtlpMoveHeapBetweenLists @ 0x180005FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlpPopulateListIndex @ 0x1800063C8 (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x180007164 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x180007658 (RtlpCreateHeapEncoding.c)
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     RtlpHpConvertCreationFlags @ 0x1800080D8 (RtlpHpConvertCreationFlags.c)
 *     RtlDeleteCriticalSection @ 0x1800081B0 (RtlDeleteCriticalSection.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180035950 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlDebugCreateHeap @ 0x1800EC2EC (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1800EEDA0 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapHandleError @ 0x1800EEE50 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x1800EEE70 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x1800EF7B0 (RtlpLogHeapCreateEvent.c)
 */

PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  SIZE_T v6; // rbx
  PVOID v10; // rcx
  _QWORD *v11; // r14
  unsigned int NtGlobalFlag; // r12d
  ULONG v13; // esi
  struct _PEB *v14; // rcx
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  ULONG_PTR v17; // r9
  SIZE_T v18; // r8
  int v19; // r13d
  _RTL_CRITICAL_SECTION *v20; // rax
  _RTL_CRITICAL_SECTION *v21; // r12
  char *v22; // rbx
  char *v23; // rdx
  char *v24; // r14
  char *v25; // rbx
  _DWORD *v26; // r11
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  PVOID v32; // rbx
  unsigned int v34; // eax
  __int64 v35; // rax
  PRTL_DYNAMIC_HASH_TABLE v36; // rbx
  int v37; // eax
  unsigned __int64 v38; // rbx
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v40; // r11
  PVOID HeapHandle; // [rsp+40h] [rbp-1A8h] BYREF
  _RTL_CRITICAL_SECTION *v42; // [rsp+48h] [rbp-1A0h]
  ULONG_PTR v43; // [rsp+50h] [rbp-198h] BYREF
  int v44; // [rsp+58h] [rbp-190h]
  ULONG_PTR v45; // [rsp+60h] [rbp-188h] BYREF
  PVOID v46; // [rsp+68h] [rbp-180h] BYREF
  __int64 v47; // [rsp+70h] [rbp-178h] BYREF
  SIZE_T v48; // [rsp+78h] [rbp-170h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-168h] BYREF
  PVOID BaseAddress[4]; // [rsp+88h] [rbp-160h] BYREF
  PVOID MemoryInformation[3]; // [rsp+A8h] [rbp-140h] BYREF
  ULONG_PTR v52; // [rsp+C0h] [rbp-128h]
  int v53; // [rsp+C8h] [rbp-120h]
  char v54; // [rsp+CCh] [rbp-11Ch]
  char v55[16]; // [rsp+D8h] [rbp-110h] BYREF
  ULONG_PTR v56; // [rsp+E8h] [rbp-100h]
  _OWORD v57[6]; // [rsp+100h] [rbp-E8h] BYREF
  char SystemInformation[40]; // [rsp+160h] [rbp-88h] BYREF
  __int64 v59; // [rsp+188h] [rbp-60h]

  v6 = CommitSize;
  v48 = CommitSize;
  BaseAddress[3] = HeapBase;
  v10 = Lock;
  v42 = (_RTL_CRITICAL_SECTION *)Lock;
  BaseAddress[1] = Lock;
  v11 = Parameters;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v44 = 0;
  HeapHandle = 0LL;
  if ( dword_180143C88 && !HeapBase && !Lock )
  {
    v36 = qword_180143CB8;
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
      qword_180143CB8,
      0LL);
    v32 = (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, SIZE_T, SIZE_T, _QWORD, PVOID))v36)(
                   Flags,
                   0LL,
                   ReserveSize,
                   v48,
                   0LL,
                   Parameters);
    if ( v32 )
      goto LABEL_86;
    if ( Parameters != (PVOID)-1LL )
      goto LABEL_129;
    v11 = 0LL;
    v6 = v48;
    v10 = v42;
  }
  v13 = Flags & 0xF1FFFFFF;
  if ( (RtlpHpHeapFeatures & 1) != 0 && (v13 & 2) != 0 && !HeapBase )
  {
    if ( !v11 )
      goto LABEL_109;
    if ( v11[1] || v11[2] || v11[6] || (v37 = 1, v11[9]) )
      v37 = 0;
    if ( v37 )
    {
LABEL_109:
      if ( !v10 )
      {
        if ( !ReserveSize )
          ReserveSize = v6;
        if ( v6 > ReserveSize )
          v6 = ReserveSize;
        v34 = RtlpHpConvertCreationFlags(v13, NtGlobalFlag);
        v35 = RtlpHpSegHeapCreate(v34, ReserveSize, v6);
        v32 = (PVOID)v35;
        if ( v35 )
          RtlpMoveHeapBetweenLists(v35, 0LL, 1LL);
        goto LABEL_86;
      }
    }
  }
  if ( (v13 & 0x10000000) == 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( (v13 & 0xFFF80F00) == 0 )
        goto LABEL_7;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
      RtlpHeapHandleError(2LL);
    }
    if ( (v13 & 0xFFF80F00) != 0 )
      v13 &= 0x7F0FFu;
  }
LABEL_7:
  memset(v57, 0, sizeof(v57));
  if ( v11 && *(_DWORD *)v11 == 96 )
  {
    v57[0] = *(_OWORD *)v11;
    v57[1] = *((_OWORD *)v11 + 1);
    v57[2] = *((_OWORD *)v11 + 2);
    v57[3] = *((_OWORD *)v11 + 3);
    v57[4] = *((_OWORD *)v11 + 4);
    v57[5] = *((_OWORD *)v11 + 5);
  }
  if ( (NtGlobalFlag & 0x10) != 0 )
    v13 |= 0x20u;
  if ( (NtGlobalFlag & 0x20) != 0 )
    v13 |= 0x40u;
  if ( (NtGlobalFlag & 0x200000) != 0 )
    v13 |= 0x80u;
  if ( (NtGlobalFlag & 0x40) != 0 )
    v13 |= 0x40000000u;
  if ( (NtGlobalFlag & 0x80) != 0 )
    v13 |= 0x20000000u;
  if ( (NtGlobalFlag & 0x1000) != 0 )
    v13 |= 0x8000000u;
  v14 = NtCurrentPeb();
  if ( !*((_QWORD *)&v57[0] + 1) )
    *((_QWORD *)&v57[0] + 1) = v14->HeapSegmentReserve;
  if ( !*(_QWORD *)&v57[1] )
    *(_QWORD *)&v57[1] = v14->HeapSegmentCommit;
  if ( !*((_QWORD *)&v57[1] + 1) )
    *((_QWORD *)&v57[1] + 1) = v14->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v57[2] )
    *(_QWORD *)&v57[2] = v14->HeapDeCommitTotalFreeThreshold;
  v15 = qword_180146EE0;
  if ( !qword_180146EE0 )
  {
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v15 = v59;
      qword_180146EE0 = v59;
      goto LABEL_29;
    }
LABEL_129:
    v32 = 0LL;
LABEL_86:
    v20 = v42;
LABEL_87:
    v21 = 0LL;
    goto LABEL_88;
  }
LABEL_29:
  if ( !*((_QWORD *)&v57[2] + 1) )
    *((_QWORD *)&v57[2] + 1) = v15 - 69632;
  v16 = *(_QWORD *)&v57[3];
  if ( (unsigned __int64)(*(_QWORD *)&v57[3] - 1LL) > 0xFEFFF )
    v16 = 1044480LL;
  *(_QWORD *)&v57[3] = v16;
  if ( v6 )
    v17 = (v6 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v17 = 0x2000LL;
  if ( ReserveSize )
    v18 = (ReserveSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v18 = (v17 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v43 = v18;
  if ( v17 > v18 )
    v17 = v18;
  v45 = v17;
  if ( (v13 & 2) == 0 || HeapBase )
  {
    v48 = 0LL;
  }
  else
  {
    v48 = 4096LL;
    v44 = 2;
    if ( v18 - 4096 < v17 )
    {
      v18 = (v18 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v43 = v18;
    }
  }
  if ( !v17 || !v18 )
    goto LABEL_129;
  LOBYTE(v16) = (v13 & 0x61000000) != 0;
  if ( ((unsigned __int8)v16 & ((v13 & 0x10000000) == 0)) != 0 )
    return (PVOID)RtlDebugCreateHeap(v13, HeapBase);
  v19 = 664;
  v20 = v42;
  if ( (v13 & 1) != 0 )
  {
    if ( v42 )
    {
      v32 = 0LL;
      goto LABEL_87;
    }
    goto LABEL_49;
  }
  if ( !v42 )
  {
    v19 = 704;
LABEL_49:
    v21 = 0LL;
    goto LABEL_50;
  }
  v13 |= 0x80000000;
  v21 = v42;
LABEL_50:
  if ( HeapBase )
  {
    if ( *((_QWORD *)&v57[4] + 1) )
    {
      v16 = *((_QWORD *)&v57[3] + 1);
      if ( !*((_QWORD *)&v57[3] + 1)
        || !*(_QWORD *)&v57[4]
        || *((_QWORD *)&v57[3] + 1) > *(_QWORD *)&v57[4]
        || (v13 & 2) != 0 )
      {
        goto LABEL_149;
      }
      v46 = HeapBase;
      v24 = (char *)HeapBase + *((_QWORD *)&v57[3] + 1);
      v43 = *(_QWORD *)&v57[4];
      memset(HeapBase, 0, 0x1000uLL);
      v23 = (char *)HeapBase;
    }
    else
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             HeapBase,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0 )
        goto LABEL_149;
      v24 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v53 == 0x10000 )
        goto LABEL_149;
      v23 = (char *)MemoryInformation[0];
      v46 = MemoryInformation[0];
      if ( v53 == 4096 )
      {
        if ( (v13 & 0x40000) != 0 && (v54 & 0x40) == 0 )
          goto LABEL_149;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v55, 0x20uLL, 0LL) < 0 )
          goto LABEL_149;
        v43 = v56;
        v45 = v52;
        v23 = (char *)v46;
        v24 = (char *)v46 + v52;
      }
      else
      {
        v43 = v52;
        v16 = v45;
        if ( v45 > v52 )
          v16 = v52;
        v45 = v16;
        if ( v16 < 0x2000 )
          goto LABEL_149;
      }
    }
    v44 |= 1u;
    v22 = (char *)HeapBase;
    HeapHandle = HeapBase;
LABEL_58:
    if ( v23 != v24 )
    {
LABEL_62:
      v25 = v22 + 664;
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        v38 = (unsigned __int64)(v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        *((_QWORD *)HeapHandle + 41) = v38;
        v19 += 2064;
        v25 = (char *)(v38 + 2064);
        v13 |= 0x4000000u;
      }
      *((_WORD *)HeapHandle + 4) = ((v19 + 15) & 0xFFFFFFF0) >> 4;
      *((_BYTE *)HeapHandle + 10) = 1;
      *((_BYTE *)HeapHandle + 15) = 1;
      *((_DWORD *)HeapHandle + 38) = -285217025;
      *((_DWORD *)HeapHandle + 28) = v13 & 0xEFFFFFFF;
      *((_DWORD *)HeapHandle + 36) = 0;
      memset((char *)HeapHandle + 528, 0, 0x78uLL);
      RtlpCreateHeapEncoding(HeapHandle);
      *((_DWORD *)HeapHandle + 152) = 1;
      v26 = HeapHandle;
      if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
      {
        HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
        *(_DWORD *)(v40 + 144) = HeapInterceptorIndex;
        *((_DWORD *)HeapHandle + 28) &= ~0x40u;
        v26 = HeapHandle;
      }
      v26[29] = v13 & 0x6001007D;
      *((_WORD *)HeapHandle + 105) = (_WORD)v25 - (_WORD)HeapHandle;
      *((_QWORD *)HeapHandle + 27) = 0LL;
      v27 = (char *)HeapHandle + 336;
      *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
      *v27 = v27;
      v28 = (char *)HeapHandle + 272;
      *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
      *v28 = v28;
      v29 = (char *)HeapHandle + 288;
      *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
      *v29 = v29;
      v30 = (char *)HeapHandle + 240;
      *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
      *v30 = v30;
      if ( v21 || (v13 & 1) != 0 )
      {
LABEL_70:
        *((_QWORD *)HeapHandle + 44) = v21;
        *((_DWORD *)HeapHandle + 30) |= 0x80000000;
        if ( (unsigned __int8)RtlpInitializeHeapSegment(HeapHandle, v44, (__int64)v46, v24, (__int64)v46 + v43 - v48) )
        {
          if ( HeapBase )
            memset(v25, 0, 0x80uLL);
          *((_DWORD *)v25 + 2) = 128;
          *((_QWORD *)v25 + 5) = v25 + 56;
          *((_QWORD *)v25 + 4) = (char *)HeapHandle + 336;
          *((_QWORD *)v25 + 6) = v25 + 72;
          RtlpPopulateListIndex(HeapHandle, v25);
          *((_WORD *)HeapHandle + 104) = 0;
          *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v57[0] + 1);
          *((_QWORD *)HeapHandle + 21) = *(_QWORD *)&v57[1];
          *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v57[1] + 1) >> 4;
          *((_QWORD *)HeapHandle + 23) = *(_QWORD *)&v57[2] >> 4;
          *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v57[2] + 1);
          *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(*(_QWORD *)&v57[3] + 15LL) >> 4;
          *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v57[4] + 1);
          *((_DWORD *)HeapHandle + 162) = 4;
          *((_QWORD *)HeapHandle + 82) = 2088960LL;
          if ( (RtlpDisableHeapLookaside & 1) != 0 )
            *((_DWORD *)HeapHandle + 30) = 1;
          *((_QWORD *)HeapHandle + 32) = 31LL;
          *((_QWORD *)HeapHandle + 33) = -16LL;
          v31 = HeapHandle;
          if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
          {
            *((_QWORD *)HeapHandle + 32) += 16LL;
            v31 = HeapHandle;
          }
          v31[46] = 0LL;
          *((_WORD *)HeapHandle + 188) = 0;
          *((_BYTE *)HeapHandle + 378) = 0;
          *((_BYTE *)HeapHandle + 379) = 0;
          *((_QWORD *)HeapHandle + 40) = 0LL;
          if ( (v13 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
            goto LABEL_80;
          *((_QWORD *)HeapHandle + 48) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
          v16 = *((_QWORD *)HeapHandle + 48);
          if ( v16 )
          {
            *(_BYTE *)(v16 - 1) = 1;
            *((_WORD *)HeapHandle + 196) = 128;
LABEL_80:
            RtlpMoveHeapBetweenLists(HeapHandle, 0LL, 1LL);
            LOBYTE(v16) = MEMORY[0x7FFE0380];
            if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v13, v43, v45, MEMORY[0x7FFE0380]);
            if ( MEMORY[0x7FFE038A] )
              RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v13, v43, v45, MEMORY[0x7FFE038A]);
            if ( MEMORY[0x7FFE0388] )
              RtlpHeapLogRangeCreate(HeapHandle, v43, v13);
            *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
            v32 = HeapHandle;
            HeapHandle = 0LL;
            goto LABEL_86;
          }
        }
        goto LABEL_149;
      }
      v21 = (_RTL_CRITICAL_SECTION *)v25;
      if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v25, 0, 0x10000000u) >= 0 )
      {
        v25 += 40;
        goto LABEL_70;
      }
      goto LABEL_129;
    }
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v46, 0LL, &v45, 0x1000u, (v13 & 0x40000) != 0 ? 64 : 4) >= 0 )
    {
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(HeapHandle, v46, v45, 1LL);
      v24 += v45;
      v22 = (char *)HeapHandle;
      goto LABEL_62;
    }
LABEL_149:
    v32 = 0LL;
    v20 = v42;
    goto LABEL_88;
  }
  BaseAddress[0] = 0LL;
  v47 = 0LL;
  if ( !*((_QWORD *)&v57[4] + 1) )
  {
    v47 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
    RegionSize = v43 + v47;
    if ( v43 + v47 < v43 )
    {
      RegionSize = v43;
      v47 = 0LL;
    }
    if ( ZwAllocateVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           0LL,
           &RegionSize,
           0x2000u,
           (v13 & 0x40000) != 0 ? 64 : 4) < 0 )
      goto LABEL_149;
    v22 = (char *)BaseAddress[0];
    HeapHandle = BaseAddress[0];
    v43 = RegionSize;
    if ( v47 )
    {
      RtlpSecMemFreeVirtualMemory(v16, BaseAddress, &v47, 0x8000LL);
      v22 = (char *)BaseAddress[0] + v47;
      HeapHandle = (char *)BaseAddress[0] + v47;
      v43 = RegionSize - v47;
    }
    v23 = v22;
    v46 = v22;
    v24 = v22;
    goto LABEL_58;
  }
  v32 = 0LL;
LABEL_88:
  if ( v21 && v21 != v20 )
    RtlDeleteCriticalSection(v21);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v43 = 0LL;
      RtlpSecMemFreeVirtualMemory(v16, &HeapHandle, &v43, 0x8000LL);
    }
  }
  return v32;
}
