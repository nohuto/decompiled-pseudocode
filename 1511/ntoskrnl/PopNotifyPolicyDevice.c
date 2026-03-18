/*
 * XREFs of PopNotifyPolicyDevice @ 0x14054BEDC
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopChangeCapability @ 0x14053DEF8 (PopChangeCapability.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     PopConnectToPolicyDevice @ 0x14054BF5C (PopConnectToPolicyDevice.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  bool v5; // di
  __int64 v7; // rdx
  char v8; // bl

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopAcquirePolicyLock();
    if ( v5 )
      v7 = 0LL;
    else
      LOBYTE(v7) = 1;
    PopChangeCapability(&byte_1402DDF73, v7);
    PopReleasePolicyLock();
  }
  else if ( (_DWORD)Context == 3 )
  {
    KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
    PopAcquirePolicyLock();
    v8 = PopHiberEnabled;
    PopEnableHiberFile(0, 0);
    if ( v8 )
      PopEnableHiberFile(1, 0);
    PopReleasePolicyLock();
    KeSetEvent(&PopTransitionLock, 0, 0);
  }
  else if ( v3 )
  {
    PopAcquireRwLockExclusive((__int64)&PopPolicyDeviceLock);
    PopConnectToPolicyDevice(v2, NotificationStructure[5]);
    PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
  }
  return 0LL;
}
