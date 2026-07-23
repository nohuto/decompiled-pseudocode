/*
 * XREFs of CcMapAndCopyInToCache @ 0x1400B2720
 * Callers:
 *     CcCopyWriteEx @ 0x140108EF0 (CcCopyWriteEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     CcCanIWriteStream @ 0x1400E4930 (CcCanIWriteStream.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     PoGetFrequencyBucket @ 0x140170614 (PoGetFrequencyBucket.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1401DCF08 (CcCopyReadExceptionFilter.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        LARGE_INTEGER *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        LARGE_INTEGER *a7,
        unsigned __int8 a8,
        struct _KTHREAD *a9)
{
  __int64 v10; // r11
  int v11; // edx
  bool v12; // r10
  int v13; // r12d
  _SLIST_ENTRY *v14; // rdi
  char v15; // bl
  struct _KTHREAD *v16; // r8
  int v17; // edx
  KIRQL v18; // al
  __int64 result; // rax
  unsigned int v20; // ecx
  volatile signed __int64 **v21; // rbx
  __int64 v22; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v24; // rax
  volatile signed __int64 **v25; // rbx
  __int64 v26; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  volatile signed __int32 *v29; // rbx
  unsigned int v30; // r14d
  LARGE_INTEGER v31; // rbx
  __int64 v32; // rdi
  __int64 VirtualAddress; // rax
  unsigned int v34; // r15d
  unsigned int v35; // esi
  ULONG_PTR v36; // r13
  unsigned int v37; // r15d
  int v38; // eax
  NTSTATUS v39; // eax
  NTSTATUS v40; // edi
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v42; // ecx
  int v43; // eax
  __int64 v44; // rdx
  struct _KEVENT *v45; // rcx
  NTSTATUS v46; // edi
  BOOLEAN v47; // al
  NTSTATUS v48; // ecx
  int v49; // ecx
  unsigned int v50; // r9d
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rsi
  int v54; // ebx
  struct _KPRCB *v55; // r10
  int v56; // eax
  _QWORD *v57; // r12
  __int64 v58; // rdi
  unsigned __int64 *v59; // rax
  char v60; // al
  bool v61; // zf
  __int64 v62; // rbx
  char v63; // r15
  struct _KPRCB *v64; // r13
  _KTHREAD *v65; // rsi
  bool v66; // al
  _QWORD *v67; // r14
  __int64 v68; // rdi
  char v69; // al
  __int64 v70; // r8
  __int64 v71; // rbx
  char v72; // r12
  struct _KPRCB *v73; // r13
  _KTHREAD *v74; // rsi
  bool v75; // al
  __int64 v76; // rcx
  __int64 *v77; // rcx
  unsigned __int8 v78; // r15
  _KTHREAD *v79; // rbx
  __int64 v80; // rcx
  _KTHREAD *NextThread; // r13
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // rcx
  UCHAR Size; // di
  char *SparePtr; // r15
  char *v87; // rdx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *i; // rcx
  unsigned int v90; // ecx
  LARGE_INTEGER *v91; // rdx
  KIRQL v92; // al
  NTSTATUS v93; // ebx
  BOOLEAN v94; // al
  NTSTATUS v95; // ecx
  char v96; // [rsp+30h] [rbp-F8h]
  char v97; // [rsp+31h] [rbp-F7h]
  char v98; // [rsp+32h] [rbp-F6h]
  char v99; // [rsp+33h] [rbp-F5h]
  unsigned __int8 v100; // [rsp+34h] [rbp-F4h]
  KIRQL v101; // [rsp+35h] [rbp-F3h]
  int v102; // [rsp+38h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-E8h]
  struct _KPRCB *v104; // [rsp+40h] [rbp-E8h]
  unsigned int v105; // [rsp+4Ch] [rbp-DCh]
  unsigned int v106; // [rsp+50h] [rbp-D8h] BYREF
  __int64 CurrentIrql; // [rsp+58h] [rbp-D0h]
  volatile signed __int32 *v108; // [rsp+60h] [rbp-C8h] BYREF
  LARGE_INTEGER v109; // [rsp+68h] [rbp-C0h] BYREF
  int v110; // [rsp+70h] [rbp-B8h]
  int v111; // [rsp+78h] [rbp-B0h]
  int v112; // [rsp+7Ch] [rbp-ACh]
  unsigned int v113; // [rsp+80h] [rbp-A8h]
  int v114; // [rsp+84h] [rbp-A4h]
  unsigned int v115; // [rsp+8Ch] [rbp-9Ch]
  int v116; // [rsp+94h] [rbp-94h]
  unsigned int v117; // [rsp+98h] [rbp-90h]
  __int64 v118; // [rsp+A0h] [rbp-88h]
  LARGE_INTEGER v119; // [rsp+B0h] [rbp-78h]
  unsigned int v120; // [rsp+B8h] [rbp-70h]
  ULONG_PTR v121; // [rsp+C8h] [rbp-60h]
  NTSTATUS Exception[22]; // [rsp+D0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+128h] [rbp+0h]
  unsigned int v128; // [rsp+148h] [rbp+20h]

  v113 = a4;
  v10 = a6;
  v11 = *(_DWORD *)(a6 + 80);
  v12 = (v11 & 0x10) != 0;
  v96 = v12;
  LODWORD(v118) = a4;
  v115 = a3->LowPart & 0xFFF;
  v108 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v102 = 0;
  v98 = 0;
  v97 = 0;
  v14 = 0LL;
  v109 = *a3;
  v117 = LOBYTE(CurrentThread[1].Teb) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  LODWORD(CurrentIrql) = v117;
  v15 = v12;
  v99 = v12;
  if ( (v11 & 0x10) == 0 )
  {
    v99 = 0;
    if ( (v11 & 0x1000000) != 0 )
    {
      if ( !(unsigned __int8)CcCanIWriteStream(a6, a4, 0LL, 0LL) )
        goto LABEL_13;
      v10 = a6;
    }
    v16 = KeGetCurrentThread();
    v17 = (*((_DWORD *)&v16[1].SwapListEntry + 3) >> 9) & 7;
    if ( (v16->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v17 = 0;
    }
    else if ( ((*((_DWORD *)&v16[1].SwapListEntry + 3) >> 9) & 7u) >= 2 )
    {
LABEL_10:
      if ( v17 <= 0 && (*(_DWORD *)(v10 + 80) & 0x8000) == 0 )
      {
        v13 = 0;
LABEL_13:
        v15 = 1;
        v99 = 1;
        if ( (*(_DWORD *)(a1 + 152) & 0x400) == 0 )
        {
          v18 = KeAcquireQueuedSpinLock(5uLL);
          *(_DWORD *)(a1 + 152) |= 0x400u;
          KeReleaseQueuedSpinLock(5uLL, v18);
        }
        goto LABEL_16;
      }
LABEL_15:
      v13 = 0;
LABEL_16:
      v12 = v96;
      goto LABEL_17;
    }
    if ( v16 == KeGetCurrentThread() && HIDWORD(v16[1].Timer.TimerListEntry.Flink) )
      goto LABEL_15;
    goto LABEL_10;
  }
LABEL_17:
  result = a8;
  if ( v15 && !a8 )
    return result;
  v20 = 4;
  if ( !a8 )
    v20 = 6;
  v120 = v20;
  if ( v12 )
  {
    v101 = KeAcquireQueuedSpinLock(5uLL);
    if ( (*(_DWORD *)(a1 + 152) & 0x20) == 0 )
    {
LABEL_42:
      ++*(_DWORD *)(a1 + 516);
      v98 = 1;
      KeReleaseQueuedSpinLock(5uLL, v101);
      goto LABEL_43;
    }
    KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    v14 = *(_SLIST_ENTRY **)(a1 + 496);
    if ( !v14 )
    {
      v21 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(v21, retaddr);
        goto LABEL_30;
      }
      _m_prefetchw(v21);
      v22 = (__int64)*v21;
      if ( !*v21 )
      {
        if ( v21 == (volatile signed __int64 **)_InterlockedCompareExchange64(v21[1], 0LL, (signed __int64)v21) )
          goto LABEL_30;
        v22 = KxWaitForLockChainValid((__int64 *)v21);
      }
      *v21 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
LABEL_30:
      KeReleaseQueuedSpinLock(5uLL, v101);
      KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
      RtlRaiseStatus(-1073741608);
    }
    Next = v14->Next;
    v24 = (_SLIST_ENTRY **)*((_QWORD *)&v14->Next + 1);
    if ( *(&v14->Next->Next + 1) != v14 || *v24 != v14 )
      __fastfail(3u);
    *v24 = Next;
    *((_QWORD *)&Next->Next + 1) = v24;
    *((_QWORD *)&v14->Next + 1) = 0LL;
    v14->Next = 0LL;
    *(_QWORD *)(a1 + 496) = 0LL;
    *(_DWORD *)(a1 + 152) &= ~0x20u;
    v97 = 1;
    v25 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v25, retaddr);
LABEL_41:
      v13 = 0;
      goto LABEL_42;
    }
    _m_prefetchw(v25);
    v26 = (__int64)*v25;
    if ( !*v25 )
    {
      if ( v25 == (volatile signed __int64 **)_InterlockedCompareExchange64(v25[1], 0LL, (signed __int64)v25) )
        goto LABEL_41;
      v26 = KxWaitForLockChainValid((__int64 *)v25);
    }
    *v25 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v26 + 8), 1uLL);
    goto LABEL_41;
  }
LABEL_43:
  if ( v14 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[6].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[6].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v14);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v14);
    }
    v13 = 0;
  }
  v29 = v108;
  v30 = a4;
  while ( v30 )
  {
    v31 = v109;
    v32 = a1;
    VirtualAddress = CcGetVirtualAddress(a1, v109.QuadPart, &v108, &v106, 0, 0);
    v121 = VirtualAddress;
    v34 = v106;
    if ( v106 > v30 )
      v34 = v30;
    v105 = v34;
    v128 = v30 - v34;
    v35 = v115;
    v36 = VirtualAddress - v115;
    v121 = v36;
    v37 = v115 + v34;
    v106 = v37;
    v38 = 1;
    v112 = 1;
    v31.LowPart -= v115;
    v119 = v31;
    while ( 1 )
    {
      Exception[4] = v37 > 0x1000;
      if ( (v38 & a5) != 0 )
      {
        if ( v119.QuadPart >= a7->QuadPart )
        {
          v13 |= 1u;
          v102 = v13;
        }
        if ( (*(_DWORD *)(v32 + 152) & 0x40) != 0 )
        {
          v13 |= 2u;
          v102 = v13;
        }
        v39 = MmCopyToCachedPage(v36, v13);
        v40 = v39;
        if ( v39 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v39);
          v42 = -1073741592;
          if ( IsNtstatusExpected )
            v42 = v40;
          RtlRaiseStatus(v42);
        }
      }
      else
      {
        if ( v37 > 0x1000 && (a5 & 4) != 0 )
        {
          LOBYTE(CurrentThread[1].Teb) = 1;
          if ( !LODWORD(CurrentThread[1].WaitListEntry.Flink) )
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = 1;
        }
        if ( !(unsigned int)MmCheckCachedPageStates(v36, 1LL, v120, 0LL) && !a8 )
        {
          v100 = 0;
          v29 = v108;
          goto LABEL_94;
        }
        v43 = 4096;
        if ( v37 <= 0x1000 )
          v43 = v37;
        memmove((void *)(v36 + v35), a2, v43 - v35);
        LOBYTE(CurrentThread[1].Teb) = v117 & 3;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v117 >> 2;
      }
      a2 += 4096 - v35;
      v35 = 0;
      v115 = 0;
      if ( v37 <= 0x1000 )
        break;
      v36 += 4096LL;
      v121 = v36;
      v37 -= 4096;
      v106 = v37;
      v31.LowPart += 4096;
      v119.LowPart = v31.LowPart;
      if ( v128 )
      {
        v38 = 2;
      }
      else
      {
        v38 = 4;
        if ( v37 > 0x1000 )
          v38 = 2;
      }
      v112 = v38;
      v32 = a1;
    }
    v44 = *((_QWORD *)v108 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v108 + 4) )
    {
      v45 = *(struct _KEVENT **)(v44 + 184);
      if ( v45 )
        KeSetEvent(v45, 0, 0);
    }
    v29 = 0LL;
    v108 = 0LL;
    CcSetDirtyInMask(a1, (__int64 *)&v109, v105, a9);
    v30 = v128;
    if ( v113 - v128 > 0x1000000 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), &v109, v105, 0LL, v96, (char *)Exception);
      v46 = Exception[0];
      if ( Exception[0] < 0 )
      {
        v47 = FsRtlIsNtstatusExpected(Exception[0]);
        v48 = -1073741591;
        if ( v47 )
          v48 = v46;
        RtlRaiseStatus(v48);
      }
    }
    if ( v128 < 0x1000 )
    {
      v49 = a5;
      if ( (a5 & 4) == 0 )
        v49 = 0;
      a5 = v49;
    }
    else
    {
      a5 |= 1u;
    }
    v109.QuadPart += v105;
    v13 = v102;
  }
  v100 = 1;
LABEL_94:
  v50 = v117;
  LOBYTE(CurrentThread[1].Teb) = v117 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v50 >> 2;
  if ( !v29 )
    goto LABEL_220;
  v51 = *((_QWORD *)v29 + 1);
  v52 = (unsigned int)_InterlockedDecrement(v29 + 4);
  if ( (_WORD)v52 )
    goto LABEL_220;
  v53 = *(_QWORD *)(v51 + 184);
  v118 = v53;
  if ( !v53 )
    goto LABEL_220;
  if ( (*(_BYTE *)v53 & 0x7F) != 0 )
  {
    v54 = 0;
    goto LABEL_101;
  }
  if ( *(_DWORD *)(v53 + 4) != 1 )
  {
    v54 = 1;
LABEL_101:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v55 = KeGetCurrentPrcb();
    v104 = v55;
    v116 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v53, 7u) )
    {
      do
      {
        v52 = (unsigned int)(v116 + 1);
        v116 = v52;
        if ( ((unsigned int)v52 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v52);
      }
      while ( (*(_DWORD *)v53 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v53, 7u) );
      v55 = v104;
    }
    v56 = *(_DWORD *)(v53 + 4);
    *(_DWORD *)(v53 + 4) = 1;
    if ( v56 )
      goto LABEL_179;
    if ( !v54 )
    {
      v57 = *(_QWORD **)(v53 + 8);
      if ( v57 != (_QWORD *)(v53 + 8) )
      {
        while ( 1 )
        {
          v58 = (__int64)v57;
          v57 = (_QWORD *)*v57;
          v52 = *(_QWORD *)v58;
          v59 = *(unsigned __int64 **)(v58 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v58 + 8LL) != v58 || *v59 != v58 )
            __fastfail(3u);
          *v59 = v52;
          *(_QWORD *)(v52 + 8) = v59;
          v60 = *(_BYTE *)(v58 + 16);
          if ( v60 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)v55, v58, *(unsigned __int16 *)(v58 + 18), 0LL) )
            {
              v61 = (*(_DWORD *)(v53 + 4))-- == 1;
              if ( v61 )
                break;
            }
          }
          else if ( v60 == 2 )
          {
            *(_BYTE *)(v58 + 17) = 5;
            v62 = *(_QWORD *)(v58 + 24);
            *(_QWORD *)v58 = 0LL;
            v63 = 0;
            __writecr8(2uLL);
            v64 = KeGetCurrentPrcb();
            v65 = v64->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v66 = v65->WaitBlockFill6[68] == 2 && v65->NextProcessor == KeGetPcr()->Prcb.Number;
              EtwTraceEnqueueWork(v64->CurrentThread, v58, v66);
            }
            v111 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)v62, 7u) )
            {
              do
              {
                v52 = (unsigned int)(v111 + 1);
                v111 = v52;
                if ( ((unsigned int)v52 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v52);
              }
              while ( (*(_DWORD *)v62 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v62, 7u) );
            }
            if ( *(_QWORD *)(v62 + 16) != v62 + 8
              && *(_DWORD *)(v62 + 40) < *(_DWORD *)(v62 + 44)
              && (v65->Queue != (_DISPATCHER_HEADER *volatile)v62 || v65->WaitReason != 15) )
            {
              v63 = KiWakeQueueWaiter((__int64)v64, v62, v58);
            }
            if ( !v63 )
            {
              ++*(_DWORD *)(v62 + 4);
              v52 = *(_QWORD *)(v62 + 32);
              *(_QWORD *)v58 = v62 + 24;
              *(_QWORD *)(v58 + 8) = v52;
              if ( *(_QWORD *)v52 != v62 + 24 )
                __fastfail(3u);
              *(_QWORD *)v52 = v58;
              *(_QWORD *)(v62 + 32) = v58;
            }
            _InterlockedAnd((volatile signed __int32 *)v62, 0xFFFFFF7F);
            v53 = v118;
            v61 = (*(_DWORD *)(v118 + 4))-- == 1;
            if ( v61 )
              break;
          }
          else
          {
            KiTryUnwaitThread((__int64)v55, v58, 256LL, 0LL);
          }
          if ( v57 == (_QWORD *)(v53 + 8) )
            break;
          v55 = v104;
        }
      }
LABEL_179:
      _InterlockedAnd((volatile signed __int32 *)v53, 0xFFFFFF7F);
      if ( v104->DeferredReadyListHead.Next )
        KiProcessThreadWaitList(v104, 1LL, 0LL, 0LL);
      v78 = CurrentIrql;
      if ( (unsigned __int8)CurrentIrql >= 2u )
      {
        if ( v104->NextThread && !v104->DpcRoutineActive )
        {
          if ( v104->NestingLevel )
          {
            v104->InterruptRequest = 1;
          }
          else
          {
            LOBYTE(v52) = 2;
            HalRequestSoftwareInterrupt(v52);
          }
        }
        goto LABEL_220;
      }
      v79 = v104->CurrentThread;
      if ( v104->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v104->CurrentThread, 0);
        v110 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v104->PrcbLock, 0LL) )
        {
          do
          {
            v80 = (unsigned int)(v110 + 1);
            v110 = v80;
            if ( ((unsigned int)v80 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v80);
          }
          while ( v104->PrcbLock );
        }
        NextThread = v104->NextThread;
        v104->NextThread = 0LL;
        _disable();
        v104->NestingLevel = 1;
        v82 = __rdtsc();
        v83 = v82 - v104->StartCycles;
        v79->CycleTime += v83;
        v84 = v83 + v79->CurrentRunTime;
        if ( v84 > 0xFFFFFFFF )
          LODWORD(v84) = -1;
        v104->StartCycles = v82;
        v79->CurrentRunTime = v84;
        Size = v79->Header.Size;
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x10) != 0 )
          {
            v104->TaggedCycles[v79->Tag] += v104->StartCycles - v104->TaggedCyclesStart;
            v104->TaggedCyclesStart = 0LL;
            Size &= ~0x10u;
          }
          if ( (Size & 0x3E) != 0 )
          {
            if ( (Size & 0x20) != 0 )
            {
              SparePtr = (char *)v79[1].WaitBlock[2].SparePtr;
              if ( SparePtr )
              {
                v87 = &SparePtr[16 * (unsigned int)PoGetFrequencyBucket(v104) + 8 * v104->PowerState.Class];
                *(_QWORD *)v87 += v83;
              }
              Size &= ~0x20u;
              v78 = CurrentIrql;
            }
            if ( (Size & 0x3E) != 0 )
            {
              SchedulingGroup = v79->SchedulingGroup;
              if ( SchedulingGroup )
              {
                for ( i = (_QWORD *)((char *)&SchedulingGroup->Policy + v104->ScbOffset); i; i = (_QWORD *)i[49] )
                  *i += v83;
              }
              if ( (v79->Header.Size & 8) != 0
                && (v79->Affinity.Mask & v104->ParentNode->Affinity.Mask) != v104->ParentNode->Affinity.Mask )
              {
                v104->AffinitizedCycles += v83;
              }
              if ( v79->WaitBlock[0].SparePtr )
                KiEndCounterAccumulation(v79);
            }
          }
        }
        _enable();
        v104->CurrentThread = NextThread;
        NextThread->WaitBlockFill6[68] = 2;
        v79->WaitReason = 32;
        v79->WaitIrql = v78;
        KiQueueReadyThread(v104, v79);
        if ( !(unsigned __int8)KiSwapContext(v79, NextThread, v78) )
          goto LABEL_214;
      }
      else if ( (v79->MiscFlags & 0x40) == 0 )
      {
LABEL_214:
        __writecr8(v78);
        goto LABEL_220;
      }
      __writecr8(1uLL);
      v79->MiscFlags &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
      goto LABEL_214;
    }
    v52 = v53 + 8;
    v67 = *(_QWORD **)(v53 + 8);
    if ( v67 == (_QWORD *)(v53 + 8) )
    {
LABEL_178:
      *(_QWORD *)(v52 + 8) = v52;
      *(_QWORD *)v52 = v52;
      goto LABEL_179;
    }
    while ( 1 )
    {
      v68 = (__int64)v67;
      v67 = (_QWORD *)*v67;
      v69 = *(_BYTE *)(v68 + 16);
      if ( v69 == 1 )
        break;
      if ( v69 != 2 )
      {
        v70 = 256LL;
        goto LABEL_174;
      }
      *(_BYTE *)(v68 + 17) = 5;
      v71 = *(_QWORD *)(v68 + 24);
      *(_QWORD *)v68 = 0LL;
      v72 = 0;
      __writecr8(2uLL);
      v73 = KeGetCurrentPrcb();
      v74 = v73->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v75 = v74->WaitBlockFill6[68] == 2 && v74->NextProcessor == KeGetPcr()->Prcb.Number;
        EtwTraceEnqueueWork(v73->CurrentThread, v68, v75);
      }
      v114 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v71, 7u) )
      {
        do
        {
          v76 = (unsigned int)(v114 + 1);
          v114 = v76;
          if ( ((unsigned int)v76 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v76);
        }
        while ( (*(_DWORD *)v71 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v71, 7u) );
      }
      if ( *(_QWORD *)(v71 + 16) != v71 + 8
        && *(_DWORD *)(v71 + 40) < *(_DWORD *)(v71 + 44)
        && (v74->Queue != (_DISPATCHER_HEADER *volatile)v71 || v74->WaitReason != 15) )
      {
        v72 = KiWakeQueueWaiter((__int64)v73, v71, v68);
      }
      if ( !v72 )
      {
        ++*(_DWORD *)(v71 + 4);
        v77 = *(__int64 **)(v71 + 32);
        *(_QWORD *)v68 = v71 + 24;
        *(_QWORD *)(v68 + 8) = v77;
        if ( *v77 != v71 + 24 )
          __fastfail(3u);
        *v77 = v68;
        *(_QWORD *)(v71 + 32) = v68;
      }
      _InterlockedAnd((volatile signed __int32 *)v71, 0xFFFFFF7F);
      v53 = v118;
LABEL_175:
      v52 = v53 + 8;
      if ( v67 == (_QWORD *)(v53 + 8) )
        goto LABEL_178;
      v55 = v104;
    }
    v70 = *(unsigned __int16 *)(v68 + 18);
LABEL_174:
    KiTryUnwaitThread((__int64)v55, v68, v70, 0LL);
    goto LABEL_175;
  }
LABEL_220:
  if ( v99 )
  {
    v90 = v113;
    if ( v97 )
      v90 = 0;
    v91 = a3;
    if ( v97 )
      v91 = 0LL;
    CcFlushCachePriv(*(_QWORD *)(a6 + 40), v91, v90, 0LL, v96, (char *)Exception);
    if ( v98 )
    {
      v92 = KeAcquireQueuedSpinLock(5uLL);
      --*(_DWORD *)(a1 + 516);
      KeReleaseQueuedSpinLock(5uLL, v92);
    }
    v93 = Exception[0];
    if ( Exception[0] < 0 )
    {
      v94 = FsRtlIsNtstatusExpected(Exception[0]);
      v95 = -1073741591;
      if ( v94 )
        v95 = v93;
      RtlRaiseStatus(v95);
    }
  }
  return v100;
}
