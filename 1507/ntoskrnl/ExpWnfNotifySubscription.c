/*
 * XREFs of ExpWnfNotifySubscription @ 0x140500BFC
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x14050380C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x140561FD8 (ExpWnfStartKernelDispatcher.c)
 */

void __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int v7; // r14d
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r9
  struct _KEVENT *v11; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v7 = a4;
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v9, (ULONG_PTR)v4, v10);
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
      ExpWnfStartKernelDispatcher(v7);
    }
    else
    {
      v11 = *(struct _KEVENT **)(v8[2].Affinity.Bitmap[19] + 128);
      if ( v11 )
        KeSetEvent(v11, 1, 0);
    }
  }
}
