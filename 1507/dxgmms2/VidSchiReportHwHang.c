/*
 * XREFs of VidSchiReportHwHang @ 0x1C001DFB4
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C0032B80 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001880 (VidSchiDecrementContextReference.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C00051EC (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiIncrementContextReference @ 0x1C0006980 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C001201C (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C001DBE4 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C0076564 (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C007A9F0 (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C007AAE0 (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3, unsigned int *a4)
{
  int v8; // esi
  __int64 v9; // r13
  PVOID *v10; // rax
  __int64 v11; // rax
  signed __int64 v13; // rdi
  unsigned int **v14; // rsi
  unsigned int *v15; // rsi
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
  DXGADAPTER *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // ebx
  __int64 v42; // rax
  unsigned int v43; // [rsp+24h] [rbp-45h] BYREF
  signed __int64 v44; // [rsp+28h] [rbp-41h]
  __int64 v45; // [rsp+30h] [rbp-39h]
  __int64 v46; // [rsp+38h] [rbp-31h]
  signed __int64 v47; // [rsp+40h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  PVOID BackTrace[5]; // [rsp+60h] [rbp-9h] BYREF

  v43 = -1;
  v46 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
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
  if ( *((_QWORD *)a1 + 311) )
  {
    v11 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v11 + 24) = *((_QWORD *)a1 + 2);
    *(_QWORD *)(v11 + 32) = *((_QWORD *)a1 + 311);
    WdLogEvent5_WdWarning(v11);
    return 1LL;
  }
  if ( ((a3 - 1) & 0xFFFFFFF6) != 0 )
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        if ( a4 )
        {
          v43 = *a4;
        }
        else if ( !(unsigned int)VidSchiCheckFlipQueueTimeout((KSPIN_LOCK *)a1, 0LL, &v43) )
        {
          return 0LL;
        }
      }
      v13 = v44;
      goto LABEL_30;
    }
  }
  else if ( a3 != 2 )
  {
    if ( a4 )
      *((_QWORD *)a1 + 312) = a4;
    else
      *((_QWORD *)a1 + 312) = *((_QWORD *)a1 + 46);
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)a1 + 312) + 88LL), 0LL, 0LL);
    goto LABEL_23;
  }
  KeFlushQueuedDpcs();
  if ( !*((_DWORD *)a1 + 225) )
    return 0LL;
  v14 = (unsigned int **)((char *)a1 + 2496);
  if ( a4 )
  {
    *v14 = a4;
  }
  else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, (char *)a1 + 2496) )
  {
    return 0LL;
  }
  v15 = *v14;
  if ( !v15[712] )
    return 0LL;
  v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v15 + 11, 0LL, 0LL);
  v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v15 + 14, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v15 + 11, 0LL, 0LL);
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v15 + 14, 0LL, 0LL);
  if ( v16 == v13 && v47 == v17 )
  {
    v45 = *((_QWORD *)v15 + 5);
    v18 = v15[370];
    v9 = *(_QWORD *)&v15[2 * v18 + 372];
    if ( v9 )
    {
      VidSchiIncrementContextReference(*(_QWORD *)&v15[2 * v18 + 372]);
      v46 = *(_QWORD *)(v9 + 104);
    }
    ++v15[103];
    v8 = 0;
  }
  else
  {
    v13 = v44;
    v8 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_23:
  if ( v8 )
    return 0LL;
LABEL_30:
  ++*((_DWORD *)a1 + 626);
  v19 = MEMORY[0xFFFFF78000000320];
  v20 = MEMORY[0xFFFFF78000000320] - a2;
  *((_QWORD *)a1 + 311) = TdrCreateRecoveryContext();
  v21 = (_QWORD *)WdLogNewEntry5_WdWarning();
  v21[3] = *((_QWORD *)a1 + 2);
  v21[4] = v19;
  v21[5] = KeGetCurrentThread();
  v21[6] = *((_QWORD *)a1 + 311);
  WdLogEvent5_WdWarning(v21);
  v25 = *((_QWORD *)a1 + 311);
  if ( v25 )
  {
    *(_DWORD *)(v25 + 16) = a3;
    *(_QWORD *)(v25 + 8) = (char *)a1 + 2480;
    if ( !*(_QWORD *)(v25 + 32) )
    {
      v26 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
      *(_QWORD *)(v25 + 32) = v26;
      DXGADAPTER::AcquireReference(v26, v22, v23, v24);
    }
    if ( !*(_QWORD *)(v25 + 40) && v9 )
    {
      VidSchiIncrementContextReference(v9);
      *(_QWORD *)(v25 + 40) = v9;
    }
    if ( v46 )
    {
      v27 = *(_QWORD *)(v46 + 40);
      if ( v27 )
      {
        if ( *(_QWORD *)(v27 + 8) )
        {
          *(_QWORD *)(v25 + 2792) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 40LL) + 8LL) + 64LL);
          v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 104) + 40LL) + 8LL) + 72LL);
          if ( v28 )
            v29 = *(_QWORD *)(v28 + 80);
          else
            v29 = 0LL;
          *(_QWORD *)(v25 + 80) = v29;
        }
      }
    }
    v30 = *(_QWORD *)(v25 + 32);
    *(_DWORD *)(v25 + 132) = 20514;
    *(_DWORD *)(v25 + 136) = DpiGetDriverVersion(*(_QWORD *)(v30 + 176));
    *(_QWORD *)(v25 + 24) = v20;
    v31 = *((_QWORD *)a1 + 312);
    if ( v31 )
      v32 = *(unsigned __int16 *)(v31 + 4);
    else
      v32 = 0;
    *(_DWORD *)(v25 + 48) = v32;
    *(_QWORD *)(v25 + 64) = v45;
    v33 = v43;
    *(_QWORD *)(v25 + 56) = v13;
    *(_DWORD *)(v25 + 72) = v33;
    if ( (_DWORD)v33 != -1 )
    {
      v34 = (unsigned int)v33;
      v35 = *((_QWORD *)a1 + v33 + 330);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 8);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 40);
          if ( v37 )
          {
            *(_QWORD *)(v25 + 2792) = *(_QWORD *)(v37 + 2632);
            *(_QWORD *)(v25 + 80) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + v34 + 330) + 8LL) + 40LL)
                                              + 2640LL);
          }
        }
      }
    }
    v38 = *(_QWORD *)(v25 + 32);
    *(_DWORD *)(v25 + 76) = 0;
    v39 = *(_QWORD *)(v38 + 440);
    if ( !v39 )
      v39 = *(_QWORD *)(v38 + 296);
    *(_QWORD *)(v25 + 88) = v39;
    if ( TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v25) )
    {
      v40 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v40 + 24) = *((_QWORD *)a1 + 2);
      *(_QWORD *)(v40 + 32) = *((_QWORD *)a1 + 311);
      WdLogEvent5_WdWarning(v40);
      v41 = 1;
      *((_DWORD *)a1 + 620) = 1;
      VidSchiBlockDriverCallback(a1);
      *((_DWORD *)a1 + 9) = 23;
      *((_QWORD *)a1 + 45) = 0LL;
      if ( v9 )
        VidSchiMarkTdrFaultingDevice(*(_QWORD *)(v9 + 104));
      VidSchiCompleteAllPendingCommand(a1);
      goto LABEL_59;
    }
    v42 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v42 + 24) = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdWarning(v42);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v25, 0, 1);
    *((_QWORD *)a1 + 311) = 0LL;
  }
  v41 = 0;
LABEL_59:
  if ( v9 )
    VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v9, 0);
  return v41;
}
