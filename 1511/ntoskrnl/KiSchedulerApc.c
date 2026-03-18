/*
 * XREFs of KiSchedulerApc @ 0x140029304
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14002A6EC (KiCheckForMaxOverQuotaScb.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiSignalThreadForApc @ 0x140031480 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140031620 (KiInsertQueueApc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiSetProcessorIdle @ 0x1400EC330 (KiSetProcessorIdle.c)
 *     KiRemoveQueueApc @ 0x1400ED928 (KiRemoveQueueApc.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x14061B53C (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x14061B590 (KiSuspendUmsThread.c)
 */

int __fastcall KiSchedulerApc(__int64 a1)
{
  _UNKNOWN **v1; // rax
  bool v3; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v7; // rcx
  char v8; // r15
  KPROCESSOR_MODE v9; // di
  __int64 v10; // rax
  char v11; // si
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  char v14; // si
  struct _KPRCB *v15; // r14
  __int64 v16; // r8
  int v18; // [rsp+38h] [rbp-89h] BYREF
  _BYTE v19[4]; // [rsp+3Ch] [rbp-85h] BYREF
  int v20; // [rsp+40h] [rbp-81h] BYREF
  int v21; // [rsp+44h] [rbp-7Dh] BYREF
  _DWORD v22[40]; // [rsp+48h] [rbp-79h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v3 = (*(_DWORD *)(a1 + 120) & 0x4000) != 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v18) = CurrentIrql;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
    KiAbProcessContextSwitch(a1, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = (_KTHREAD *)KiSelectReadyThreadEx(CurrentPrcb, a1, 0LL)) != 0LL
      || (v7 = *(_QWORD *)(a1 + 104)) != 0
      && CurrentPrcb->ScbOffset + v7
      && (unsigned __int8)KiCheckForMaxOverQuotaScb()
      && (NextThread = CurrentPrcb->IdleThread, KiSetProcessorIdle(CurrentPrcb, 1LL, 1LL), NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, a1);
      KiUpdateThreadState((__int64)CurrentPrcb, NextThread, 2, 1);
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread(CurrentPrcb, a1);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    }
    LODWORD(v1) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( !*(_DWORD *)(a1 + 740) && !v3 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    {
      v8 = 1;
      KiSuspendUmsThread(a1, v19);
    }
    else
    {
      v8 = 0;
    }
    v9 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 144);
      if ( v10 )
      {
        --*(_WORD *)(a1 + 486);
        v9 = *(_BYTE *)(v10 + 368) & 1;
        KiLeaveGuardedRegionUnsafe(a1);
      }
    }
    v11 = *(_BYTE *)(a1 + 194);
    if ( v11 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, &v18);
      v11 = *(_BYTE *)(a1 + 194);
      v12 = (unsigned __int8)v18;
      *(_BYTE *)(a1 + 194) = 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v12);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    LODWORD(v1) = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v9, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v11 )
    {
      KiAcquireThreadLockRaiseToDpc(a1, &v18);
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) = 1;
      *(_QWORD *)(a1 + 64) = 0LL;
      LODWORD(v1) = (unsigned __int8)v18;
      __writecr8((unsigned __int8)v18);
    }
    if ( v8 )
      LODWORD(v1) = KiResumeUmsThread(a1, v19);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
    {
      memset(v22, 0, 0x98uLL);
      v22[0] = -1073741523;
      v22[1] = 1;
      DbgkForwardException(v22, 0LL);
    }
    v13 = a1 + 648;
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = KeGetCurrentPrcb();
    v20 = 0;
    LOBYTE(v18) = v14;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      *(_BYTE *)(a1 + 729) = 1;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      if ( *(_BYTE *)(a1 + 730) )
        KiRemoveQueueApc(v13);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(v13);
      LOBYTE(v16) = v14;
      KiSignalThreadForApc(v15, a1 + 648, v16);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    LODWORD(v1) = KiExitDispatcher((_DWORD)v15, 0, 1, 0, v14);
  }
  return (int)v1;
}
