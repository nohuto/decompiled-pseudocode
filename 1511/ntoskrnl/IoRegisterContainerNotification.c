/*
 * XREFs of IoRegisterContainerNotification @ 0x140546F70
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopGetDevicePDO @ 0x1400988E8 (IopGetDevicePDO.c)
 *     IopSetFileObjectExtensionFlag @ 0x1400CC2B8 (IopSetFileObjectExtensionFlag.c)
 *     ExUnregisterCallback @ 0x1400F4408 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x14012577C (ExRegisterCallback.c)
 *     MmGetSessionObjectById @ 0x1401DBD14 (MmGetSessionObjectById.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetSessionIdFromPDO @ 0x1404F2C18 (IopGetSessionIdFromPDO.c)
 */

NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  signed __int64 v5; // rbx
  NTSTATUS v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  PVOID *v12; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rsi
  PVOID v15; // r14
  void *v16; // r12
  void *v17; // r15
  PVOID **v18; // rax
  ULONG_PTR v19; // rtt
  PVOID *v21; // rax
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v23; // r12
  int SessionIdFromPDO; // eax
  void *SessionObjectById; // [rsp+20h] [rbp-38h]

  v5 = 0LL;
  v7 = 0;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength != 32 || *(_DWORD *)NotificationInformation != 32 )
    return -1073741582;
  CurrentThread = KeGetCurrentThread();
  v9 = *((_QWORD *)NotificationInformation + 1);
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v10, (ULONG_PTR)&IopSessionNotificationLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v12 != &IopSessionNotificationQueueHead )
  {
    v21 = v12;
    v12 = (PVOID *)*v12;
    if ( v21[5] == (PVOID)v9 )
    {
      v7 = -1073741791;
      goto LABEL_17;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6E536F49u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v15 = ExRegisterCallback(
            (PCALLBACK_OBJECT)IopSessionCallbackObject,
            (PCALLBACK_FUNCTION)IopDispatchSessionNotifications,
            PoolWithTag);
    if ( v15 )
    {
      v16 = 0LL;
      switch ( *(_WORD *)v9 )
      {
        case 3:
          v17 = *(void **)(v9 + 8);
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0x400) != 0 )
          {
            DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v9);
            v23 = DevicePDO;
            if ( DevicePDO )
            {
              SessionIdFromPDO = IopGetSessionIdFromPDO(DevicePDO);
              SessionObjectById = MmGetSessionObjectById(SessionIdFromPDO);
              ObfDereferenceObject(v23);
              v16 = SessionObjectById;
            }
            else
            {
              v16 = 0LL;
            }
          }
          *(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) |= 0x1000u;
          goto LABEL_15;
        case 4:
          v17 = (void *)v9;
LABEL_15:
          ObfReferenceObject(v17);
          v14[5] = v9;
          v14[2] = v17;
          v14[4] = v15;
          v14[8] = *((_QWORD *)NotificationInformation + 3);
          *((_DWORD *)v14 + 14) = *((_DWORD *)NotificationInformation + 4);
          v14[3] = CallbackFunction;
          v14[6] = v16;
          *(_QWORD *)CallbackRegistration = v15;
          v18 = (PVOID **)qword_1402FB158;
          *v14 = &IopSessionNotificationQueueHead;
          v14[1] = v18;
          if ( *v18 != &IopSessionNotificationQueueHead )
            __fastfail(3u);
          *v18 = (PVOID *)v14;
          qword_1402FB158 = (__int64)v14;
          goto LABEL_17;
        case 5:
          v17 = *(void **)(*(_QWORD *)(v9 + 8) + 8LL);
          v7 = IopSetFileObjectExtensionFlag(v9, 2, 1);
          if ( v7 >= 0 )
            goto LABEL_15;
          break;
        default:
          v7 = -1073741583;
          break;
      }
    }
    else
    {
      v7 = -1073741670;
    }
    ExFreePoolWithTag(v14, 0);
    if ( v15 )
      ExUnregisterCallback(v15);
    goto LABEL_17;
  }
  v7 = -1073741670;
LABEL_17:
  _m_prefetchw(&IopSessionNotificationLock);
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v19 = IopSessionNotificationLock,
        v19 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v5,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
