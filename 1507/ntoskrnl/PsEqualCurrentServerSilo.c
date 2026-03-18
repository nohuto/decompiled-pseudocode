/*
 * XREFs of PsEqualCurrentServerSilo @ 0x140017D40
 * Callers:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     EtwTraceEvent @ 0x14015C274 (EtwTraceEvent.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     WmiQueryTraceInformation @ 0x1405526DC (WmiQueryTraceInformation.c)
 *     SepDeleteLogonSessionTrack @ 0x14056899C (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x140568F80 (SepBlockAccessForLogonSession.c)
 *     EtwWriteErrorLogEntry @ 0x14057C26C (EtwWriteErrorLogEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

bool __fastcall PsEqualCurrentServerSilo(__int64 a1)
{
  __int64 v1; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  volatile signed __int64 *p_Lock; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  bool v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int16 v10; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v11; // rcx

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() >= 2u )
  {
    if ( (PspDebugFlags & 2) != 0 )
      __debugbreak();
    return a1 == 0;
  }
  else
  {
    Process = CurrentThread->Process;
    --CurrentThread->KernelApcDisable;
    p_Lock = (volatile signed __int64 *)&Process[1].Header.Lock;
    v5 = KeAbPreAcquire((ULONG_PTR)&Process[1]);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&Process[1], v5, &Process[1]);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
    if ( v6 == -3LL )
      v6 = Process[2].ActiveProcessors.Bitmap[12];
    while ( v6 && !*(_QWORD *)(v6 + 256) )
      v6 = *(_QWORD *)(v6 + 152);
    while ( v1 && !*(_QWORD *)(v1 + 256) )
      v1 = *(_QWORD *)(v1 + 152);
    v7 = v6 == v1;
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    v10 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v10;
    if ( !v10 )
    {
      v11 = &CurrentThread->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != v11
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v11, v8, v9);
      }
    }
    return v7;
  }
}
