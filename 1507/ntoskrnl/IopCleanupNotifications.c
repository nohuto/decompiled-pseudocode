/*
 * XREFs of IopCleanupNotifications @ 0x14011C4BC
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140033110 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x140534BEC (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExUnregisterCallback @ 0x14013169C (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupNotifications(PVOID a1, PVOID a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbx
  PVOID *v12; // rbx
  PVOID *v13; // rdi
  PVOID v14; // rcx
  signed __int64 v15; // rcx
  ULONG_PTR v16; // rtt
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  PVOID *v19; // rcx
  PVOID **v20; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL);
  v11 = v7;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v7, (ULONG_PTR)&IopSessionNotificationLock, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v12 != &IopSessionNotificationQueueHead )
  {
    v13 = v12;
    v12 = (PVOID *)*v12;
    v14 = v13[2];
    if ( v14 == a1 && (!a2 || v13[5] == a2) )
    {
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      ExUnregisterCallback(v13[4]);
      v19 = (PVOID *)*v13;
      v20 = (PVOID **)v13[1];
      if ( *((PVOID **)*v13 + 1) != v13 || *v20 != v13 )
        __fastfail(3u);
      *v20 = v19;
      v19[1] = v20;
      ExFreePoolWithTag(v13, 0);
    }
  }
  _m_prefetchw(&IopSessionNotificationLock);
  v15 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v16 = IopSessionNotificationLock,
        v16 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v15,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock, v8);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
