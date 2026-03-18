/*
 * XREFs of IoUnregisterContainerNotification @ 0x1405FA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExUnregisterCallback @ 0x1400F4408 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  signed __int64 v6; // rbx
  PVOID *v7; // rax
  PVOID *v8; // rdi
  ULONG_PTR v9; // rtt
  PVOID *v10; // rcx
  PVOID **v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v3, (ULONG_PTR)&IopSessionNotificationLock);
  v6 = 0LL;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v7 != &IopSessionNotificationQueueHead )
  {
    v8 = v7;
    v7 = (PVOID *)*v7;
    if ( v8[4] == CallbackRegistration )
    {
      ObfDereferenceObject(v8[2]);
      ExUnregisterCallback(CallbackRegistration);
      v10 = (PVOID *)*v8;
      v11 = (PVOID **)v8[1];
      if ( *((PVOID **)*v8 + 1) != v8 || *v11 != v8 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      ExFreePoolWithTag(v8, 0);
      break;
    }
  }
  _m_prefetchw(&IopSessionNotificationLock);
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v9 = IopSessionNotificationLock,
        v9 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&IopSessionNotificationLock,
                v6,
                IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
