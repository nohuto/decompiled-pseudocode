/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C00025F4
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C001D240 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0079BF0 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C007A36C (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 InterruptState; // rcx
  signed __int64 v17; // rax
  __int64 v18; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  struct _DXGKARG_CONTROLINTERRUPT2 v27; // [rsp+68h] [rbp+28h]

  v27 = a2;
  v3 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q(this, &EventProfilerEnter, a3, 5054LL);
    a2.InterruptType = v27.InterruptType;
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v3 )
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 2872));
  DXGADAPTER::AcquireDdiSync(this, 1LL);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_11;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v20 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v6 = 0LL;
      goto LABEL_11;
    }
    v6 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
LABEL_11:
    v9 = 0;
    goto LABEL_12;
  }
  v9 = *(_DWORD *)(v6 + 136);
LABEL_12:
  v10 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 94))(*((_QWORD *)this + 28), v27);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v6 && *(_DWORD *)(v6 + 136) != v9 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v23[3] = 275LL;
    v23[4] = 25LL;
    v24 = *(int *)(v6 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v9;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( (_DWORD)v10 != -1073741823 && (_DWORD)v10 != -1073741822 && (_DWORD)v10 )
  {
    v25 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v25 + 24) = v10;
    WdLogEvent5_WdError(v25);
  }
  v11 = *((_QWORD *)this + 249);
  if ( !v11
    || !*(_QWORD *)(v11 + 408)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v11 + 400) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 250) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 27));
    KeLeaveCriticalRegion();
  }
  if ( v27.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v10 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 362, &LockHandle);
      *((_DWORD *)this + 676) = v27.InterruptState;
      if ( v27.InterruptState == DXGK_INTERRUPT_DISABLE )
        *((_QWORD *)this + 364) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v27.InterruptState != 2 )
      {
        LOBYTE(v12) = v27.InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v12);
      }
    }
    *((_QWORD *)this + 360) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 2872, 0LL);
    KeLeaveCriticalRegion();
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v13[3] = v10;
  v13[4] = v27.InterruptType;
  InterruptState = v27.InterruptState;
  v13[5] = v27.InterruptState;
  if ( (int)v10 >= 0 && v27 == 0x100000003LL )
  {
    v17 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 365,
            *((_QWORD *)this + 365),
            *((_QWORD *)this + 365));
    if ( v17 )
      v18 = -6 * v17;
    else
      v18 = -1000002LL;
    DXGADAPTER::AcquireReference(this);
    KeSetTimer((PKTIMER)((char *)this + 2712), (LARGE_INTEGER)v18, (PKDPC)((char *)this + 2776));
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(InterruptState, &EventProfilerExit, v14, 5054LL);
  return (unsigned int)v10;
}
