/*
 * XREFs of PopPolicyDeviceTargetChange @ 0x1406BAE04
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140138BC0 (PnpUnregisterPlugPlayNotification.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x1406BADA4 (PopPolicyDeviceRemove.c)
 */

__int64 __fastcall PopPolicyDeviceTargetChange(char *NotificationStructure, int *Context, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  signed __int64 v16; // rcx
  ULONG_PTR v17; // rtt
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&PopPolicyDeviceLock, 0LL);
  v12 = v8;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&PopPolicyDeviceLock, v8, (ULONG_PTR)&PopPolicyDeviceLock, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  qword_14032DF48 = (__int64)KeGetCurrentThread();
  v13 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v13 )
    v13 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v13 )
  {
    PopPolicyDeviceRemove((__int64)Context);
    goto LABEL_18;
  }
  v14 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v14 )
    v14 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v14 )
  {
    PopPolicyDeviceRemove((__int64)Context);
LABEL_17:
    v7 = 1;
    goto LABEL_18;
  }
  v15 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v15 )
    v15 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v15 )
  {
    PopConnectToPolicyDevice(Context[4], (const UNICODE_STRING *)Context + 2);
    goto LABEL_17;
  }
LABEL_18:
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v16 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v16 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v17 = PopPolicyDeviceLock,
        v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v16, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v9);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v7 )
  {
    PnpUnregisterPlugPlayNotification(*((_QWORD *)Context + 3), 1, v18, v19);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_140321374 + 8 * Context[4]));
  }
  return 0LL;
}
