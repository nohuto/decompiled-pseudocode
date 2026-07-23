/*
 * XREFs of KiExpireTimer2 @ 0x140033E90
 * Callers:
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 * Callees:
 *     KiFinalizeTimer2Disablement @ 0x140031898 (KiFinalizeTimer2Disablement.c)
 *     KiUpdateTimer2Flags @ 0x1400326AC (KiUpdateTimer2Flags.c)
 *     KiInsertTimer2 @ 0x140033028 (KiInsertTimer2.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     RtlGetInterruptTimePrecise @ 0x1400351D0 (RtlGetInterruptTimePrecise.c)
 *     KiTimer2ComputeDueTime @ 0x140035298 (KiTimer2ComputeDueTime.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiTimer2TypeFlagsToEtwFlags @ 0x1401CAD40 (KiTimer2TypeFlagsToEtwFlags.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiExpireTimer2(unsigned __int64 a1, __int64 a2, LARGE_INTEGER InterruptTimePrecise, _DWORD *a4)
{
  __int64 v4; // r13
  int v5; // ebp
  _DWORD *v6; // rdi
  __int64 v8; // r11
  unsigned int v9; // r15d
  char v11; // r12
  char v12; // al
  _QWORD **v13; // r14
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // al
  bool v19; // zf
  unsigned __int64 v20; // r14
  ULONG_PTR v21; // rsi
  signed __int32 v22; // ecx
  int v23; // ebp
  unsigned int v24; // edx
  signed __int32 v25; // eax
  __int64 result; // rax
  __int64 v27; // r15
  _KTHREAD *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rbp
  unsigned int v36; // ecx
  _DWORD *v37; // rdi
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  unsigned __int64 v40; // r8
  _QWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int8 v46; // al
  __int64 v47; // r9
  _QWORD *v48; // r15
  _QWORD *v49; // rdi
  char v50; // al
  __int64 v51; // r8
  __int64 v52; // rsi
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v55; // r9
  _QWORD *v56; // rcx
  signed __int32 v57; // ecx
  char v58; // al
  char v59; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int8 v60; // [rsp+31h] [rbp-D7h]
  unsigned int v61; // [rsp+34h] [rbp-D4h]
  char v62[8]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v63; // [rsp+40h] [rbp-C8h]
  __int64 v64; // [rsp+48h] [rbp-C0h]
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-B8h]
  struct _KPRCB *v66; // [rsp+58h] [rbp-B0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v68[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+78h] [rbp-90h]
  __int64 v70; // [rsp+80h] [rbp-88h]
  ULONG_PTR v71; // [rsp+88h] [rbp-80h]
  __int64 v72; // [rsp+90h] [rbp-78h]
  char v73; // [rsp+98h] [rbp-70h]
  _BYTE v74[16]; // [rsp+A0h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v6 = a4;
  v63 = a4;
  v64 = a2;
  v8 = a2;
  v9 = *(_DWORD *)(v4 + 484);
  v61 = v9;
  v69 = 0LL;
  v60 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v11 = 1;
    v68[0] = *(_QWORD *)(a1 + 72);
    v68[1] = *(_QWORD *)(a1 + 80);
    v69 = *(_QWORD *)(a1 + 88);
    v60 = *(_BYTE *)(a1 + 129);
  }
  else
  {
    v11 = 0;
  }
  v59 = 0;
  if ( *(_QWORD *)(a1 + 88) && (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 129) & 4) != 0 )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiTimer2ComputeDueTime)(
            (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
            *(_QWORD *)(a1 + 88),
            &v59);
    v32 = *(_QWORD *)(a1 + 80);
    if ( v32 != -1 )
    {
      v33 = v32 - *(_QWORD *)(a1 + 72);
      if ( v33 )
      {
        v40 = v33 + v31;
        if ( v33 + v31 < v31 || v40 == -1LL )
          v40 = -2LL;
        v34 = v30 + v40;
        if ( v30 + v40 < v40 || v34 == -1 )
          v34 = -2LL;
      }
      else
      {
        v34 = v29;
      }
      *(_QWORD *)(a1 + 80) = v34;
    }
    *(_QWORD *)(a1 + 72) = v29;
    while ( !KiInsertTimer2(a1, 0, (__int64)v62) )
    {
      if ( v59 )
        goto LABEL_39;
      v42 = KiTimer2ComputeDueTime(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 88), &v59);
      v44 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = v42;
      if ( v44 != -1LL )
      {
        v45 = v44 + v43;
        if ( v44 + v43 < v44 || v45 == -1 )
          v45 = -2LL;
        *(_QWORD *)(a1 + 80) = v45;
      }
    }
    v5 = 1;
LABEL_39:
    v8 = v64;
  }
  v12 = *(_BYTE *)a1 & 0x7F;
  v13 = (_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 1;
  if ( v12 != 25 )
  {
    v48 = *v13;
    if ( *v13 == v13 )
    {
LABEL_89:
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *v13 = v13;
LABEL_12:
      v9 = v61;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v49 = v48;
      v48 = (_QWORD *)*v48;
      v50 = *((_BYTE *)v49 + 16);
      if ( v50 == 1 )
        break;
      if ( v50 != 2 )
      {
        v51 = 256LL;
        goto LABEL_84;
      }
      *((_BYTE *)v49 + 17) = 5;
      v52 = v49[3];
      *v49 = 0LL;
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = CurrentPrcb->CurrentThread;
      v66 = (struct _KPRCB *)CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(CurrentThread);
        EtwTraceEnqueueWork(v55, v49, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v52);
      if ( *(_QWORD *)(v52 + 16) == v52 + 8
        || *(_DWORD *)(v52 + 40) >= *(_DWORD *)(v52 + 44)
        || v66->ProcessorState.SpecialRegisters.MsrGsBase == v52
        && BYTE3(v66->ProcessorState.ContextFrame.Legacy[4].Low) == 15
        || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v52, v49) )
      {
        ++*(_DWORD *)(v52 + 4);
        v56 = *(_QWORD **)(v52 + 32);
        *v49 = v52 + 24;
        v49[1] = v56;
        if ( *v56 != v52 + 24 )
          __fastfail(3u);
        *v56 = v49;
        *(_QWORD *)(v52 + 32) = v49;
      }
      _InterlockedAnd((volatile signed __int32 *)v52, 0xFFFFFF7F);
LABEL_85:
      if ( v48 == v13 )
      {
        v6 = v63;
        goto LABEL_89;
      }
      v8 = v64;
    }
    v51 = *((unsigned __int16 *)v49 + 9);
LABEL_84:
    KiTryUnwaitThread(v8, v49, v51, 0LL);
    goto LABEL_85;
  }
  v14 = *v13;
  if ( *v13 != v13 )
  {
    while ( 1 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
      v16 = *v15;
      v17 = (_QWORD *)v15[1];
      if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v17 != v15 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v18 = *((_BYTE *)v15 + 16);
      if ( v18 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v8, v15, *((unsigned __int16 *)v15 + 9), 0LL) )
        {
          v19 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v19 )
            goto LABEL_11;
        }
      }
      else if ( v18 == 2 )
      {
        *((_BYTE *)v15 + 17) = 5;
        v27 = v15[3];
        *v15 = 0LL;
        __writecr8(2uLL);
        v66 = KeGetCurrentPrcb();
        v28 = v66->CurrentThread;
        CurrentPrcb = (struct _KPRCB *)v28;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v46 = KeIsThreadRunning(v28);
          EtwTraceEnqueueWork(v47, v15, v46);
        }
        KiAcquireKobjectLockSafe(v27);
        if ( *(_QWORD *)(v27 + 16) == v27 + 8
          || *(_DWORD *)(v27 + 40) >= *(_DWORD *)(v27 + 44)
          || CurrentPrcb->ProcessorState.SpecialRegisters.MsrGsBase == v27
          && BYTE3(CurrentPrcb->ProcessorState.ContextFrame.Legacy[4].Low) == 15
          || !(unsigned __int8)KiWakeQueueWaiter(v66, v27, v15) )
        {
          ++*(_DWORD *)(v27 + 4);
          v41 = *(_QWORD **)(v27 + 32);
          *v15 = v27 + 24;
          v15[1] = v41;
          if ( *v41 != v27 + 24 )
            __fastfail(3u);
          *v41 = v15;
          *(_QWORD *)(v27 + 32) = v15;
        }
        _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
        v19 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v19 )
        {
LABEL_11:
          v6 = v63;
          goto LABEL_12;
        }
      }
      else
      {
        KiTryUnwaitThread(v8, v15, 256LL, 0LL);
      }
      if ( v14 == v13 )
        goto LABEL_11;
      v8 = v64;
    }
  }
LABEL_13:
  v20 = 0LL;
  v21 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( !v21 )
  {
    v22 = *(_DWORD *)a1;
    v23 = v5 << 8;
    v24 = v23 | *(_DWORD *)a1 & 0xFFFFF07F;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v24, *(_DWORD *)a1);
    if ( v22 != v25 )
    {
      do
      {
        v57 = v25;
        v24 = v23 | v25 & 0xFFFFF07F;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v24, v25);
      }
      while ( v57 != v25 );
    }
    if ( (v24 & 0x3F00) != 0x2000 )
      goto LABEL_16;
LABEL_47:
    KiFinalizeTimer2Disablement(a1);
    goto LABEL_16;
  }
  v20 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, v5 | 0x10, 0);
  v35 = v64;
  if ( *(_QWORD *)(v64 + 11400) )
    KiProcessThreadWaitList(v64, 1LL, 0LL);
  if ( v11 )
    EtwGetKernelTraceTimestamp(v74, 1073872896LL);
  v36 = (*v6)++ & 0xF;
  v37 = &v63[4 * v36 + 4];
  *(_QWORD *)v37 = v21;
  v37[2] = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v35 + 23328) = 0;
  ((void (__fastcall *)(unsigned __int64, unsigned __int64))v21)(a1, v20);
  v37[3] = MEMORY[0xFFFFF78000000320];
  _m_prefetchw((const void *)a1);
  v38 = *(_DWORD *)a1;
  do
  {
    v39 = v38;
    v38 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v38 & 0xFFFFEFFF, v38);
  }
  while ( v39 != v38 );
  if ( (v38 & 0x2F00) == 0x2000 )
    goto LABEL_47;
LABEL_16:
  result = *(unsigned int *)(v4 + 484);
  if ( v9 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v21, v9, *(unsigned int *)(v4 + 484));
  if ( v11 )
  {
    v71 = v21;
    v72 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v20 ^ KiWaitAlways), KiWaitNever));
    v70 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v21 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v58 = KiTimer2TypeFlagsToEtwFlags(v60);
    v73 = v58;
    if ( v21 )
    {
      v58 |= 1u;
      v73 = v58;
    }
    if ( v69 )
      v73 = v58 | 2;
    if ( !v21 )
      EtwGetKernelTraceTimestamp(v74, 1073872896LL);
    return EtwTraceTimedEvent(3945, 1073872896, (unsigned int)v68, 56, 4197890, (__int64)v74);
  }
  return result;
}
