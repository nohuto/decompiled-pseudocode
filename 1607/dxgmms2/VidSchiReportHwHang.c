/*
 * XREFs of VidSchiReportHwHang @ 0x1C0027844
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C0001CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiClearFlipDevice @ 0x1C0002C18 (VidSchiClearFlipDevice.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000A140 (VidSchiCheckFlipQueueTimeout.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiUnwaitAllContexts @ 0x1C00258D4 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C00273D0 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C009FC04 (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C00A26DC (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00A27CC (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // r12d
  PVOID *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  signed __int64 v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // r14
  signed __int64 v16; // rbx
  signed __int64 v17; // r13
  signed __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 TimeIncrement; // r12
  __int64 v23; // r14
  LARGE_INTEGER v24; // r13
  union _LARGE_INTEGER v25; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v27; // r15
  _QWORD *v28; // rax
  union _LARGE_INTEGER *v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rax
  struct _VIDSCH_CONTEXT *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // ebx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rax
  signed __int32 v57[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned int v58; // [rsp+20h] [rbp-79h] BYREF
  signed __int64 v59; // [rsp+28h] [rbp-71h]
  int v60; // [rsp+30h] [rbp-69h]
  struct _VIDSCH_CONTEXT *v61; // [rsp+38h] [rbp-61h]
  int v62; // [rsp+40h] [rbp-59h]
  __int64 v63; // [rsp+48h] [rbp-51h]
  __int64 v64; // [rsp+50h] [rbp-49h]
  __int64 v65; // [rsp+58h] [rbp-41h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-31h] BYREF
  __int64 v68; // [rsp+80h] [rbp-19h] BYREF
  int v69; // [rsp+88h] [rbp-11h]
  PVOID BackTrace[5]; // [rsp+90h] [rbp-9h] BYREF

  v58 = -1;
  v62 = a3;
  v65 = a1;
  v61 = 0LL;
  v64 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  v60 = 0;
  v8 = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  v9 = (PVOID *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
  v9[3] = BackTrace[0];
  v9[4] = BackTrace[1];
  v9[5] = BackTrace[2];
  v9[6] = BackTrace[3];
  v9[7] = BackTrace[4];
  WdLogEvent5_WdWarning(v9);
  if ( *(_QWORD *)(a1 + 2808) )
  {
    v11 = WdLogNewEntry5_WdWarning(v10);
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 2808);
    WdLogEvent5_WdWarning(v11);
    return 1LL;
  }
  if ( ((a3 - 1) & 0xFFFFFFF6) != 0 )
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        KeFlushQueuedDpcs();
        if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, 0LL, &v58) )
          return 0LL;
        if ( v58 < 0x10 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
          v20 = *(_QWORD *)(a1 + 8LL * v58 + 2968);
          if ( v20 )
            v60 = *(_DWORD *)(v20 + 46912);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      v13 = v59;
      goto LABEL_32;
    }
  }
  else if ( a3 != 2 )
  {
    if ( a4 )
      *(_QWORD *)(a1 + 2816) = a4;
    else
      *(_QWORD *)(a1 + 2816) = *(_QWORD *)(a1 + 408);
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 2816) + 96LL), 0LL, 0LL);
    goto LABEL_23;
  }
  KeFlushQueuedDpcs();
  if ( !*(_DWORD *)(a1 + 944) )
    return 0LL;
  v14 = (__int64 *)(a1 + 2816);
  if ( a4 )
  {
    *v14 = a4;
  }
  else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, a1 + 2816) )
  {
    return 0LL;
  }
  v15 = *v14;
  if ( !*(_DWORD *)(v15 + 2760) )
    return 0LL;
  v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 96), 0LL, 0LL);
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 120), 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 96), 0LL, 0LL);
  v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 120), 0LL, 0LL);
  if ( v16 == v13 && v17 == v18 )
  {
    v63 = *(_QWORD *)(v15 + 40);
    v19 = *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v15 + 1552) + 1560);
    v61 = (struct _VIDSCH_CONTEXT *)v19;
    if ( v19 )
    {
      VidSchiIncrementContextReference(v19);
      v64 = *(_QWORD *)(v19 + 104);
    }
    ++*(_DWORD *)(v15 + 484);
  }
  else
  {
    v13 = v59;
    v8 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_23:
  if ( v8 )
    return 0LL;
LABEL_32:
  ++*(_DWORD *)(a1 + 2824);
  LODWORD(v59) = 0;
  v21 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v23 = v21 - a2;
  v24 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v25.QuadPart = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v27 = v65;
  *(_QWORD *)(v65 + 2808) = RecoveryContext;
  v28 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
  v28[3] = *(_QWORD *)(v27 + 16);
  v28[4] = v21;
  v28[5] = TimeIncrement;
  v28[6] = KeGetCurrentThread();
  v28[7] = *(_QWORD *)(v27 + 2808);
  WdLogEvent5_WdWarning(v28);
  v29 = (union _LARGE_INTEGER *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
  v29[3] = *(union _LARGE_INTEGER *)(v27 + 16);
  v29[4] = v24;
  v29[5] = PerformanceFrequency;
  v29[6] = v25;
  WdLogEvent5_WdWarning(v29);
  v30 = *(_QWORD *)(v27 + 2808);
  if ( v30 )
  {
    v31 = v62;
    *(_QWORD *)(v30 + 8) = v27 + 2800;
    *(_DWORD *)(v30 + 16) = v31;
    if ( !*(_QWORD *)(v30 + 32) )
    {
      v32 = *(_QWORD *)(v27 + 16);
      *(_QWORD *)(v30 + 32) = v32;
      _InterlockedIncrement64((volatile signed __int64 *)(v32 + 24));
      *(_QWORD *)(v30 + 40) = -1LL;
    }
    v33 = v61;
    if ( !*(_QWORD *)(v30 + 48) && v61 )
    {
      VidSchiIncrementContextReference((__int64)v61);
      *(_QWORD *)(v30 + 48) = v33;
    }
    if ( v64 )
    {
      v34 = *(_QWORD *)(v64 + 40);
      if ( v34 )
      {
        if ( *(_QWORD *)(v34 + 8) )
        {
          *(_QWORD *)(v30 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 13) + 40LL) + 8LL) + 56LL);
          v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 13) + 40LL) + 8LL) + 64LL);
          if ( v35 )
            v36 = *(_QWORD *)(v35 + 80);
          else
            v36 = 0LL;
          *(_QWORD *)(v30 + 96) = v36;
        }
      }
    }
    v37 = *(_QWORD *)(v30 + 32);
    *(_DWORD *)(v30 + 148) = 24579;
    *(_DWORD *)(v30 + 152) = DpiGetDriverVersion(*(_QWORD *)(v37 + 192));
    *(_QWORD *)(v30 + 24) = v23;
    v39 = *(_QWORD *)(v27 + 2816);
    if ( v39 )
      v40 = *(unsigned __int16 *)(v39 + 4);
    else
      v40 = 0;
    *(_DWORD *)(v30 + 56) = v40;
    *(_QWORD *)(v30 + 72) = v63;
    v41 = v58;
    *(_QWORD *)(v30 + 64) = v13;
    *(_DWORD *)(v30 + 80) = v41;
    if ( (_DWORD)v41 != -1 )
    {
      v38 = (unsigned int)v41;
      v42 = *(_QWORD *)(v27 + 8 * v41 + 2968);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 16);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 40);
          if ( v44 )
          {
            *(_QWORD *)(v30 + 2808) = *(_QWORD *)(v44 + 2632);
            v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 8 * v38 + 2968) + 16LL) + 40LL) + 2640LL);
            *(_QWORD *)(v30 + 96) = v38;
          }
        }
      }
    }
    v45 = v60;
    *(_DWORD *)(v30 + 84) = 0;
    *(_DWORD *)(v30 + 88) = v45;
    if ( (_DWORD)v45 )
    {
      v46 = WdLogNewEntry5_WdWarning(v38);
      *(_QWORD *)(v46 + 24) = *(_QWORD *)(v27 + 16);
      *(_QWORD *)(v46 + 32) = v45;
      WdLogEvent5_WdWarning(v46);
    }
    v47 = *(_QWORD *)(v30 + 32);
    v48 = *(_QWORD *)(v47 + 456);
    if ( !v48 )
      v48 = *(_QWORD *)(v47 + 312);
    *(_QWORD *)(v30 + 104) = v48;
    if ( TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v30) )
    {
      v50 = WdLogNewEntry5_WdWarning(v49);
      *(_QWORD *)(v50 + 24) = *(_QWORD *)(v27 + 16);
      *(_QWORD *)(v50 + 32) = *(_QWORD *)(v27 + 2808);
      WdLogEvent5_WdWarning(v50);
      *(_DWORD *)(v27 + 2800) = 1;
      VidSchiBlockDriverCallback(v27);
      *(_DWORD *)(v27 + 36) = 23;
      *(_QWORD *)(v27 + 400) = 0LL;
      if ( v33 )
        VidSchiMarkTdrFaultingDevice(*((_QWORD *)v33 + 13));
      if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 192LL)) >= 0x6002 )
      {
        v51 = 0;
        if ( *(_DWORD *)(v27 + 56) )
        {
          while ( 1 )
          {
            v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 224) + 8LL * v51) + 96LL);
            if ( *(_DWORD *)(v52 + 2760) )
            {
              v53 = *(unsigned __int16 *)(v52 + 4);
              v68 = 0LL;
              v69 = 0;
              HIDWORD(v68) = *(unsigned __int16 *)(*(_QWORD *)(v27 + 8 * v53 + 408) + 6LL);
              LODWORD(v68) = *(unsigned __int16 *)(*(_QWORD *)(v27 + 8 * v53 + 408) + 8LL);
              if ( ((int (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[30])(*(_QWORD *)(v27 + 8), &v68) < 0 )
                break;
            }
            if ( ++v51 >= *(_DWORD *)(v27 + 56) )
              goto LABEL_67;
          }
          *(_BYTE *)(v27 + 2828) |= 4u;
        }
      }
LABEL_67:
      v54 = *(_QWORD *)(v27 + 16);
      *(_BYTE *)(v54 + 2092) = 0;
      _InterlockedOr(v57, 0);
      *(_BYTE *)(v54 + 2091) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) + 408LL) + 6496LL) = 1;
      VidSchiCompleteAllPendingCommand(v27);
      VidSchiUnwaitAllContexts(v27);
      VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v27, 0LL, 9);
      v55 = 1;
      goto LABEL_70;
    }
    v56 = WdLogNewEntry5_WdWarning(v49);
    *(_QWORD *)(v56 + 24) = *(_QWORD *)(v27 + 16);
    WdLogEvent5_WdWarning(v56);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v30, 0, 1);
    *(_QWORD *)(v27 + 2808) = 0LL;
  }
  v55 = v59;
LABEL_70:
  if ( v61 )
    VidSchiDecrementContextReference(v61, 0);
  return v55;
}
