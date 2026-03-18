/*
 * XREFs of IopCleanupNotifications @ 0x1400D0F40
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140091B50 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x140455DE4 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExUnregisterCallback @ 0x1400F4408 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  signed __int64 v8; // rbx
  PVOID *v9; // rdi
  PVOID *v10; // rsi
  PVOID v11; // rcx
  ULONG_PTR v12; // rtt
  PVOID *v14; // rcx
  PVOID **v15; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v5, (ULONG_PTR)&IopSessionNotificationLock);
  v8 = 0LL;
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v9 != &IopSessionNotificationQueueHead )
  {
    v10 = v9;
    v9 = (PVOID *)*v9;
    v11 = v10[2];
    if ( v11 == a1 && (!a2 || v10[5] == a2) )
    {
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      ExUnregisterCallback(v10[4]);
      v14 = (PVOID *)*v10;
      v15 = (PVOID **)v10[1];
      if ( *((PVOID **)*v10 + 1) != v10 || *v15 != v10 )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
      ExFreePoolWithTag(v10, 0);
    }
  }
  _m_prefetchw(&IopSessionNotificationLock);
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v8 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v12 = IopSessionNotificationLock,
        v12 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v8,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
