/*
 * XREFs of DbgkFlushErrorPort @ 0x1403E7698
 * Callers:
 *     PspExitProcess @ 0x1403E6F28 (PspExitProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     DbgkpDeleteErrorPort @ 0x1405F05F4 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1405F0618 (DbgkpRemoveErrorPort.c)
 */

void __fastcall DbgkFlushErrorPort(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rdi

  if ( a1 == DbgkpErrorProcess )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&DbgkpErrorPortLock, v4, (ULONG_PTR)&DbgkpErrorPortLock);
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    if ( a1 == DbgkpErrorProcess )
    {
      v3 = (volatile signed __int32 *)DbgkpErrorPort;
      _InterlockedIncrement((volatile signed __int32 *)DbgkpErrorPort);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&DbgkpErrorPortLock);
    KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v3 )
    {
      DbgkpRemoveErrorPort(CurrentThread, v3);
      if ( !_InterlockedDecrement(v3) )
        DbgkpDeleteErrorPort(v3);
    }
  }
}
