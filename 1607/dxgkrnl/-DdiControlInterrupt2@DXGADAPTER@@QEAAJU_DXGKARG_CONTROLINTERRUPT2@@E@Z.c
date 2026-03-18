/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0009138
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C0022150 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C009FDF0 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C009FE60 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, __int64 a3)
{
  char v3; // di
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // esi
  int v13; // r14d
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 InterruptState; // rcx
  __int64 ThreadWin32Thread; // rax
  signed __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  LARGE_INTEGER DueTime; // [rsp+80h] [rbp+30h]
  struct _DXGKARG_CONTROLINTERRUPT2 v33; // [rsp+88h] [rbp+38h]

  v33 = a2;
  v3 = a3;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q(this, &EventProfilerEnter, a3, 5054LL);
    a2.InterruptType = v33.InterruptType;
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v3 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 3416, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v24 = *((unsigned int *)this + 858);
        if ( (_DWORD)v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v5, &EventBlockThread, v6, v24);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 3416, 0LL);
    }
    *((_QWORD *)this + 428) = KeGetCurrentThread();
  }
  v7 = *((_QWORD *)this + 267);
  if ( !v7
    || !*(_QWORD *)(v7 + 384)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v7 + 376) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 268) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)this + 208)) )
      KeWaitForSingleObject((char *)this + 208, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 29), 1u);
  }
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_19;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v25 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v25);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
      goto LABEL_19;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
LABEL_19:
    v13 = 0;
    goto LABEL_20;
  }
  v13 = *(_DWORD *)(v10 + 136);
LABEL_20:
  v14 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 96))(*((_QWORD *)this + 30), v33);
  v15 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v15 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = this;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v13 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v28[3] = 275LL;
    v28[4] = 25LL;
    v29 = *(int *)(v10 + 136);
    v28[7] = 0LL;
    v28[5] = v29;
    v28[6] = v13;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( (_DWORD)v14 != -1073741823 && (_DWORD)v14 != -1073741822 && (_DWORD)v14 )
  {
    v30 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v30 + 24) = v14;
    WdLogEvent5_WdError(v30);
  }
  v16 = *((_QWORD *)this + 267);
  if ( !v16
    || !*(_QWORD *)(v16 + 384)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v16 + 376) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 268) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 29));
    KeLeaveCriticalRegion();
  }
  if ( v33.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v14 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 430, &LockHandle);
      *((_DWORD *)this + 812) = v33.InterruptState;
      if ( v33.InterruptState == DXGK_INTERRUPT_DISABLE )
        *((_QWORD *)this + 432) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v33.InterruptState != 2 )
      {
        LOBYTE(v17) = v33.InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v17);
      }
    }
    *((_QWORD *)this + 428) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
    KeLeaveCriticalRegion();
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v18[3] = v14;
  v18[4] = v33.InterruptType;
  InterruptState = v33.InterruptState;
  v18[5] = v33.InterruptState;
  if ( (int)v14 >= 0 && v33 == 0x100000003LL )
  {
    v23 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 433,
            *((_QWORD *)this + 433),
            *((_QWORD *)this + 433));
    if ( v23 )
      DueTime.QuadPart = -6 * v23;
    else
      DueTime.QuadPart = -1000002LL;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    KeSetTimer((PKTIMER)((char *)this + 3256), DueTime, (PKDPC)((char *)this + 3320));
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(InterruptState, &EventProfilerExit, v19, 5054LL);
  return (unsigned int)v14;
}
