/*
 * XREFs of IoRegisterContainerNotification @ 0x1405BD318
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     IopGetDevicePDO @ 0x1400D0E98 (IopGetDevicePDO.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExUnregisterCallback @ 0x14013169C (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x140158AE8 (ExRegisterCallback.c)
 *     MmGetSessionObjectById @ 0x1402209E8 (MmGetSessionObjectById.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopGetSessionIdFromPDO @ 0x14045E7E8 (IopGetSessionIdFromPDO.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  PIO_CONTAINER_NOTIFICATION_FUNCTION v6; // r14
  NTSTATUS FileObjectExtension; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  PVOID *v13; // rcx
  PVOID *v14; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rdi
  PVOID v17; // rbp
  void *SessionObjectById; // r12
  void *v19; // r15
  PVOID **v20; // rax
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  struct _KTHREAD *v23; // rdx
  __int16 v24; // ax
  PVOID *v26; // rax
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v28; // r14
  int SessionIdFromPDO; // eax
  __int64 v30[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = CallbackFunction;
  FileObjectExtension = 0;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength != 32 || *(_DWORD *)NotificationInformation != 32 )
    return -1073741582;
  CurrentThread = KeGetCurrentThread();
  v9 = *((_QWORD *)NotificationInformation + 1);
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0LL, *(__int64 *)&NotificationInformationLength);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v10, (ULONG_PTR)&IopSessionNotificationLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = (PVOID *)IopSessionNotificationQueueHead;
  v14 = &IopSessionNotificationQueueHead;
  while ( v13 != &IopSessionNotificationQueueHead )
  {
    v26 = v13;
    v13 = (PVOID *)*v13;
    if ( v26[5] == (PVOID)v9 )
    {
      FileObjectExtension = -1073741791;
      goto LABEL_17;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6E536F49u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    v17 = ExRegisterCallback(
            (PCALLBACK_OBJECT)IopSessionCallbackObject,
            (PCALLBACK_FUNCTION)IopDispatchSessionNotifications,
            PoolWithTag);
    if ( v17 )
    {
      SessionObjectById = 0LL;
      switch ( *(_WORD *)v9 )
      {
        case 3:
          v19 = *(void **)(v9 + 8);
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0x400) != 0 )
          {
            DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v9);
            v28 = DevicePDO;
            if ( DevicePDO )
            {
              SessionIdFromPDO = IopGetSessionIdFromPDO(DevicePDO);
              SessionObjectById = MmGetSessionObjectById(SessionIdFromPDO);
              ObfDereferenceObject(v28);
            }
            v6 = CallbackFunction;
          }
          *(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) |= 0x1000u;
          goto LABEL_15;
        case 4:
          v19 = (void *)v9;
LABEL_15:
          ObfReferenceObject(v19);
          v16[5] = v9;
          v14 = &IopSessionNotificationQueueHead;
          v16[2] = v19;
          v16[4] = v17;
          v16[8] = *((_QWORD *)NotificationInformation + 3);
          *((_DWORD *)v16 + 14) = *((_DWORD *)NotificationInformation + 4);
          v16[3] = v6;
          v16[6] = SessionObjectById;
          *(_QWORD *)CallbackRegistration = v17;
          v20 = (PVOID **)qword_14034B5D8;
          *v16 = &IopSessionNotificationQueueHead;
          v16[1] = v20;
          if ( *v20 != &IopSessionNotificationQueueHead )
            __fastfail(3u);
          *v20 = (PVOID *)v16;
          qword_14034B5D8 = (__int64)v16;
          goto LABEL_17;
        case 5:
          v19 = *(void **)(*(_QWORD *)(v9 + 8) + 8LL);
          FileObjectExtension = IopAllocateFileObjectExtension(v9, v30);
          if ( FileObjectExtension >= 0 )
          {
            *(_DWORD *)v30[0] |= 2u;
            FileObjectExtension = 0;
          }
          if ( FileObjectExtension >= 0 )
            goto LABEL_15;
          break;
        default:
          FileObjectExtension = -1073741583;
          break;
      }
    }
    else
    {
      FileObjectExtension = -1073741670;
    }
    ExFreePoolWithTag(v16, 0);
    if ( v17 )
      ExUnregisterCallback(v17);
    goto LABEL_17;
  }
  FileObjectExtension = -1073741670;
LABEL_17:
  _m_prefetchw(&IopSessionNotificationLock);
  v21 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v22 = IopSessionNotificationLock,
        v22 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v21,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock, (__int64)v14);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return FileObjectExtension;
}
