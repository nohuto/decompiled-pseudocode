/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x140503674
 * Callers:
 *     ExpWnfDeliverThreadNotifications @ 0x1405013FC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1405016E8 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140503024 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteProcessContext @ 0x140505720 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1405059CC (ExpWnfDeleteSubscription.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140561FF0 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x14050380C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x140561FD8 (ExpWnfStartKernelDispatcher.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned __int64 *v4; // rsi
  unsigned int v5; // ebx
  int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // r9
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  int inserted; // eax
  struct _KPROCESS *v12; // rcx
  unsigned int v13; // ebp
  struct _KEVENT *v14; // rcx
  int v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v16; // [rsp+28h] [rbp-40h]
  unsigned int v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  v15 = 0;
  v4 = (unsigned __int64 *)(a1 + 112);
  v5 = 1;
  v16 = (unsigned __int64 *)(a1 + 112);
  v6 = 1;
  v7 = KeAbPreAcquire(a1 + 112, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = *(_QWORD **)(a1 + 120);
  if ( v9 != (_QWORD *)(a1 + 120) )
  {
    do
    {
      v10 = v9 - 8;
      if ( v6 && (*((_BYTE *)v10 + 100) & 1) != 0 )
        v6 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v10, a2);
      v12 = (struct _KPROCESS *)*(v9 - 3);
      if ( inserted )
      {
        if ( v12 == PsInitialSystemProcess )
        {
          v15 = 1;
        }
        else
        {
          v14 = *(struct _KEVENT **)(v12[2].Affinity.Bitmap[19] + 128);
          if ( v14 )
            KeSetEvent(v14, 1, 0);
        }
      }
      v9 = (_QWORD *)*v9;
    }
    while ( v9 != (_QWORD *)(a1 + 120) );
    v4 = v16;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( v6 && (a2 & 1) != 0 )
  {
    if ( v15 || !a3 )
      v5 = 0;
    v13 = v20;
    ExpWnfNotifyNameSubscribers(a1, 8LL, v5);
  }
  else
  {
    v13 = v20;
  }
  if ( v15 )
  {
    if ( a3 )
      ExpWnfStartKernelDispatcher(v13);
  }
}
