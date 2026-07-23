/*
 * XREFs of IopCleanupNotifications @ 0x140130814
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1400990A0 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x1403F1B3C (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExUnregisterCallback @ 0x140131CC8 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  signed __int64 v8; // rbx
  PVOID *v9; // rdi
  PVOID *v10; // rsi
  PVOID v11; // rcx
  ULONG_PTR v12; // rtt
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID *v17; // rcx
  PVOID **v18; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v5, (ULONG_PTR)&IopSessionNotificationLock);
  v8 = 0LL;
  if ( v7 )
    v7[26] |= 1u;
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
      v17 = (PVOID *)*v10;
      v18 = (PVOID **)v10[1];
      if ( *((PVOID **)*v10 + 1) != v10 || *v18 != v10 )
        __fastfail(3u);
      *v18 = v17;
      v17[1] = v18;
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
}
