/*
 * XREFs of ExpDeleteTimer @ 0x140065C20
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsRemoveVirtualizedTimer @ 0x140066D90 (PsRemoveVirtualizedTimer.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r15
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int16 v16; // ax

  v4 = (_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 256) )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *(_QWORD *)(a1 + 248);
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL, a4);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v10, &ExpWakeTimerLock);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = *v4;
    v14 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v14 != v4 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    *v4 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    v16 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v15);
    }
    if ( v9 )
      PoDestroyReasonContext(v9);
  }
  v6 = *(_QWORD *)(a1 + 272);
  if ( v6 )
    PsRemoveVirtualizedTimer(v6, a1 + 280);
  return KeCancelTimer((PKTIMER)a1);
}
