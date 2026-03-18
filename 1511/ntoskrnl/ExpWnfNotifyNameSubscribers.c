/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1403E6600
 * Callers:
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteProcessContext @ 0x1403E1D84 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1403E2034 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1403E3FEC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1403E429C (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1403E6008 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1404B7968 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1403E678C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x1404B78D8 (ExpWnfStartKernelDispatcher.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rsi
  unsigned int v5; // ebx
  int v6; // ebp
  __int64 v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  int inserted; // eax
  struct _KPROCESS *v11; // rcx
  unsigned int v12; // ebp
  struct _KEVENT *Flink; // rcx
  int v14; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v15; // [rsp+28h] [rbp-40h]

  v14 = 0;
  v4 = (unsigned __int64 *)(a1 + 112);
  v5 = 1;
  v15 = (unsigned __int64 *)(a1 + 112);
  v6 = 1;
  v7 = KeAbPreAcquire(a1 + 112, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = *(_QWORD **)(a1 + 120);
  if ( v8 != (_QWORD *)(a1 + 120) )
  {
    do
    {
      v9 = v8 - 8;
      if ( v6 && (*((_BYTE *)v9 + 100) & 1) != 0 )
        v6 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v9, a2);
      v11 = (struct _KPROCESS *)*(v8 - 3);
      if ( inserted )
      {
        if ( v11 == PsInitialSystemProcess )
        {
          v14 = 1;
        }
        else
        {
          Flink = (struct _KEVENT *)v11[2].ReadyListHead.Flink[8].Flink;
          if ( Flink )
            KeSetEvent(Flink, 1, 0);
        }
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != (_QWORD *)(a1 + 120) );
    v4 = v15;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( v6 && (a2 & 1) != 0 )
  {
    if ( v14 || !a3 )
      v5 = 0;
    v12 = a4;
    ExpWnfNotifyNameSubscribers(a1, 8LL, v5, a4);
  }
  else
  {
    v12 = a4;
  }
  if ( v14 )
  {
    if ( a3 )
      ExpWnfStartKernelDispatcher(v12);
  }
}
