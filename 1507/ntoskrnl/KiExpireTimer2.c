/*
 * XREFs of KiExpireTimer2 @ 0x1400F5400
 * Callers:
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     EtwTraceTimedEvent @ 0x140083664 (EtwTraceTimedEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     KiFinalizeTimer2Disablement @ 0x1400F443C (KiFinalizeTimer2Disablement.c)
 *     KiUpdateTimer2Flags @ 0x1400F5C10 (KiUpdateTimer2Flags.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiTimer2TypeFlagsToEtwFlags @ 0x1402098F0 (KiTimer2TypeFlagsToEtwFlags.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

void *__fastcall KiExpireTimer2(unsigned __int64 a1, __int64 a2, LARGE_INTEGER InterruptTimePrecise, _DWORD *a4)
{
  char v4; // di
  __int64 v5; // r10
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  char inserted; // bl
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // al
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdi
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbp
  bool v22; // al
  unsigned int v23; // ebx
  __int64 *v24; // rcx
  _QWORD *v25; // r14
  _QWORD *v26; // r12
  __int64 v27; // rsi
  char v28; // al
  __int64 v29; // r8
  __int64 v30; // rdi
  struct _KPRCB *v31; // r13
  _KTHREAD *v32; // rbp
  bool v33; // al
  unsigned int v34; // ebx
  __int64 *v35; // rcx
  unsigned __int64 v36; // rsi
  ULONG_PTR v37; // rdi
  __int64 v38; // rbp
  char v39; // r14
  _DWORD *v40; // rdx
  __int64 v41; // rbx
  _DWORD *v42; // rbx
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  void *result; // rax
  char v46; // al
  char v47; // [rsp+30h] [rbp-C8h]
  unsigned __int8 v48; // [rsp+31h] [rbp-C7h]
  char v49[2]; // [rsp+32h] [rbp-C6h] BYREF
  unsigned int v50; // [rsp+34h] [rbp-C4h]
  __int64 v51; // [rsp+38h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-B8h]
  __int64 v53; // [rsp+48h] [rbp-B0h]
  _DWORD *v54; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v55; // [rsp+58h] [rbp-A0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v57[2]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-80h]
  __int64 v59; // [rsp+80h] [rbp-78h]
  ULONG_PTR v60; // [rsp+88h] [rbp-70h]
  __int64 v61; // [rsp+90h] [rbp-68h]
  char v62; // [rsp+98h] [rbp-60h]
  _BYTE v63[16]; // [rsp+A0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v4 = 0;
  v53 = *(_QWORD *)(a2 + 8);
  v5 = a2;
  v54 = a4;
  v6 = a1;
  v51 = a2;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v53 + 484);
  v55 = a1;
  v50 = 0;
  v48 = 0;
  v58 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v57[0] = *(_QWORD *)(a1 + 72);
    v57[1] = *(_QWORD *)(a1 + 80);
    v58 = *(_QWORD *)(a1 + 88);
    v48 = *(_BYTE *)(a1 + 129);
    v47 = 1;
  }
  else
  {
    v47 = 0;
  }
  if ( !*(_QWORD *)(a1 + 88) || (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    goto LABEL_37;
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v7 = InterruptTimePrecise.QuadPart + *(_QWORD *)(v6 + 88);
  if ( v7 < InterruptTimePrecise.QuadPart || v7 == -1LL )
  {
    v4 = 1;
    v7 = -2LL;
  }
  v8 = 0LL;
  if ( (*(_BYTE *)(v6 + 129) & 0x10) != 0 )
  {
    v8 = v7 + *(_QWORD *)(v6 + 80) - *(_QWORD *)(v6 + 72);
    if ( v8 < v7 || v8 == -1LL )
      v8 = -2LL;
  }
  *(_QWORD *)(v6 + 72) = v7;
  *(_QWORD *)(v6 + 80) = v8;
  while ( 1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiTimer2CollectionLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    inserted = KiInsertTimer2WithCollectionLockHeld(v6, 0LL, v49);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
    else
      _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
    if ( inserted )
      break;
    if ( v4 )
      goto LABEL_36;
    v10 = *(_QWORD *)(v6 + 72) + *(_QWORD *)(v6 + 88);
    if ( v10 < *(_QWORD *)(v6 + 72) )
    {
      *(_QWORD *)(v6 + 72) = -1LL;
      *(_QWORD *)(v6 + 72) = -1LL;
LABEL_29:
      --*(_QWORD *)(v6 + 72);
      v4 = 1;
      goto LABEL_30;
    }
    *(_QWORD *)(v6 + 72) = v10;
    if ( v10 == -1LL )
      goto LABEL_29;
LABEL_30:
    if ( (*(_BYTE *)(v6 + 129) & 0x10) != 0 )
    {
      v11 = *(_QWORD *)(v6 + 80) + *(_QWORD *)(v6 + 88);
      if ( v11 < *(_QWORD *)(v6 + 80) )
      {
        *(_QWORD *)(v6 + 80) = -1LL;
        *(_QWORD *)(v6 + 80) = -1LL;
        --*(_QWORD *)(v6 + 80);
      }
      else
      {
        *(_QWORD *)(v6 + 80) = v11;
        if ( v11 == -1LL )
          --*(_QWORD *)(v6 + 80);
      }
    }
  }
  v50 = 1;
LABEL_36:
  v5 = v51;
LABEL_37:
  v12 = *(_BYTE *)v6;
  *(_DWORD *)(v6 + 4) = 1;
  if ( (v12 & 0x7F) == 0x19 )
  {
    v13 = *(_QWORD **)(v6 + 8);
    if ( v13 != (_QWORD *)(v6 + 8) )
    {
      while ( 1 )
      {
        v14 = (__int64)v13;
        v13 = (_QWORD *)*v13;
        v15 = *(_QWORD *)v14;
        v16 = *(_QWORD **)(v14 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = *(_BYTE *)(v14 + 16);
        if ( v17 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v5, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
          {
            v18 = (*(_DWORD *)(v6 + 4))-- == 1;
            if ( v18 )
              goto LABEL_105;
          }
        }
        else if ( v17 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          v19 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)v14 = 0LL;
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v22 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v14, v22);
          }
          v23 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v19, 7u) )
          {
            do
            {
              if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v23);
            }
            while ( (*(_DWORD *)v19 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v19, 7u) );
          }
          if ( *(_QWORD *)(v19 + 16) == v19 + 8
            || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v19 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)CurrentPrcb, v19, v14) )
          {
            ++*(_DWORD *)(v19 + 4);
            v24 = *(__int64 **)(v19 + 32);
            *(_QWORD *)v14 = v19 + 24;
            *(_QWORD *)(v14 + 8) = v24;
            if ( *v24 != v19 + 24 )
              __fastfail(3u);
            *v24 = v14;
            *(_QWORD *)(v19 + 32) = v14;
          }
          _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
          v18 = (*(_DWORD *)(v6 + 4))-- == 1;
          if ( v18 )
            goto LABEL_105;
        }
        else
        {
          KiTryUnwaitThread(v5, v14, 256LL, 0LL);
        }
        if ( v13 == (_QWORD *)(v6 + 8) )
          goto LABEL_105;
        v5 = v51;
      }
    }
    goto LABEL_105;
  }
  v25 = *(_QWORD **)(v6 + 8);
  v26 = (_QWORD *)(v6 + 8);
  if ( v25 == (_QWORD *)(v6 + 8) )
    goto LABEL_104;
  while ( 2 )
  {
    v27 = (__int64)v25;
    v25 = (_QWORD *)*v25;
    v28 = *(_BYTE *)(v27 + 16);
    if ( v28 == 1 )
    {
      v29 = *(unsigned __int16 *)(v27 + 18);
      goto LABEL_99;
    }
    if ( v28 == 2 )
    {
      *(_BYTE *)(v27 + 17) = 5;
      v30 = *(_QWORD *)(v27 + 24);
      *(_QWORD *)v27 = 0LL;
      __writecr8(2uLL);
      v31 = KeGetCurrentPrcb();
      v32 = v31->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v33 = v32->WaitBlockFill6[68] == 2 && v32->NextProcessor == KeGetPcr()->Prcb.Number;
        EtwTraceEnqueueWork(v31->CurrentThread, v27, v33);
      }
      v34 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v30, 7u) )
      {
        do
        {
          if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v34);
        }
        while ( (*(_DWORD *)v30 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v30, 7u) );
      }
      if ( *(_QWORD *)(v30 + 16) == v30 + 8
        || *(_DWORD *)(v30 + 40) >= *(_DWORD *)(v30 + 44)
        || v32->Queue == (_DISPATCHER_HEADER *volatile)v30 && v32->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v31, v30, v27) )
      {
        ++*(_DWORD *)(v30 + 4);
        v35 = *(__int64 **)(v30 + 32);
        *(_QWORD *)v27 = v30 + 24;
        *(_QWORD *)(v27 + 8) = v35;
        if ( *v35 != v30 + 24 )
          __fastfail(3u);
        *v35 = v27;
        *(_QWORD *)(v30 + 32) = v27;
      }
      _InterlockedAnd((volatile signed __int32 *)v30, 0xFFFFFF7F);
    }
    else
    {
      v29 = 256LL;
LABEL_99:
      KiTryUnwaitThread(v5, v27, v29, 0LL);
    }
    if ( v25 != v26 )
    {
      v5 = v51;
      continue;
    }
    break;
  }
  v6 = v55;
LABEL_104:
  v26[1] = v26;
  *v26 = v26;
LABEL_105:
  v36 = 0LL;
  v37 = KiWaitAlways ^ _byteswap_uint64(v6 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v6 + 96), KiWaitNever));
  if ( v37 )
  {
    v36 = KiWaitAlways ^ _byteswap_uint64(v6 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v6 + 104), KiWaitNever));
    KiUpdateTimer2Flags(v6, v50 | 0x10, 0LL);
    v38 = v51;
    if ( *(_QWORD *)(v51 + 11400) )
      KiProcessThreadWaitList(v51, 1LL, 0LL, 2LL);
    v39 = v47;
    if ( v47 )
      EtwGetKernelTraceTimestamp(v63, 1073872896LL);
    v40 = v54;
    v41 = ((*v54)++ & 0xF) + 1LL;
    v42 = &v40[4 * v41];
    *(_QWORD *)v42 = v37;
    v42[2] = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v38 + 23328) = 0;
    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v37)(v6, v36);
    v42[3] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)v6);
    v43 = *(_DWORD *)v6;
    do
    {
      v44 = v43;
      v43 = _InterlockedCompareExchange((volatile signed __int32 *)v6, v43 & 0xFFFFEFFF, v43);
    }
    while ( v44 != v43 );
    if ( (v43 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(v6);
  }
  else
  {
    KiUpdateTimer2Flags(v6, v50, 4LL);
    v39 = v47;
  }
  result = (void *)*(unsigned int *)(v53 + 484);
  if ( (_DWORD)BugCheckParameter3 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v37, (unsigned int)BugCheckParameter3, *(unsigned int *)(v53 + 484));
  if ( v39 )
  {
    v60 = v37;
    v61 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v6 ^ _byteswap_uint64(v36 ^ KiWaitAlways), KiWaitNever));
    v59 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v37 ^ _byteswap_uint64(KiWaitAlways ^ v6), KiWaitNever));
    v46 = KiTimer2TypeFlagsToEtwFlags(v48);
    v62 = v46;
    if ( v37 )
    {
      v46 |= 1u;
      v62 = v46;
    }
    if ( v58 )
      v62 = v46 | 2;
    if ( !v37 )
      EtwGetKernelTraceTimestamp(v63, 1073872896LL);
    return EtwTraceTimedEvent(0xF69u, 0x40020000u, (__int64)v57, 56, 4197890, (__int64)v63);
  }
  return result;
}
