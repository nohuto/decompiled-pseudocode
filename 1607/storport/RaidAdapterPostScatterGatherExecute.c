/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C0005790
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0003924 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C0005720 (RaidpAdapterContinueScatterGather.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0002CE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0002EC4 (RaidAdapterAcquireInterruptLock.c)
 *     RaidLogGetParm4 @ 0x1C0005C10 (RaidLogGetParm4.c)
 *     RaAllocateConcurrentChannelToken @ 0x1C0019794 (RaAllocateConcurrentChannelToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     DbgGetAddressLongFromXrb @ 0x1C0026258 (DbgGetAddressLongFromXrb.c)
 *     RaidAdapterRequestComplete @ 0x1C0027AF8 (RaidAdapterRequestComplete.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 Parm4; // rbx
  __int64 v11; // rax
  unsigned int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int32 v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, _QWORD); // rax
  char v23; // bl
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbx
  char v30; // r15
  unsigned __int32 v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 ConcurrentChannelToken; // rax
  LARGE_INTEGER v37; // rax
  unsigned int AddressLongFromXrb; // eax
  LARGE_INTEGER v39; // rax
  __int64 v40; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = *(_QWORD *)(a2 + 224);
  v4 = 0;
  *(_QWORD *)(a2 + 216) = a1;
  v6 = *(_QWORD *)(a2 + 168);
  v7 = a1;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  LOBYTE(a1) = *(_BYTE *)(v6 + 2);
  if ( (_BYTE)a1 == 40 )
  {
    LODWORD(a1) = *(_DWORD *)(v6 + 20);
    v8 = *(unsigned int *)(v6 + 24);
  }
  else
  {
    v8 = *(unsigned int *)(v6 + 12);
    LODWORD(a1) = (unsigned __int8)a1;
  }
  if ( !v3 )
  {
    if ( !*(_DWORD *)(v7 + 812) || (unsigned int)(a1 - 36) <= 1 || (*(_BYTE *)(a2 + 17) & 8) != 0 )
      goto LABEL_7;
LABEL_75:
    *(_BYTE *)(v6 + 3) = 5;
    LOBYTE(v8) = 1;
    RaidAdapterRequestComplete(v7, a2, v8);
    return 0LL;
  }
  if ( *(int *)(v3 + 428) > 0 )
  {
    if ( (_DWORD)a1 == 19 || (_DWORD)a1 == 32 )
      goto LABEL_7;
    goto LABEL_75;
  }
  if ( *(_BYTE *)(v3 + 436) && (v8 & 0x10) == 0 || *(_BYTE *)(v3 + 437) && (v8 & 0x80000) == 0 )
    goto LABEL_75;
LABEL_7:
  if ( StorEtwLoggingEnabled )
  {
    if ( UseQPCTime )
    {
LABEL_9:
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_10;
    }
    goto LABEL_79;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
      goto LABEL_9;
LABEL_79:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_10;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_10:
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( *(_BYTE *)(v7 + 4450) )
  {
    if ( (qword_1C004F2A0 & 1) != 0 )
    {
      *(_QWORD *)v2 = 0LL;
      Parm4 = RaidLogGetParm4(a2);
      v11 = *(_QWORD *)(a2 + 224);
      v12 = v11
          ? (unsigned __int8)BYTE2(*(_DWORD *)(v11 + 88)) | ((((unsigned __int8)*(_DWORD *)(v11 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v11 + 88))) << 8)
          : 0;
      v13 = *(_QWORD *)(a2 + 216);
      v14 = *(_QWORD *)(a2 + 168);
      v15 = *(_QWORD *)(a2 + 160);
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 5060) && *(_QWORD *)(v13 + 5064) )
        {
          v16 = _InterlockedIncrement((volatile signed __int32 *)(v13 + 5056));
          if ( *(_DWORD *)(v13 + 5060) == 256 )
            v17 = (unsigned __int8)v16;
          else
            v17 = v16 % *(_DWORD *)(v13 + 5060);
          v18 = *(_QWORD *)v2;
          v19 = *(_QWORD *)(v13 + 5064) + 48 * v17;
          *(_DWORD *)v19 = 36;
          if ( !v18 )
            v18 = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v19 + 40) = v18;
          *(_QWORD *)(v19 + 16) = v12;
          *(_QWORD *)(v19 + 8) = v15;
          *(_QWORD *)(v19 + 24) = v14;
          *(_QWORD *)(v19 + 32) = Parm4;
        }
      }
    }
    v20 = *(_QWORD *)(a2 + 160);
    if ( v20 )
      *(_BYTE *)(v20 + 141) = -82;
    v21 = *(_QWORD *)(a2 + 216);
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v21 + 528) + 128LL);
    if ( v22 )
      v23 = v22(*(_QWORD *)(v21 + 536) + 16LL, *(_QWORD *)(a2 + 168));
    else
      v23 = 1;
    if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x2000100) != 0 )
    {
      if ( UseQPCTime )
        v37 = KeQueryPerformanceCounter(0LL);
      else
        v37.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v37;
    }
    if ( !v23 )
      return 0LL;
    v24 = *(_QWORD *)(a2 + 224);
    *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(a2 + 160);
    if ( v24 )
      v25 = (unsigned __int8)BYTE2(*(_DWORD *)(v24 + 88)) | ((((unsigned __int8)*(_DWORD *)(v24 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v24 + 88))) << 8);
    else
      v25 = 0;
    v26 = *(_QWORD *)(a2 + 168);
    v27 = v25;
    if ( *(int *)(v7 + 4744) > 1 )
    {
      ConcurrentChannelToken = RaAllocateConcurrentChannelToken(v7);
      *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = ConcurrentChannelToken;
      *(_QWORD *)(a2 + 24) = ConcurrentChannelToken;
    }
    else if ( *(_DWORD *)(v7 + 688) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 680), (PKLOCK_QUEUE_HANDLE)(v2 + 32));
    }
    else
    {
      *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = RaidAdapterAcquireInterruptLock(v7);
    }
  }
  else
  {
    *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(a2 + 160);
    AddressLongFromXrb = DbgGetAddressLongFromXrb(a2);
    v26 = *(_QWORD *)(a2 + 168);
    v27 = AddressLongFromXrb;
  }
  if ( (qword_1C004F2A0 & 4) != 0 )
    *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = RaidLogGetParm4(a2);
  v28 = *(_QWORD *)(a2 + 160);
  if ( v28 )
    *(_BYTE *)(v28 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  v29 = MEMORY[0xFFFFF78000000014];
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v7 + 528) + 16LL))(
          *(_QWORD *)(v7 + 536) + 16LL,
          *(_QWORD *)(a2 + 168));
  if ( StorEtwLoggingEnabled
    && ((Microsoft_Windows_StorPortEnableBits & 0x100) != 0 || (Microsoft_Windows_StorPortEnableBits & 0x2000000) != 0) )
  {
    if ( UseQPCTime )
      v39 = KeQueryPerformanceCounter(0LL);
    else
      v39.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v39;
  }
  if ( *(_BYTE *)(v7 + 4450) )
  {
    if ( *(int *)(v7 + 4744) > 1 )
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v7 + 4752)
                      + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 8)
                                                           + 16LL) << 6)),
        *(PSLIST_ENTRY *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    }
    else if ( *(_DWORD *)(v7 + 688) )
    {
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v2 + 32));
    }
    else
    {
      RaidAdapterReleaseInterruptLock(v7, *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    }
  }
  if ( (qword_1C004F2A0 & 4) != 0 && *(_DWORD *)(v7 + 5060) && *(_QWORD *)(v7 + 5064) )
  {
    v31 = _InterlockedIncrement((volatile signed __int32 *)(v7 + 5056));
    if ( *(_DWORD *)(v7 + 5060) == 256 )
      v32 = (unsigned __int8)v31;
    else
      v32 = v31 % *(_DWORD *)(v7 + 5060);
    v33 = *(_QWORD *)(v7 + 5064) + 48 * v32;
    *(_DWORD *)v33 = 0;
    if ( v29 )
      *(_QWORD *)(v33 + 40) = v29;
    else
      *(_QWORD *)(v33 + 40) = MEMORY[0xFFFFF78000000014];
    v34 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *(_QWORD *)(v33 + 8) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    *(_QWORD *)(v33 + 32) = v34;
    *(_QWORD *)(v33 + 16) = v27;
    *(_QWORD *)(v33 + 24) = v26;
  }
  if ( !v30 )
    return (unsigned int)-1073741823;
  return v4;
}
