/*
 * XREFs of RtlCreateHeap @ 0x18002BA10
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180007560 (RtlDetectHeapLeaks.c)
 *     CsrpConnectToServer @ 0x180075354 (CsrpConnectToServer.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     RtlHeapTrkInitialize @ 0x18008F3D0 (RtlHeapTrkInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DEC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlInitializeCriticalSectionEx @ 0x18002B280 (RtlInitializeCriticalSectionEx.c)
 *     RtlpCreateHeapEncoding @ 0x18002B964 (RtlpCreateHeapEncoding.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002D944 (RtlpMoveHeapBetweenLists.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180041760 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpPopulateListIndex @ 0x18004CB2C (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCBC (RtlpInitializeHeapSegment.c)
 *     RtlDeleteCriticalSection @ 0x1800523A0 (RtlDeleteCriticalSection.c)
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
 *     RtlpHpConvertCreationFlags @ 0x180087384 (RtlpHpConvertCreationFlags.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18008F230 (RtlpGetHeapInterceptorIndex.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x1800F7DA0 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x1800F920C (RtlpLogHeapCreateEvent.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 */

PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  SIZE_T v6; // rdi
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
  char *v22; // rdi
  char *v23; // rdx
  char *v24; // r14
  char *v25; // rdi
  _DWORD *v26; // r11
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _WORD *v32; // rdi
  unsigned int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v39; // r11
  PVOID HeapHandle; // [rsp+40h] [rbp-1A8h] BYREF
  _RTL_CRITICAL_SECTION *v41; // [rsp+48h] [rbp-1A0h]
  ULONG_PTR v42; // [rsp+50h] [rbp-198h] BYREF
  int v43; // [rsp+58h] [rbp-190h]
  ULONG_PTR v44; // [rsp+60h] [rbp-188h] BYREF
  PVOID v45; // [rsp+68h] [rbp-180h] BYREF
  __int64 v46; // [rsp+70h] [rbp-178h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-170h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-168h] BYREF
  SIZE_T v49; // [rsp+88h] [rbp-160h]
  PVOID v50; // [rsp+98h] [rbp-150h]
  PVOID v51; // [rsp+A0h] [rbp-148h]
  PVOID MemoryInformation[3]; // [rsp+A8h] [rbp-140h] BYREF
  ULONG_PTR v53; // [rsp+C0h] [rbp-128h]
  int v54; // [rsp+C8h] [rbp-120h]
  char v55; // [rsp+CCh] [rbp-11Ch]
  char v56[16]; // [rsp+D8h] [rbp-110h] BYREF
  ULONG_PTR v57; // [rsp+E8h] [rbp-100h]
  _OWORD v58[6]; // [rsp+100h] [rbp-E8h] BYREF
  char SystemInformation[40]; // [rsp+160h] [rbp-88h] BYREF
  __int64 v60; // [rsp+188h] [rbp-60h]

  v6 = CommitSize;
  v49 = CommitSize;
  v50 = HeapBase;
  v10 = Lock;
  v41 = (_RTL_CRITICAL_SECTION *)Lock;
  v51 = Lock;
  v11 = Parameters;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v43 = 0;
  HeapHandle = 0LL;
  if ( dword_18014C3F8 && !HeapBase && !Lock )
  {
    v32 = (_WORD *)_guard_dispatch_icall_fptr();
    if ( v32 )
      goto LABEL_87;
    if ( Parameters != (PVOID)-1LL )
      goto LABEL_131;
    v11 = 0LL;
    v6 = v49;
    v10 = v41;
  }
  v13 = Flags & 0xF1FFFFFF;
  if ( (RtlpHpHeapFeatures & 1) != 0 && (v13 & 2) != 0 && !HeapBase )
  {
    if ( !v11 )
      goto LABEL_110;
    if ( v11[1] || v11[2] || v11[6] || (v36 = 1, v11[9]) )
      v36 = 0;
    if ( v36 )
    {
LABEL_110:
      if ( !v10 )
      {
        if ( !ReserveSize )
          ReserveSize = v6;
        if ( v6 > ReserveSize )
          v6 = ReserveSize;
        v34 = RtlpHpConvertCreationFlags(v13, NtGlobalFlag);
        v35 = RtlpHpSegHeapCreate(v34, ReserveSize, v6);
        v32 = (_WORD *)v35;
        if ( !v35 )
          goto LABEL_87;
        RtlpMoveHeapBetweenLists(v35, 0LL, 1LL);
        if ( v32[18] )
          goto LABEL_87;
        RtlpHpSegHeapDestroy(v32);
        goto LABEL_131;
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
  memset(v58, 0, sizeof(v58));
  if ( v11 && *(_DWORD *)v11 == 96 )
  {
    v58[0] = *(_OWORD *)v11;
    v58[1] = *((_OWORD *)v11 + 1);
    v58[2] = *((_OWORD *)v11 + 2);
    v58[3] = *((_OWORD *)v11 + 3);
    v58[4] = *((_OWORD *)v11 + 4);
    v58[5] = *((_OWORD *)v11 + 5);
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
  if ( !*((_QWORD *)&v58[0] + 1) )
    *((_QWORD *)&v58[0] + 1) = v14->HeapSegmentReserve;
  if ( !*(_QWORD *)&v58[1] )
    *(_QWORD *)&v58[1] = v14->HeapSegmentCommit;
  if ( !*((_QWORD *)&v58[1] + 1) )
    *((_QWORD *)&v58[1] + 1) = v14->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v58[2] )
    *(_QWORD *)&v58[2] = v14->HeapDeCommitTotalFreeThreshold;
  v15 = qword_180153040;
  if ( !qword_180153040 )
  {
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
      goto LABEL_131;
    v15 = v60;
    qword_180153040 = v60;
  }
  if ( !*((_QWORD *)&v58[2] + 1) )
    *((_QWORD *)&v58[2] + 1) = v15 - 69632;
  v16 = *(_QWORD *)&v58[3];
  if ( (unsigned __int64)(*(_QWORD *)&v58[3] - 1LL) > 0xFEFFF )
    v16 = 1044480LL;
  *(_QWORD *)&v58[3] = v16;
  if ( v6 )
    v17 = (v6 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v17 = 0x2000LL;
  if ( ReserveSize )
    v18 = (ReserveSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v18 = (v17 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v42 = v18;
  if ( v17 > v18 )
    v17 = v18;
  v44 = v17;
  if ( (v13 & 2) == 0 || HeapBase )
  {
    v49 = 0LL;
  }
  else
  {
    v49 = 4096LL;
    v43 = 2;
    if ( v18 - 4096 < v17 )
    {
      v18 = (v18 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v42 = v18;
    }
  }
  if ( !v17 || !v18 )
    goto LABEL_131;
  LOBYTE(v16) = (v13 & 0x61000000) != 0;
  if ( ((unsigned __int8)v16 & ((v13 & 0x10000000) == 0)) != 0 )
    return (PVOID)RtlDebugCreateHeap(v13, HeapBase);
  v19 = 672;
  v20 = v41;
  if ( (v13 & 1) != 0 )
  {
    if ( v41 )
    {
      v32 = 0LL;
      goto LABEL_88;
    }
    goto LABEL_49;
  }
  if ( !v41 )
  {
    v19 = 712;
LABEL_49:
    v21 = 0LL;
    goto LABEL_50;
  }
  v13 |= 0x80000000;
  v21 = v41;
LABEL_50:
  if ( HeapBase )
  {
    if ( *((_QWORD *)&v58[4] + 1) )
    {
      v16 = *((_QWORD *)&v58[3] + 1);
      if ( !*((_QWORD *)&v58[3] + 1)
        || !*(_QWORD *)&v58[4]
        || *((_QWORD *)&v58[3] + 1) > *(_QWORD *)&v58[4]
        || (v13 & 2) != 0 )
      {
        goto LABEL_151;
      }
      v45 = HeapBase;
      v24 = (char *)HeapBase + *((_QWORD *)&v58[3] + 1);
      v42 = *(_QWORD *)&v58[4];
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
        goto LABEL_151;
      v24 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v54 == 0x10000 )
        goto LABEL_151;
      v23 = (char *)MemoryInformation[0];
      v45 = MemoryInformation[0];
      if ( v54 == 4096 )
      {
        if ( (v13 & 0x40000) != 0 && (v55 & 0x40) == 0 )
          goto LABEL_151;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v56, 0x20uLL, 0LL) < 0 )
          goto LABEL_151;
        v42 = v57;
        v44 = v53;
        v23 = (char *)v45;
        v24 = (char *)v45 + v53;
      }
      else
      {
        v42 = v53;
        v16 = v44;
        if ( v44 > v53 )
          v16 = v53;
        v44 = v16;
        if ( v16 < 0x2000 )
          goto LABEL_151;
      }
    }
    v43 |= 1u;
    v22 = (char *)HeapBase;
    HeapHandle = HeapBase;
    goto LABEL_58;
  }
  BaseAddress = 0LL;
  v46 = 0LL;
  if ( !*((_QWORD *)&v58[4] + 1) )
  {
    v46 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
    RegionSize = v42 + v46;
    if ( v42 + v46 < v42 )
    {
      RegionSize = v42;
      v46 = 0LL;
    }
    if ( ZwAllocateVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           &RegionSize,
           0x2000u,
           (v13 & 0x40000) != 0 ? 64 : 4) < 0 )
      goto LABEL_151;
    v22 = (char *)BaseAddress;
    HeapHandle = BaseAddress;
    v42 = RegionSize;
    if ( v46 )
    {
      RtlpSecMemFreeVirtualMemory(v16, &BaseAddress, (ULONG_PTR *)&v46, 0x8000u);
      v22 = (char *)BaseAddress + v46;
      HeapHandle = (char *)BaseAddress + v46;
      v42 = RegionSize - v46;
    }
    v23 = v22;
    v45 = v22;
    v24 = v22;
LABEL_58:
    if ( v23 == v24 )
    {
      if ( ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &v45,
             0LL,
             &v44,
             0x1000u,
             (v13 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(HeapHandle, v45, v44, 1LL);
      v24 += v44;
      v22 = (char *)HeapHandle;
    }
    v25 = v22 + 672;
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v37 = (unsigned __int64)(v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)HeapHandle + 41) = v37;
      v19 += 2064;
      v25 = (char *)(v37 + 2064);
      v13 |= 0x4000000u;
    }
    *((_WORD *)HeapHandle + 4) = ((v19 + 15) & 0xFFFFFFF0) >> 4;
    *((_BYTE *)HeapHandle + 10) = 1;
    *((_BYTE *)HeapHandle + 15) = 1;
    *((_DWORD *)HeapHandle + 38) = -285217025;
    *((_DWORD *)HeapHandle + 28) = v13 & 0xEFFFFFFF;
    *((_DWORD *)HeapHandle + 36) = 0;
    memset((char *)HeapHandle + 536, 0, 0x78uLL);
    RtlpCreateHeapEncoding((__int64)HeapHandle);
    *((_DWORD *)HeapHandle + 154) = 1;
    v26 = HeapHandle;
    if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
    {
      HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
      *(_DWORD *)(v39 + 144) = HeapInterceptorIndex;
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
      if ( (unsigned __int8)RtlpInitializeHeapSegment(HeapHandle, v43, (__int64)v45, v24, (__int64)v45 + v42 - v49) )
      {
        if ( HeapBase )
          memset(v25, 0, 0x80uLL);
        *((_DWORD *)v25 + 2) = 128;
        *((_QWORD *)v25 + 5) = v25 + 56;
        *((_QWORD *)v25 + 4) = (char *)HeapHandle + 336;
        *((_QWORD *)v25 + 6) = v25 + 72;
        RtlpPopulateListIndex(HeapHandle, v25);
        *((_WORD *)HeapHandle + 104) = 0;
        *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v58[0] + 1);
        *((_QWORD *)HeapHandle + 21) = *(_QWORD *)&v58[1];
        *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v58[1] + 1) >> 4;
        *((_QWORD *)HeapHandle + 23) = *(_QWORD *)&v58[2] >> 4;
        *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v58[2] + 1);
        *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(*(_QWORD *)&v58[3] + 15LL) >> 4;
        *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v58[4] + 1);
        *((_DWORD *)HeapHandle + 164) = 4;
        *((_QWORD *)HeapHandle + 83) = 2088960LL;
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
        v31[47] = 0LL;
        *((_WORD *)HeapHandle + 192) = 0;
        *((_BYTE *)HeapHandle + 386) = 0;
        *((_BYTE *)HeapHandle + 387) = 0;
        *((_QWORD *)HeapHandle + 40) = 0LL;
        if ( (v13 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
        {
LABEL_80:
          RtlpMoveHeapBetweenLists(HeapHandle, 0LL, 1LL);
          if ( *((_WORD *)HeapHandle + 104) )
          {
            LOBYTE(v16) = MEMORY[0x7FFE0380];
            if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v13, v42, v44, MEMORY[0x7FFE0380]);
            if ( MEMORY[0x7FFE038A] )
              RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v13, v42, v44, MEMORY[0x7FFE038A]);
            if ( MEMORY[0x7FFE0388] )
              RtlpHeapLogRangeCreate(HeapHandle, v42, v13);
            *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
            *((_QWORD *)HeapHandle + 46) = 0LL;
            v32 = HeapHandle;
            HeapHandle = 0LL;
            goto LABEL_87;
          }
          goto LABEL_151;
        }
        *((_QWORD *)HeapHandle + 49) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
        v16 = *((_QWORD *)HeapHandle + 49);
        if ( v16 )
        {
          *(_BYTE *)(v16 - 1) = 1;
          *((_WORD *)HeapHandle + 200) = 128;
          goto LABEL_80;
        }
      }
LABEL_151:
      v32 = 0LL;
      v20 = v41;
      goto LABEL_89;
    }
    v21 = (_RTL_CRITICAL_SECTION *)v25;
    if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v25, 0, 0x10000000u) >= 0 )
    {
      v25 += 40;
      goto LABEL_70;
    }
LABEL_131:
    v32 = 0LL;
LABEL_87:
    v20 = v41;
LABEL_88:
    v21 = 0LL;
    goto LABEL_89;
  }
  v32 = 0LL;
LABEL_89:
  if ( v21 && v21 != v20 )
    RtlDeleteCriticalSection(v21);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v42 = 0LL;
      RtlpSecMemFreeVirtualMemory(v16, &HeapHandle, &v42, 0x8000u);
    }
  }
  return v32;
}
