/*
 * XREFs of KiExpireTimer2 @ 0x1400E9EF0
 * Callers:
 *     KiTimer2Expiration @ 0x140059C20 (KiTimer2Expiration.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     EtwTraceTimedEvent @ 0x14009DEB8 (EtwTraceTimedEvent.c)
 *     KiFinalizeTimer2Disablement @ 0x1400A1088 (KiFinalizeTimer2Disablement.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     KiUpdateTimer2Flags @ 0x1400EA620 (KiUpdateTimer2Flags.c)
 *     KiTimer2ComputeDueTime @ 0x1400EC28C (KiTimer2ComputeDueTime.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiInsertTimer2 @ 0x1400EC8F8 (KiInsertTimer2.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     KiTimer2TypeFlagsToEtwFlags @ 0x1401DAA3C (KiTimer2TypeFlagsToEtwFlags.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

void __fastcall KiExpireTimer2(unsigned __int64 a1, __int64 a2, LARGE_INTEGER InterruptTimePrecise, _DWORD *a4)
{
  __int64 v5; // r11
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // al
  _QWORD *v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  char v25; // al
  __int64 v26; // rsi
  _QWORD *v27; // r14
  struct _KPRCB *v28; // r15
  _KTHREAD *v29; // rbp
  unsigned __int8 v30; // al
  int v31; // r8d
  __int64 *v32; // rdx
  _QWORD *v33; // r15
  _QWORD *v34; // r12
  __int64 v35; // rbx
  char v36; // al
  __int64 v37; // r8
  __int64 v38; // rsi
  _QWORD *v39; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbp
  unsigned __int8 IsThreadRunning; // al
  int v43; // r8d
  __int64 *v44; // rdx
  unsigned __int64 v45; // rbp
  ULONG_PTR v46; // rsi
  __int64 v47; // r14
  char v48; // r15
  _DWORD *v49; // rdx
  __int64 v50; // rbx
  _DWORD *v51; // rbx
  signed __int32 v52; // eax
  signed __int32 v53; // ett
  char v54; // al
  char v55; // [rsp+30h] [rbp-C8h] BYREF
  char v56; // [rsp+31h] [rbp-C7h]
  unsigned __int8 v57; // [rsp+32h] [rbp-C6h]
  char v58; // [rsp+33h] [rbp-C5h] BYREF
  unsigned int v59; // [rsp+34h] [rbp-C4h]
  __int64 v60; // [rsp+38h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-B8h]
  _DWORD *v62; // [rsp+48h] [rbp-B0h]
  __int64 v63; // [rsp+50h] [rbp-A8h]
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v65[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-88h]
  __int64 v67; // [rsp+78h] [rbp-80h]
  ULONG_PTR v68; // [rsp+80h] [rbp-78h]
  __int64 v69; // [rsp+88h] [rbp-70h]
  char v70; // [rsp+90h] [rbp-68h]
  char v71[16]; // [rsp+98h] [rbp-60h] BYREF

  v63 = *(_QWORD *)(a2 + 8);
  v5 = a2;
  v62 = a4;
  v60 = a2;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v63 + 484);
  v59 = 0;
  v57 = 0;
  v66 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v65[0] = *(_QWORD *)(a1 + 72);
    v65[1] = *(_QWORD *)(a1 + 80);
    v66 = *(_QWORD *)(a1 + 88);
    v57 = *(_BYTE *)(a1 + 129);
    v56 = 1;
  }
  else
  {
    v56 = 0;
  }
  v7 = *(_QWORD *)(a1 + 88) == 0LL;
  v55 = 0;
  if ( !v7 && (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 129) & 4) != 0 )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiTimer2ComputeDueTime)(
           (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
           *(_QWORD *)(a1 + 88),
           &v55);
    v11 = *(_QWORD *)(a1 + 80);
    v12 = v8;
    if ( v11 != -1 )
    {
      v13 = v11 - *(_QWORD *)(a1 + 72);
      if ( v13 )
      {
        v15 = v13 + v10;
        if ( v13 + v10 < v10 || v15 == -1LL )
          v15 = -2LL;
        v14 = v9 + v15;
        if ( v9 + v15 < v15 || v14 == -1 )
          v14 = -2LL;
      }
      else
      {
        v14 = v8;
      }
      *(_QWORD *)(a1 + 80) = v14;
    }
    *(_QWORD *)(a1 + 72) = v12;
    if ( (unsigned __int8)KiInsertTimer2(a1, 0LL, &v58) )
    {
LABEL_26:
      v59 = 1;
    }
    else
    {
      while ( !v55 )
      {
        v16 = KiTimer2ComputeDueTime(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 88), &v55);
        v18 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 72) = v16;
        if ( v18 != -1LL )
        {
          v19 = v18 + v17;
          if ( v18 + v17 < v18 || v19 == -1 )
            v19 = -2LL;
          *(_QWORD *)(a1 + 80) = v19;
        }
        if ( (unsigned __int8)KiInsertTimer2(a1, 0LL, &v58) )
          goto LABEL_26;
      }
    }
    v5 = v60;
  }
  v20 = *(_BYTE *)a1;
  *(_DWORD *)(a1 + 4) = 1;
  if ( (v20 & 0x7F) != 0x19 )
  {
    v33 = *(_QWORD **)(a1 + 8);
    v34 = (_QWORD *)(a1 + 8);
    if ( v33 == (_QWORD *)(a1 + 8) )
    {
LABEL_76:
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *v34 = v34;
      goto LABEL_77;
    }
    while ( 1 )
    {
      v35 = (__int64)v33;
      v33 = (_QWORD *)*v33;
      v36 = *(_BYTE *)(v35 + 16);
      if ( v36 == 1 )
        break;
      if ( v36 != 2 )
      {
        v37 = 256LL;
        goto LABEL_72;
      }
      *(_BYTE *)(v35 + 17) = 5;
      v38 = *(_QWORD *)(v35 + 24);
      *(_QWORD *)v35 = 0LL;
      v39 = (_QWORD *)(v38 + 8);
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v35, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v38);
      if ( (_QWORD *)*v39 == v39
        || *(_DWORD *)(v38 + 40) >= *(_DWORD *)(v38 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v38 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v38, v35) )
      {
        v43 = *(_DWORD *)(v38 + 4);
        *(_DWORD *)(v38 + 4) = v43 + 1;
        v44 = *(__int64 **)(v38 + 32);
        if ( *v44 != v38 + 24 )
          __fastfail(3u);
        *(_QWORD *)v35 = v38 + 24;
        *(_QWORD *)(v35 + 8) = v44;
        *v44 = v35;
        *(_QWORD *)(v38 + 32) = v35;
        if ( !v43 && (_QWORD *)*v39 != v39 )
          KiWakeOtherQueueWaiters(CurrentPrcb, v38);
      }
      _InterlockedAnd((volatile signed __int32 *)v38, 0xFFFFFF7F);
LABEL_73:
      if ( v33 == v34 )
        goto LABEL_76;
      v5 = v60;
    }
    v37 = *(unsigned __int16 *)(v35 + 18);
LABEL_72:
    KiTryUnwaitThread(v5, v35, v37, 0LL);
    goto LABEL_73;
  }
  v21 = *(_QWORD **)(a1 + 8);
  if ( v21 != (_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v22 = (__int64)v21;
      v21 = (_QWORD *)*v21;
      v23 = *(_QWORD *)v22;
      v24 = *(_QWORD **)(v22 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 || *v24 != v22 )
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      v25 = *(_BYTE *)(v22 + 16);
      if ( v25 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v5, v22, *(unsigned __int16 *)(v22 + 18), 0LL) )
        {
          v7 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v7 )
            break;
        }
      }
      else if ( v25 == 2 )
      {
        *(_BYTE *)(v22 + 17) = 5;
        v26 = *(_QWORD *)(v22 + 24);
        *(_QWORD *)v22 = 0LL;
        v27 = (_QWORD *)(v26 + 8);
        __writecr8(2uLL);
        v28 = KeGetCurrentPrcb();
        v29 = v28->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v30 = KeIsThreadRunning(v28->CurrentThread);
          EtwTraceEnqueueWork(v29, v22, v30);
        }
        KiAcquireKobjectLockSafe(v26);
        if ( (_QWORD *)*v27 == v27
          || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44)
          || v29->Queue == (_DISPATCHER_HEADER *volatile)v26 && v29->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(v28, v26, v22) )
        {
          v31 = *(_DWORD *)(v26 + 4);
          *(_DWORD *)(v26 + 4) = v31 + 1;
          v32 = *(__int64 **)(v26 + 32);
          if ( *v32 != v26 + 24 )
            __fastfail(3u);
          *(_QWORD *)v22 = v26 + 24;
          *(_QWORD *)(v22 + 8) = v32;
          *v32 = v22;
          *(_QWORD *)(v26 + 32) = v22;
          if ( !v31 && (_QWORD *)*v27 != v27 )
            KiWakeOtherQueueWaiters(v28, v26);
        }
        _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
        v7 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v7 )
          break;
      }
      else
      {
        KiTryUnwaitThread(v5, v22, 256LL, 0LL);
      }
      if ( v21 == (_QWORD *)(a1 + 8) )
        break;
      v5 = v60;
    }
  }
LABEL_77:
  v45 = 0LL;
  v46 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( v46 )
  {
    v45 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
    KiUpdateTimer2Flags(a1, v59 | 0x10, 0LL);
    v47 = v60;
    if ( *(_QWORD *)(v60 + 11400) )
      KiProcessThreadWaitList(v60, 1u, 0LL, 2LL);
    v48 = v56;
    if ( v56 )
      EtwGetKernelTraceTimestamp(v71, 0x40020000uLL);
    v49 = v62;
    v50 = ((*v62)++ & 0xF) + 1LL;
    v51 = &v49[4 * v50];
    *(_QWORD *)v51 = v46;
    v51[2] = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v47 + 23328) = 0;
    KiResetGlobalDpcWatchdogProfiler(v47);
    *(_BYTE *)(v47 + 11754) = 1;
    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v46)(a1, v45);
    *(_BYTE *)(v47 + 11754) = 0;
    v51[3] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)a1);
    v52 = *(_DWORD *)a1;
    do
    {
      v53 = v52;
      v52 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v52 & 0xFFFFEFFF, v52);
    }
    while ( v53 != v52 );
    if ( (v52 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
  }
  else
  {
    KiUpdateTimer2Flags(a1, v59, 4LL);
    v48 = v56;
  }
  if ( (_DWORD)BugCheckParameter3 != *(_DWORD *)(v63 + 484) )
    KeBugCheckEx(0xC7u, 5uLL, v46, (unsigned int)BugCheckParameter3, *(unsigned int *)(v63 + 484));
  if ( v48 )
  {
    v68 = v46;
    v67 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v46 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v69 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v45 ^ KiWaitAlways), KiWaitNever));
    v54 = KiTimer2TypeFlagsToEtwFlags(v57);
    v70 = v54;
    if ( v46 )
    {
      v54 |= 1u;
      v70 = v54;
    }
    if ( v66 )
      v70 = v54 | 2;
    if ( !v46 )
      EtwGetKernelTraceTimestamp(v71, 0x40020000uLL);
    EtwTraceTimedEvent(0xF69u, 0x40020000u, (__int64)v65, 56, 0x400E02u, (__int64)v71);
  }
}
