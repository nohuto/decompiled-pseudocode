/*
 * XREFs of ExpDeleteTimer @ 0x1400C1298
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsRemoveVirtualizedTimer @ 0x1400AAC6C (PsRemoveVirtualizedTimer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbp
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v1 = (_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 256) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(a1 + 248);
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, &ExpWakeTimerLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = *v1;
    v11 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v11 != v1 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *v1 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
    if ( v6 )
      PoDestroyReasonContext(v6);
  }
  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
    PsRemoveVirtualizedTimer(v3, (_QWORD *)(a1 + 280));
  return KeCancelTimer((PKTIMER)a1);
}
