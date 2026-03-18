/*
 * XREFs of PopPolicyDeviceTargetChange @ 0x14063BAF0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1401071B4 (PnpUnregisterPlugPlayNotification.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopConnectToPolicyDevice @ 0x14054BF5C (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x14063BA90 (PopPolicyDeviceRemove.c)
 */

__int64 __fastcall PopPolicyDeviceTargetChange(char *NotificationStructure, int *Context)
{
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = 0;
  PopAcquireRwLockExclusive((__int64)&PopPolicyDeviceLock);
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
    PopPolicyDeviceRemove((__int64)Context);
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v6 )
  {
    PopPolicyDeviceRemove((__int64)Context);
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
  {
    PopConnectToPolicyDevice(Context[4], (const UNICODE_STRING *)Context + 2);
    goto LABEL_13;
  }
LABEL_14:
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
  if ( v4 )
  {
    PnpUnregisterPlugPlayNotification(*((_QWORD *)Context + 3), 1);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_1402D2244 + 8 * Context[4]));
  }
  return 0LL;
}
