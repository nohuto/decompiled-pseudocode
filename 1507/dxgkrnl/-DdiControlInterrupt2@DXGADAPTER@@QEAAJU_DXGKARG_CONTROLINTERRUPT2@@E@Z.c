/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0001FB0
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C001D030 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C007829C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C0078D50 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, __int64 a3)
{
  char v3; // bl
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 InterruptState; // rcx
  __int64 ThreadWin32Thread; // rax
  signed __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned __int8 v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  struct _DXGKARG_CONTROLINTERRUPT2 v31; // [rsp+78h] [rbp+28h]

  v31 = a2;
  v3 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q(this, &EventProfilerEnter, a3, 5054LL);
    a2.InterruptType = v31.InterruptType;
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v3 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 2856, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v23 = *((unsigned int *)this + 718);
        if ( (_DWORD)v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v5, &EventBlockThread, v6, v23);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 2856, 0LL);
    }
    *((_QWORD *)this + 358) = KeGetCurrentThread();
  }
  v7 = *((_QWORD *)this + 248);
  if ( !v7
    || !*(_QWORD *)(v7 + 384)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v7 + 376) + 8LL) + 72LL))() )
  {
    if ( !KeReadStateEvent((PRKEVENT)this + 8) )
      KeWaitForSingleObject((char *)this + 192, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 27), 1u);
  }
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v24 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v24);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
      goto LABEL_18;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
LABEL_18:
    v12 = 0;
    goto LABEL_19;
  }
  v12 = *(_DWORD *)(v9 + 136);
LABEL_19:
  v13 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 94))(*((_QWORD *)this + 28), v31);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v25[3] = 275LL;
    v25[4] = 16LL;
    v25[5] = this;
    v25[6] = CurrentIrql;
    v26 = KeGetCurrentIrql();
    v25[7] = v26;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v12 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v27[3] = 275LL;
    v27[4] = 25LL;
    v28 = *(int *)(v9 + 136);
    v27[7] = 0LL;
    v27[5] = v28;
    v27[6] = v12;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( (_DWORD)v13 != -1073741823 && (_DWORD)v13 != -1073741822 && (_DWORD)v13 )
  {
    v29 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v29 + 24) = v13;
    WdLogEvent5_WdError(v29);
  }
  v14 = *((_QWORD *)this + 248);
  if ( !v14
    || !*(_QWORD *)(v14 + 384)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v14 + 376) + 8LL) + 72LL))() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 27));
    KeLeaveCriticalRegion();
  }
  if ( v31.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v13 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 360, &LockHandle);
      *((_DWORD *)this + 672) = v31.InterruptState;
      if ( v31.InterruptState == DXGK_INTERRUPT_DISABLE )
        *((_QWORD *)this + 362) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v31.InterruptState != 2 )
      {
        LOBYTE(v15) = v31.InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v15);
      }
    }
    *((_QWORD *)this + 358) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 2856, 0LL);
    KeLeaveCriticalRegion();
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v16[3] = v13;
  v16[4] = v31.InterruptType;
  InterruptState = v31.InterruptState;
  v16[5] = v31.InterruptState;
  if ( (int)v13 >= 0 && v31 == 0x100000003LL )
  {
    v21 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 363,
            *((_QWORD *)this + 363),
            *((_QWORD *)this + 363));
    if ( v21 )
      v22 = -6 * v21;
    else
      v22 = -1000002LL;
    DXGADAPTER::AcquireReference(this);
    KeSetTimer((PKTIMER)((char *)this + 2696), (LARGE_INTEGER)v22, (PKDPC)((char *)this + 2760));
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(InterruptState, &EventProfilerExit, v17, 5054LL);
  return (unsigned int)v13;
}
