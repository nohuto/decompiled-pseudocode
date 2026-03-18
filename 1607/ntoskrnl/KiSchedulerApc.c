/*
 * XREFs of KiSchedulerApc @ 0x1400CB720
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KiDeliverApc @ 0x14005DBD0 (KiDeliverApc.c)
 *     KiSelectReadyThreadEx @ 0x14005DF30 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadState @ 0x140091CEC (KiUpdateThreadState.c)
 *     KiSetProcessorIdle @ 0x1400AEA40 (KiSetProcessorIdle.c)
 *     KiRemoveQueueApc @ 0x1400AF3C0 (KiRemoveQueueApc.c)
 *     KiSignalThreadForApc @ 0x1400CA134 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400CA2B4 (KiInsertQueueApc.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CEDEC (KiAcquireThreadLockRaiseToDpc.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400D02E8 (KiCheckForMaxOverQuotaScb.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400D0C00 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140165CD0 (KiSwapContext.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     DbgkForwardException @ 0x1404DBC50 (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x140650858 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x1406508AC (KiSuspendUmsThread.c)
 */

void __fastcall KiSchedulerApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 *NextThread; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // r15
  KPROCESSOR_MODE v15; // di
  __int64 v16; // rax
  char v17; // si
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned __int8 v21; // si
  struct _KPRCB *v22; // r14
  _BYTE v23[4]; // [rsp+38h] [rbp-89h] BYREF
  int v24; // [rsp+3Ch] [rbp-85h] BYREF
  _BYTE v25[4]; // [rsp+40h] [rbp-81h] BYREF
  int v26; // [rsp+44h] [rbp-7Dh] BYREF
  _DWORD v27[40]; // [rsp+48h] [rbp-79h] BYREF

  v5 = (*(_DWORD *)(a1 + 120) & 0x4000) != 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v23[0] = CurrentIrql;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
    KiAbProcessContextSwitch(a1, 0, a3, a4);
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (unsigned __int64 *)CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, (_KTHREAD *)a1, 0LL)) != 0LL
      || (*(_DWORD *)(a1 + 120) & 0x100) == 0
      && (v12 = *(_QWORD *)(a1 + 104)) != 0
      && (v13 = CurrentPrcb->ScbOffset + v12) != 0
      && (unsigned __int8)KiCheckForMaxOverQuotaScb(v13, v9, v10, v11)
      && (NextThread = (unsigned __int64 *)CurrentPrcb->IdleThread,
          KiSetProcessorIdle((__int64)CurrentPrcb, 1, 1),
          NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, a1);
      KiUpdateThreadState((__int64)CurrentPrcb, (__int64)NextThread, 2, 1);
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread(CurrentPrcb, a1);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    }
    __writecr8(CurrentIrql);
  }
  if ( !*(_DWORD *)(a1 + 740) && !v5 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    {
      v14 = 1;
      KiSuspendUmsThread(a1, v25);
    }
    else
    {
      v14 = 0;
    }
    v15 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v16 = *(_QWORD *)(a1 + 144);
      if ( v16 )
      {
        --*(_WORD *)(a1 + 486);
        v15 = *(_BYTE *)(v16 + 368) & 1;
        KiLeaveGuardedRegionUnsafe(a1);
      }
    }
    v17 = *(_BYTE *)(a1 + 194);
    if ( v17 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, v23);
      v17 = *(_BYTE *)(a1 + 194);
      v18 = v23[0];
      *(_BYTE *)(a1 + 194) = 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v18);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v15, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v17 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, v23);
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) = 1;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v23[0]);
    }
    if ( v14 )
      KiResumeUmsThread(a1, v25);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v5 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
    {
      memset(v27, 0, 0x98uLL);
      LOBYTE(v19) = 1;
      v27[0] = -1073741523;
      v27[1] = 1;
      DbgkForwardException(v27, 0LL, v19);
    }
    v20 = a1 + 648;
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v22 = KeGetCurrentPrcb();
    v26 = 0;
    v23[0] = v21;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      *(_BYTE *)(a1 + 729) = 1;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      if ( *(_BYTE *)(a1 + 730) )
        KiRemoveQueueApc(v20);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(v20);
      KiSignalThreadForApc((__int64)v22, a1 + 648, v21);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((__int64)v22, 0LL, 1LL, 0LL, v21);
  }
}
