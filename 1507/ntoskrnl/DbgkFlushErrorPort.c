/*
 * XREFs of DbgkFlushErrorPort @ 0x140553854
 * Callers:
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     DbgkpDeleteErrorPort @ 0x1406691C4 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1406691E8 (DbgkpRemoveErrorPort.c)
 */

void __fastcall DbgkFlushErrorPort(PVOID a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r9
  __int16 v9; // ax

  if ( a1 == DbgkpErrorProcess )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&DbgkpErrorPortLock, v7, (ULONG_PTR)&DbgkpErrorPortLock, v8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    if ( a1 == DbgkpErrorProcess )
    {
      v6 = (volatile signed __int32 *)DbgkpErrorPort;
      _InterlockedIncrement((volatile signed __int32 *)DbgkpErrorPort);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&DbgkpErrorPortLock);
    KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
    v9 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v6 )
    {
      DbgkpRemoveErrorPort(CurrentThread, v6);
      if ( !_InterlockedDecrement(v6) )
        DbgkpDeleteErrorPort(v6);
    }
  }
}
