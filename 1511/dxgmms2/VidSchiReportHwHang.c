/*
 * XREFs of VidSchiReportHwHang @ 0x1C0023200
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000B6B0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiIncrementContextReference @ 0x1C00101E0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0022E60 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C008A43C (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C008CCC0 (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C008CDB0 (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // esi
  __int64 v9; // r13
  PVOID *v10; // rax
  __int64 v11; // rax
  signed __int64 v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rsi
  signed __int64 v16; // rbx
  signed __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 v44; // rax
  signed __int32 v45[8]; // [rsp+0h] [rbp-69h] BYREF
  unsigned int v46; // [rsp+20h] [rbp-49h]
  unsigned int v47; // [rsp+24h] [rbp-45h] BYREF
  __int64 v48; // [rsp+28h] [rbp-41h]
  signed __int64 v49; // [rsp+30h] [rbp-39h]
  __int64 v50; // [rsp+38h] [rbp-31h]
  signed __int64 v51; // [rsp+40h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  PVOID BackTrace[5]; // [rsp+60h] [rbp-9h] BYREF

  v47 = -1;
  v46 = 0;
  v50 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  v8 = 0;
  v9 = 0LL;
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  v10 = (PVOID *)WdLogNewEntry5_WdWarning();
  v10[3] = BackTrace[0];
  v10[4] = BackTrace[1];
  v10[5] = BackTrace[2];
  v10[6] = BackTrace[3];
  v10[7] = BackTrace[4];
  WdLogEvent5_WdWarning(v10);
  if ( *(_QWORD *)(a1 + 2448) )
  {
    v11 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 2448);
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
        if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, 0LL, &v47) )
          return 0LL;
      }
      v13 = v49;
      goto LABEL_28;
    }
  }
  else if ( a3 != 2 )
  {
    if ( a4 )
      *(_QWORD *)(a1 + 2456) = a4;
    else
      *(_QWORD *)(a1 + 2456) = *(_QWORD *)(a1 + 376);
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 2456) + 88LL), 0LL, 0LL);
    goto LABEL_23;
  }
  KeFlushQueuedDpcs();
  if ( !*(_DWORD *)(a1 + 908) )
    return 0LL;
  v14 = (__int64 *)(a1 + 2456);
  if ( a4 )
  {
    *v14 = a4;
  }
  else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, a1 + 2456) )
  {
    return 0LL;
  }
  v15 = *v14;
  if ( !*(_DWORD *)(v15 + 2720) )
    return 0LL;
  v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 88), 0LL, 0LL);
  v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 112), 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 88), 0LL, 0LL);
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 112), 0LL, 0LL);
  if ( v16 == v13 && v51 == v17 )
  {
    v48 = *(_QWORD *)(v15 + 40);
    v18 = *(unsigned int *)(v15 + 1512);
    v9 = *(_QWORD *)(v15 + 8 * v18 + 1520);
    if ( v9 )
    {
      VidSchiIncrementContextReference(*(_QWORD *)(v15 + 8 * v18 + 1520));
      v50 = *(_QWORD *)(v9 + 104);
    }
    ++*(_DWORD *)(v15 + 444);
    v8 = v46;
  }
  else
  {
    v13 = v49;
    v8 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_23:
  if ( v8 )
    return 0LL;
LABEL_28:
  ++*(_DWORD *)(a1 + 2464);
  v46 = 0;
  v19 = MEMORY[0xFFFFF78000000320];
  v20 = MEMORY[0xFFFFF78000000320] - a2;
  *(_QWORD *)(a1 + 2448) = TdrCreateRecoveryContext();
  v21 = (_QWORD *)WdLogNewEntry5_WdWarning();
  v21[3] = *(_QWORD *)(a1 + 16);
  v21[4] = v19;
  v21[5] = KeGetCurrentThread();
  v21[6] = *(_QWORD *)(a1 + 2448);
  WdLogEvent5_WdWarning(v21);
  v25 = *(_QWORD *)(a1 + 2448);
  if ( v25 )
  {
    *(_DWORD *)(v25 + 16) = a3;
    *(_QWORD *)(v25 + 8) = a1 + 2440;
    if ( !*(_QWORD *)(v25 + 32) )
    {
      v26 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v25 + 32) = v26;
      if ( _InterlockedAdd64((volatile signed __int64 *)(v26 + 24), 1uLL) <= 0 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v26, v22, v23, v24);
        *(_QWORD *)(v27 + 24) = 1141LL;
        WdLogEvent5_WdAssertion(v27);
      }
    }
    if ( !*(_QWORD *)(v25 + 40) && v9 )
    {
      VidSchiIncrementContextReference(v9);
      *(_QWORD *)(v25 + 40) = v9;
    }
    if ( v50 )
    {
      v28 = *(_QWORD *)(v50 + 40);
      if ( v28 )
      {
        if ( *(_QWORD *)(v28 + 8) )
        {
          *(_QWORD *)(v25 + 2792) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 40LL) + 8LL) + 64LL);
          v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 40LL) + 8LL) + 72LL);
          if ( v29 )
            v30 = *(_QWORD *)(v29 + 80);
          else
            v30 = 0LL;
          *(_QWORD *)(v25 + 80) = v30;
        }
      }
    }
    v31 = *(_QWORD *)(v25 + 32);
    *(_DWORD *)(v25 + 132) = 20515;
    *(_DWORD *)(v25 + 136) = DpiGetDriverVersion(*(_QWORD *)(v31 + 176));
    *(_QWORD *)(v25 + 24) = v20;
    v32 = *(_QWORD *)(a1 + 2456);
    if ( v32 )
      v33 = *(unsigned __int16 *)(v32 + 4);
    else
      v33 = 0;
    *(_DWORD *)(v25 + 48) = v33;
    *(_QWORD *)(v25 + 64) = v48;
    v34 = v47;
    *(_QWORD *)(v25 + 56) = v13;
    *(_DWORD *)(v25 + 72) = v34;
    if ( (_DWORD)v34 != -1 )
    {
      v35 = (unsigned int)v34;
      v36 = *(_QWORD *)(a1 + 8 * v34 + 2592);
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 16);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 40);
          if ( v38 )
          {
            *(_QWORD *)(v25 + 2792) = *(_QWORD *)(v38 + 2632);
            *(_QWORD *)(v25 + 80) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v35 + 2592) + 16LL) + 40LL)
                                              + 2640LL);
          }
        }
      }
    }
    v39 = *(_QWORD *)(v25 + 32);
    *(_DWORD *)(v25 + 76) = 0;
    v40 = *(_QWORD *)(v39 + 440);
    if ( !v40 )
      v40 = *(_QWORD *)(v39 + 296);
    *(_QWORD *)(v25 + 88) = v40;
    if ( TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v25) )
    {
      v41 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v41 + 24) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v41 + 32) = *(_QWORD *)(a1 + 2448);
      WdLogEvent5_WdWarning(v41);
      v42 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 2440) = 1;
      *(_BYTE *)(v42 + 1952) = 0;
      _InterlockedOr(v45, 0);
      *(_BYTE *)(v42 + 1951) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 6464LL) = 1;
      VidSchiBlockDriverCallback(a1);
      *(_DWORD *)(a1 + 36) = 23;
      *(_QWORD *)(a1 + 368) = 0LL;
      if ( v9 )
        VidSchiMarkTdrFaultingDevice(*(_QWORD *)(v9 + 104));
      VidSchiCompleteAllPendingCommand(a1);
      v43 = 1;
      goto LABEL_58;
    }
    v44 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v44 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdWarning(v44);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v25, 0, 1);
    *(_QWORD *)(a1 + 2448) = 0LL;
  }
  v43 = v46;
LABEL_58:
  if ( v9 )
    VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v9, 0);
  return v43;
}
