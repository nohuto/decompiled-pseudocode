/*
 * XREFs of ExpWnfNotifySubscription @ 0x1403E23AC
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1403E4A00 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1403E678C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x1404B78D8 (ExpWnfStartKernelDispatcher.c)
 */

void __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rbx
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rsi
  struct _KEVENT *Flink; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v9, (ULONG_PTR)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == v8 )
    {
      ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      Flink = (struct _KEVENT *)v8[2].ReadyListHead.Flink[8].Flink;
      if ( Flink )
        KeSetEvent(Flink, 1, 0);
    }
  }
}
