/*
 * XREFs of RtlCreateHeap @ 0x1405093C8
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     RtlpPopulateListIndex @ 0x140124E1C (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x140124F28 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x1401250E8 (RtlpCreateHeapEncoding.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x140150920 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401509E0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x140150A80 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1401F94B4 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x1401F95C4 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHeapHandleError @ 0x1401FF50C (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x1401FF538 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x1401FFAEC (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x1401FFC30 (RtlpLogHeapCreateEvent.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  ULONG v8; // edi
  struct _ERESOURCE *v9; // r12
  SIZE_T SegmentReserve; // rcx
  SIZE_T SegmentCommit; // rcx
  SIZE_T DeCommitFreeBlockThreshold; // rcx
  SIZE_T DeCommitTotalFreeThreshold; // rcx
  __int64 v14; // rax
  SIZE_T VirtualMemoryThreshold; // rcx
  SIZE_T v16; // rdx
  ULONG_PTR v17; // rcx
  struct _ERESOURCE *v18; // rax
  PRTL_HEAP_COMMIT_ROUTINE CommitRoutine; // r13
  char *v20; // r14
  char *v21; // r8
  char *v22; // rdx
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r8
  _DWORD *v31; // rcx
  PVOID v32; // rdi
  ULONG_PTR v34; // rcx
  unsigned __int64 v35; // rsi
  PVOID v36; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ERESOURCE *v37; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR InitialReserve; // [rsp+50h] [rbp-1A8h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-1A0h]
  int v40; // [rsp+5Ch] [rbp-19Ch]
  ULONG_PTR v41; // [rsp+60h] [rbp-198h] BYREF
  PVOID v42; // [rsp+68h] [rbp-190h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-188h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-180h] BYREF
  ULONG_PTR v45; // [rsp+80h] [rbp-178h] BYREF
  __int64 v46; // [rsp+88h] [rbp-170h]
  SIZE_T MaximumAllocationSize; // [rsp+90h] [rbp-168h]
  SIZE_T v48; // [rsp+98h] [rbp-160h]
  SIZE_T v49; // [rsp+A0h] [rbp-158h]
  SIZE_T v50; // [rsp+A8h] [rbp-150h]
  SIZE_T v51; // [rsp+B0h] [rbp-148h]
  SIZE_T v52; // [rsp+B8h] [rbp-140h]
  struct _RTL_HEAP_PARAMETERS v53; // [rsp+C0h] [rbp-138h] BYREF
  PVOID MemoryInformation[3]; // [rsp+120h] [rbp-D8h] BYREF
  ULONG_PTR v55; // [rsp+138h] [rbp-C0h]
  int v56; // [rsp+140h] [rbp-B8h]
  char v57; // [rsp+144h] [rbp-B4h]
  char v58[16]; // [rsp+150h] [rbp-A8h] BYREF
  ULONG_PTR v59; // [rsp+160h] [rbp-98h]
  char SystemInformation[40]; // [rsp+170h] [rbp-88h] BYREF
  __int64 v61; // [rsp+198h] [rbp-60h]

  BaseAddress = (PVOID)ReserveSize;
  v8 = Flags;
  v46 = (__int64)HeapBase;
  v37 = (struct _ERESOURCE *)Lock;
  RegionSize = (ULONG_PTR)Lock;
  v40 = 0;
  v36 = 0LL;
  v9 = 0LL;
  if ( (Flags & 0x10000000) == 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( (Flags & 0xFFF80F00) != 0 )
      {
        DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
        RtlpHeapHandleError();
      }
    }
    else if ( (Flags & 0xFFF80F00) != 0 )
    {
      v8 = Flags & 0x7F0FF;
    }
  }
  memset(&v53, 0, sizeof(v53));
  if ( Parameters && Parameters->Length == 96 )
    v53 = *Parameters;
  if ( (NtGlobalFlag & 0x10) != 0 )
    v8 |= 0x20u;
  if ( (NtGlobalFlag & 0x20) != 0 )
    v8 |= 0x40u;
  if ( (NtGlobalFlag & 0x200000) != 0 )
    v8 |= 0x80u;
  SegmentReserve = v53.SegmentReserve;
  if ( !v53.SegmentReserve )
    SegmentReserve = qword_140381138;
  v52 = SegmentReserve;
  SegmentCommit = v53.SegmentCommit;
  if ( !v53.SegmentCommit )
    SegmentCommit = qword_140381130;
  v50 = SegmentCommit;
  DeCommitFreeBlockThreshold = v53.DeCommitFreeBlockThreshold;
  if ( !v53.DeCommitFreeBlockThreshold )
    DeCommitFreeBlockThreshold = qword_140381120;
  v51 = DeCommitFreeBlockThreshold;
  DeCommitTotalFreeThreshold = v53.DeCommitTotalFreeThreshold;
  if ( !v53.DeCommitTotalFreeThreshold )
    DeCommitTotalFreeThreshold = qword_140381128;
  v48 = DeCommitTotalFreeThreshold;
  v14 = qword_1403066F0;
  if ( !qword_1403066F0 )
  {
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
      goto LABEL_64;
    v14 = v61;
    qword_1403066F0 = v61;
  }
  MaximumAllocationSize = v53.MaximumAllocationSize;
  if ( !v53.MaximumAllocationSize )
    MaximumAllocationSize = v14 - 69632;
  VirtualMemoryThreshold = v53.VirtualMemoryThreshold;
  if ( v53.VirtualMemoryThreshold - 1 > 0xFEFFF )
    VirtualMemoryThreshold = 1044480LL;
  v49 = VirtualMemoryThreshold;
  if ( CommitSize )
    v16 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v16 = 0x2000LL;
  if ( BaseAddress )
    v17 = ((unsigned __int64)BaseAddress + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v17 = (v16 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  InitialReserve = v17;
  if ( v16 > v17 )
    v16 = v17;
  v41 = v16;
  if ( (v8 & 2) == 0 || HeapBase )
  {
    v46 = 0LL;
  }
  else
  {
    v46 = 4096LL;
    v40 = 2;
    if ( v17 - 4096 < v16 )
    {
      v17 = (v17 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      InitialReserve = v17;
    }
  }
  if ( !v16 || !v17 )
    goto LABEL_64;
  v39 = 664;
  v18 = v37;
  if ( (v8 & 1) != 0 )
  {
    if ( v37 )
    {
LABEL_65:
      v32 = 0LL;
      goto LABEL_59;
    }
  }
  else if ( v37 )
  {
    v8 |= 0x80000000;
    v9 = v37;
  }
  else
  {
    v39 = 768;
  }
  CommitRoutine = v53.CommitRoutine;
  if ( HeapBase )
  {
    if ( v53.CommitRoutine )
    {
      if ( !v53.InitialCommit || !v53.InitialReserve || v53.InitialCommit > v53.InitialReserve || (v8 & 2) != 0 )
        goto LABEL_64;
      v42 = HeapBase;
      v20 = (char *)HeapBase + v53.InitialCommit;
      InitialReserve = v53.InitialReserve;
      memset(HeapBase, 0, 0x1000uLL);
      v21 = (char *)HeapBase;
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
        goto LABEL_64;
      v20 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v56 == 0x10000 )
        goto LABEL_64;
      v21 = (char *)MemoryInformation[0];
      v42 = MemoryInformation[0];
      if ( v56 == 4096 )
      {
        if ( (v8 & 0x40000) != 0 && (v57 & 0x40) == 0 )
          goto LABEL_64;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v58, 0x20uLL, 0LL) < 0 )
          goto LABEL_64;
        InitialReserve = v59;
        v41 = v55;
        v21 = (char *)v42;
        v20 = (char *)v42 + v55;
      }
      else
      {
        InitialReserve = v55;
        v34 = v41;
        if ( v41 > v55 )
          v34 = v55;
        v41 = v34;
        if ( v34 < 0x2000 )
          goto LABEL_64;
      }
    }
    v40 |= 1u;
    v22 = (char *)HeapBase;
    v36 = HeapBase;
  }
  else
  {
    BaseAddress = 0LL;
    v45 = 0LL;
    if ( v53.CommitRoutine )
      goto LABEL_65;
    v45 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
    RegionSize = InitialReserve + v45;
    if ( InitialReserve + v45 < InitialReserve )
    {
      RegionSize = InitialReserve;
      v45 = 0LL;
    }
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
      goto LABEL_64;
    v22 = (char *)BaseAddress;
    v36 = BaseAddress;
    InitialReserve = RegionSize;
    if ( v45 )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v45, 0x8000u);
      v22 = (char *)BaseAddress + v45;
      v36 = (char *)BaseAddress + v45;
      InitialReserve = RegionSize - v45;
    }
    v21 = v22;
    v42 = v22;
    v20 = v22;
  }
  if ( v21 == v20 )
  {
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, 0LL, &v41, 0x1000u, 4u) < 0 )
      goto LABEL_64;
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapCommit((__int64)v36, (__int64)v42, v41, 1u);
    v20 += v41;
    v22 = (char *)v36;
  }
  v23 = (__int64)(v22 + 664);
  v24 = v39;
  if ( (NtGlobalFlag & 0x800) != 0 )
  {
    v35 = (unsigned __int64)(v22 + 671) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)v22 + 41) = v35;
    v24 += 2064;
    v23 = v35 + 2064;
    v8 |= 0x4000000u;
    v22 = (char *)v36;
  }
  v39 = (v24 + 15) & 0xFFFFFFF0;
  *((_WORD *)v22 + 4) = v39 >> 4;
  *((_BYTE *)v36 + 10) = 1;
  *((_BYTE *)v36 + 15) = 1;
  *((_DWORD *)v36 + 38) = -285217025;
  *((_DWORD *)v36 + 28) = v8 & 0xEFFFFFFF;
  *((_DWORD *)v36 + 36) = 0;
  memset((char *)v36 + 528, 0, 0x78uLL);
  RtlpCreateHeapEncoding((__int64)v36);
  *((_DWORD *)v36 + 29) = v8 & 0x6001007D;
  *((_WORD *)v36 + 105) = v23 - (_WORD)v36;
  *((_QWORD *)v36 + 27) = 0LL;
  v26 = (char *)v36 + 336;
  *((_QWORD *)v36 + 43) = (char *)v36 + 336;
  *v26 = v26;
  v27 = (char *)v36 + 272;
  *((_QWORD *)v36 + 35) = (char *)v36 + 272;
  *v27 = v27;
  v28 = (char *)v36 + 288;
  *((_QWORD *)v36 + 37) = (char *)v36 + 288;
  *v28 = v28;
  v29 = (char *)v36 + 240;
  *((_QWORD *)v36 + 31) = (char *)v36 + 240;
  *v29 = v29;
  if ( !v9 && (v8 & 1) == 0 )
  {
    v9 = (struct _ERESOURCE *)v23;
    if ( ExInitializeResourceLite((PERESOURCE)v23) < 0 )
    {
      v9 = 0LL;
      goto LABEL_64;
    }
    v23 += 104LL;
  }
  *((_QWORD *)v36 + 44) = v9;
  *((_DWORD *)v36 + 30) |= 0x80000000;
  if ( !RtlpInitializeHeapSegment(
          (unsigned __int64)v36,
          (__int64)v36,
          v39 + 1104,
          v25,
          v40,
          (__int64)v42,
          v20,
          (ULONG_PTR)v42 + InitialReserve - v46) )
  {
LABEL_64:
    v18 = v37;
    goto LABEL_65;
  }
  if ( HeapBase )
    memset((void *)v23, 0, 0x80uLL);
  *(_DWORD *)(v23 + 8) = 128;
  *(_QWORD *)(v23 + 40) = v23 + 56;
  *(_QWORD *)(v23 + 32) = (char *)v36 + 336;
  *(_QWORD *)(v23 + 48) = v23 + 72;
  RtlpPopulateListIndex((__int64)v36, v23, v30);
  *((_WORD *)v36 + 104) = 0;
  *((_QWORD *)v36 + 20) = v52;
  *((_QWORD *)v36 + 21) = v50;
  *((_QWORD *)v36 + 22) = v51 >> 4;
  *((_QWORD *)v36 + 23) = v48 >> 4;
  *((_QWORD *)v36 + 25) = MaximumAllocationSize;
  *((_DWORD *)v36 + 37) = (v49 + 15) >> 4;
  *((_QWORD *)v36 + 45) = RtlpHeapKey ^ (unsigned __int64)CommitRoutine;
  *((_DWORD *)v36 + 162) = 4;
  *((_QWORD *)v36 + 82) = 2088960LL;
  *((_QWORD *)v36 + 32) = 31LL;
  *((_QWORD *)v36 + 33) = -16LL;
  v31 = v36;
  if ( (*((_DWORD *)v36 + 28) & 0x20) != 0 )
  {
    *((_QWORD *)v36 + 32) += 16LL;
    v31 = v36;
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
  {
    RtlpLogHeapCreateEvent((__int64)v31, v8, InitialReserve, v41);
    v31 = v36;
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
    {
      RtlpHeapLogRangeCreate((__int64)v36, InitialReserve, v8);
      v31 = v36;
    }
  }
  v31[30] &= ~0x80000000;
  v32 = v36;
  v36 = 0LL;
  v9 = 0LL;
  v18 = v37;
LABEL_59:
  if ( v9 && v9 != v18 )
    ExDeleteResourceLite(v9);
  if ( v36 && !HeapBase )
  {
    InitialReserve = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v36, &InitialReserve, 0x8000u);
  }
  return v32;
}
