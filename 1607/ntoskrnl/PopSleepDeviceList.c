/*
 * XREFs of PopSleepDeviceList @ 0x1403CF2F0
 * Callers:
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeInitializeSemaphore @ 0x1400EFE80 (KeInitializeSemaphore.c)
 *     PopNotifyDevice @ 0x1403CF498 (PopNotifyDevice.c)
 */

int __fastcall PopSleepDeviceList(__int64 a1, __int64 a2)
{
  LONG v2; // r15d
  __int64 **v3; // rsi
  __int64 **v4; // rax
  int v5; // ebx
  LONG v6; // r14d
  struct _KSEMAPHORE *p_Semaphore; // rax
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 **v11; // rcx
  PVOID Object[2]; // [rsp+48h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-29h] BYREF
  struct _KSEMAPHORE v15; // [rsp+70h] [rbp-11h] BYREF
  struct _KSEMAPHORE Semaphore; // [rsp+90h] [rbp+Fh] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp+2Fh] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (__int64 **)(a2 + 24);
  v4 = *(__int64 ***)(a2 + 24);
  v5 = 0;
  v6 = 0;
  while ( v4 != v3 )
  {
    v4 = (__int64 **)*v4;
    ++v6;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeSemaphore(&Semaphore, v6, v2);
  KeInitializeSemaphore(&v15, 0, v2);
  *(_QWORD *)(a1 + 24) = &Event;
  *(_QWORD *)(a1 + 32) = &Semaphore;
  *(_QWORD *)(a1 + 40) = &v15;
  Object[0] = &Event;
  p_Semaphore = &Semaphore;
  Object[1] = &Semaphore;
  if ( v2 > 0 )
  {
    do
    {
      LODWORD(p_Semaphore) = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( *(int *)(a1 + 440) < 0 )
        break;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140303330 + 1, &LockHandle);
      v9 = *v3;
      v10 = **v3;
      if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v10 + 8) != v9 )
        __fastfail(3u);
      *v3 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v3;
      v11 = *(__int64 ***)(a1 + 432);
      if ( *v11 != (__int64 *)(a1 + 424) )
        __fastfail(3u);
      v9[1] = (__int64)v11;
      *v9 = a1 + 424;
      *v11 = v9;
      *(_QWORD *)(a1 + 432) = v9;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      --v2;
      ++v5;
      LODWORD(p_Semaphore) = PopNotifyDevice(a1, v9);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v5 > 0 )
        {
          LODWORD(p_Semaphore) = KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
          --v5;
        }
      }
    }
    while ( v2 > 0 );
    while ( v5 > 0 )
    {
      LODWORD(p_Semaphore) = KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
      --v5;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return (int)p_Semaphore;
}
