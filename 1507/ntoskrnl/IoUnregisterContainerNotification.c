/*
 * XREFs of IoUnregisterContainerNotification @ 0x140674E14
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExUnregisterCallback @ 0x14013169C (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  __int64 v1; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  PVOID *v9; // rax
  PVOID *v10; // rbx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  PVOID *v15; // rcx
  PVOID **v16; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0LL, v1);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v8 = v4;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v4, (ULONG_PTR)&IopSessionNotificationLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v9 != &IopSessionNotificationQueueHead )
  {
    v10 = v9;
    v9 = (PVOID *)*v9;
    if ( v10[4] == CallbackRegistration )
    {
      ObfDereferenceObject(v10[2]);
      ExUnregisterCallback(CallbackRegistration);
      v15 = (PVOID *)*v10;
      v16 = (PVOID **)v10[1];
      if ( *((PVOID **)*v10 + 1) != v10 || *v16 != v10 )
        __fastfail(3u);
      *v16 = v15;
      v15[1] = v16;
      ExFreePoolWithTag(v10, 0);
      break;
    }
  }
  _m_prefetchw(&IopSessionNotificationLock);
  v11 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v12 = IopSessionNotificationLock,
        v12 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v11,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock, v5);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
