/*
 * XREFs of IoRegisterContainerNotification @ 0x14057C5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     IopSetFileObjectExtensionFlag @ 0x140079FF0 (IopSetFileObjectExtensionFlag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     IopGetDevicePDO @ 0x1400F9440 (IopGetDevicePDO.c)
 *     ExRegisterCallback @ 0x1401302A4 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x140131CC8 (ExUnregisterCallback.c)
 *     MmGetSessionObjectById @ 0x1401EC804 (MmGetSessionObjectById.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopGetSessionIdFromPDO @ 0x1404CF1E4 (IopGetSessionIdFromPDO.c)
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
  _BYTE *v10; // rax
  _BYTE *v11; // rsi
  PVOID *v12; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v17; // r14
  void *v18; // r12
  void *v19; // r15
  _QWORD *v20; // rax
  ULONG_PTR v21; // rtt
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  PVOID *v26; // rax
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v28; // r12
  unsigned int SessionIdFromPDO; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
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
  v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&IopSessionNotificationLock, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&IopSessionNotificationLock, v10, (ULONG_PTR)&IopSessionNotificationLock);
  if ( v11 )
    v11[26] |= 1u;
  v12 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v12 != &IopSessionNotificationQueueHead )
  {
    v26 = v12;
    v12 = (PVOID *)*v12;
    if ( v26[5] == (PVOID)v9 )
    {
      v7 = -1073741791;
      goto LABEL_17;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6E536F49u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v17 = ExRegisterCallback(
            (PCALLBACK_OBJECT)IopSessionCallbackObject,
            (PCALLBACK_FUNCTION)IopDispatchSessionNotifications,
            PoolWithTag);
    if ( v17 )
    {
      v18 = 0LL;
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
              SessionObjectById = MmGetSessionObjectById(SessionIdFromPDO, v30, v31);
              ObfDereferenceObject(v28);
              v18 = SessionObjectById;
            }
            else
            {
              v18 = 0LL;
            }
          }
          *(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) |= 0x1000u;
          goto LABEL_15;
        case 4:
          v19 = (void *)v9;
LABEL_15:
          ObfReferenceObject(v19);
          v14[5] = v9;
          v14[2] = v19;
          v14[4] = v17;
          v14[8] = *((_QWORD *)NotificationInformation + 3);
          *((_DWORD *)v14 + 14) = *((_DWORD *)NotificationInformation + 4);
          v14[3] = CallbackFunction;
          v14[6] = v18;
          *(_QWORD *)CallbackRegistration = v17;
          v20 = (_QWORD *)qword_140320698;
          if ( *(PVOID **)qword_140320698 != &IopSessionNotificationQueueHead )
            __fastfail(3u);
          *v14 = &IopSessionNotificationQueueHead;
          v14[1] = v20;
          *v20 = v14;
          qword_140320698 = (__int64)v14;
          goto LABEL_17;
        case 5:
          LOBYTE(v15) = 1;
          v19 = *(void **)(*(_QWORD *)(v9 + 8) + 8LL);
          v7 = IopSetFileObjectExtensionFlag(v9, 2, v15, v16);
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
    if ( v17 )
      ExUnregisterCallback(v17);
    goto LABEL_17;
  }
  v7 = -1073741670;
LABEL_17:
  _m_prefetchw(&IopSessionNotificationLock);
  if ( (IopSessionNotificationLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = IopSessionNotificationLock - 16;
  if ( (IopSessionNotificationLock & 2) != 0
    || (v21 = IopSessionNotificationLock,
        v21 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v5,
                 IopSessionNotificationLock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((ULONG_PTR)&IopSessionNotificationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
  return v7;
}
