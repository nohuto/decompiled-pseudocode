/*
 * XREFs of IoUnregisterContainerNotification @ 0x140624538
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExUnregisterCallback @ 0x140131CC8 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi
  signed __int64 v6; // rbx
  PVOID *v7; // rax
  PVOID *v8; // rdi
  ULONG_PTR v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID *v13; // rcx
  PVOID **v14; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v3, (ULONG_PTR)&IopSessionNotificationLock);
  v6 = 0LL;
  if ( v5 )
    v5[26] |= 1u;
  v7 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v7 != &IopSessionNotificationQueueHead )
  {
    v8 = v7;
    v7 = (PVOID *)*v7;
    if ( v8[4] == CallbackRegistration )
    {
      ObfDereferenceObject(v8[2]);
      ExUnregisterCallback(CallbackRegistration);
      v13 = (PVOID *)*v8;
      v14 = (PVOID **)v8[1];
      if ( *((PVOID **)*v8 + 1) != v8 || *v14 != v8 )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
}
