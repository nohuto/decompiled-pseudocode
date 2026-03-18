/*
 * XREFs of MiInPageSingleKernelStack @ 0x1400DE01C
 * Callers:
 *     KeSwapProcessOrStack @ 0x140164CD4 (KeSwapProcessOrStack.c)
 * Callees:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400DE69C (MiReleaseWsSwapReservationPfn.c)
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MiLogKernelStackEvent @ 0x1402239E4 (MiLogKernelStackEvent.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiInPageSingleKernelStack(ULONG_PTR BugCheckParameter3, _QWORD *a2)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rsi
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // r13
  ULONG_PTR v10; // rsi
  unsigned __int16 v11; // r14
  _QWORD *v12; // rcx
  __int64 DemandZeroPte; // rax
  __int64 v14; // rdx
  _KPROCESS *Process; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // rdx
  ULONG_PTR v25; // r10
  signed __int64 v26; // r15
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v41; // r14d
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  _QWORD *v45; // rdi
  __int64 result; // rax
  unsigned int v47; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+40h] [rbp-C0h]
  signed __int64 v50; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-A0h]
  _QWORD *v53; // [rsp+68h] [rbp-98h]
  unsigned __int64 v54; // [rsp+70h] [rbp-90h]
  ULONG_PTR v55; // [rsp+78h] [rbp-88h]
  __int16 v56; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 *v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  char v61; // [rsp+A8h] [rbp-58h]
  signed __int64 v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-18h] BYREF

  v2 = BugCheckParameter3;
  v3 = a2[1];
  v4 = *a2 - 4096LL;
  v5 = 0;
  v6 = KiProcessorBlock[*(unsigned int *)(BugCheckParameter3 + 588)];
  v7 = 0LL;
  v53 = a2;
  v47 = 0;
  v8 = *(_QWORD *)(v6 + 1600);
  v9 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = v9;
  v11 = *(_WORD *)(v8 + 146);
  v12 = (_QWORD *)((((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (unsigned __int64)(v12 + 0x12090482600LL) <= 0x7F8 )
    MiReadPteShadow(v12, *v12);
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( v14 != DemandZeroPte )
  {
    if ( (v14 & 0x800) == 0 )
      v5 = 1;
    v47 = v5;
  }
  MiMakeDemandZeroPte(24LL);
  v18 = MiMakeDemandZeroPte(31LL);
  v19 = v9;
  if ( v9 > v10 )
    goto LABEL_27;
  v20 = &v63;
  do
  {
    v21 = *(_QWORD *)v19;
    if ( v19 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v21)
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      Process = *(_KPROCESS **)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( Process )
      {
        v22 = *((_QWORD *)&Process->Header.Lock + ((v19 >> 3) & 0x1FF));
        if ( (v22 & 0x20) != 0 )
          v21 |= 0x20uLL;
        if ( (v22 & 0x42) != 0 )
          v21 |= 0x42uLL;
      }
    }
    if ( v21 != v16 && v21 != v17 && v21 != v18 && (v21 & 0x800) == 0 )
    {
      *v20 = 4096LL;
      ++v7;
      *(v20 - 1) = (__int64)(v19 << 25) >> 16;
      v20 += 2;
      if ( v7 == 18 )
        break;
    }
    v19 += 8LL;
  }
  while ( v19 <= v10 );
  v5 = v47;
  v23 = 1LL;
  if ( v7 > 1 )
  {
    MiPrefetchVirtualMemory(v7, &v62, 1LL, 45LL);
    v2 = BugCheckParameter3;
LABEL_27:
    v23 = 1LL;
    goto LABEL_28;
  }
  v2 = BugCheckParameter3;
LABEL_28:
  v24 = 0LL;
  v49 = 0LL;
  v63 = 4096LL;
  v25 = ((unsigned __int64)v11 << 57) | 2;
  v26 = (__int64)(v10 << 25) >> 16;
  v50 = v26;
  v55 = v25;
  if ( v10 >= v9 )
  {
    do
    {
      v27 = *(_QWORD *)v10;
      v54 = v10 + 0x90482413000LL;
      if ( v10 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v27)
        && ((unsigned __int8)v27 & (unsigned __int8)v23) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            LOWORD(v27) = v27 | 0x20;
          if ( (v29 & 0x42) != 0 )
            LOWORD(v27) = v27 | 0x42;
        }
      }
      if ( (v27 & 0x3E0) != 0x3E0 )
        KeBugCheckEx(0x1Au, 0x3451uLL, v10, v2, 0LL);
      v59 = 0LL;
      v60 = 0LL;
      v57 = &v62;
      v30 = *(unsigned int *)(v2 + 588);
      v62 = v26;
      v56 = 4;
      v58 = v23;
      v61 = v23 + *(_BYTE *)(*(_QWORD *)(KiProcessorBlock[v30] + 1600) + 146LL);
      MmAccessFault(v25, v26, 0, (ULONG_PTR)&v56 + 1);
      v23 = 1LL;
      if ( (*(_BYTE *)v10 & 1) != 0 )
      {
        v32 = v54;
        while ( 1 )
        {
          v33 = *(_QWORD *)v10;
          if ( v32 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v31)
            && ((unsigned __int8)v33 & (unsigned __int8)v23) != 0
            && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v34 = *(_QWORD *)&Process[2].ProcessLock;
            if ( v34 )
            {
              v35 = *(_QWORD *)(v34 + 8 * ((v10 >> 3) & 0x1FF));
              if ( (v35 & 0x20) != 0 )
                v33 |= 0x20uLL;
              if ( (v35 & 0x42) != 0 )
                v33 |= 0x42uLL;
            }
          }
          v51 = v33;
          v36 = v33;
          if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v33)
            && ((unsigned __int8)v33 & (unsigned __int8)v23) != 0
            && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v37 = *(_QWORD *)&Process[2].ProcessLock;
            if ( v37 )
            {
              v38 = *(_QWORD *)(v37 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
              if ( (v38 & 0x20) != 0 )
                v36 |= 0x20uLL;
              if ( (v38 & 0x42) != 0 )
                v36 |= 0x42uLL;
            }
          }
          v39 = 48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v41 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
          {
            do
            {
              v41 += v23;
              if ( (v41 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v41);
                v23 = 1LL;
              }
              Process = (_KPROCESS *)0x8000000000000000LL;
            }
            while ( *(__int64 *)(v39 + 24) < 0 );
          }
          v31 = *(_QWORD *)v10;
          if ( v32 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v31)
            && ((unsigned __int8)v31 & (unsigned __int8)v23) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v42 = *(_QWORD *)&Process[2].ProcessLock;
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 8 * ((v10 >> 3) & 0x1FF));
              if ( (v43 & 0x20) != 0 )
                v31 |= 0x20uLL;
              if ( (v43 & 0x42) != 0 )
                v31 |= 0x42uLL;
            }
          }
          if ( v33 == v31 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
        }
        v2 = BugCheckParameter3;
        *(_QWORD *)v39 = v23 | BugCheckParameter3;
        *(_QWORD *)(v39 + 40) = *(_QWORD *)(v39 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
        *(_BYTE *)(v39 + 35) = *(_BYTE *)(v39 + 35) & 0xF8 | 5;
        v44 = MiReleaseWsSwapReservationPfn(v39);
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        Process = (_KPROCESS *)CurrentIrql;
        __writecr8(CurrentIrql);
        if ( v44 )
          MiReleasePageFileInfo((struct _KEVENT *)MiSystemPartition, v44, 0);
        v23 = 1LL;
        v9 = v52;
        v26 = v50 - 4096;
        v10 -= 8LL;
        v50 -= 4096LL;
        v24 = ++v49;
      }
      else
      {
        v24 = v49;
      }
      v25 = v55;
    }
    while ( v10 >= v9 );
    v5 = v47;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    MiLogKernelStackEvent(v26 + 4096, v24, 1LL);
    LODWORD(v23) = 1;
  }
  v45 = v53;
  result = v53[2];
  if ( *(_QWORD *)(result - 8) != v2 )
  {
    MmFlushAllFilesystemPages((unsigned int)v23);
    KeBugCheckEx(0x77u, v5, *(_QWORD *)(v45[2] - 8LL), 0LL, v45[2]);
  }
  return result;
}
