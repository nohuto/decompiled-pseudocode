/*
 * XREFs of ExpDeleteTimer @ 0x140090C2C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     PsRemoveVirtualizedTimer @ 0x1400EB890 (PsRemoveVirtualizedTimer.c)
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

  v1 = (_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 256) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(a1 + 248);
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, (ULONG_PTR)&ExpWakeTimerLock);
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
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v6 )
      PoDestroyReasonContext(v6);
  }
  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
    PsRemoveVirtualizedTimer(v3, a1 + 280);
  return KeCancelTimer((PKTIMER)a1);
}
