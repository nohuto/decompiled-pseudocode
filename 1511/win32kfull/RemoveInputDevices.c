/*
 * XREFs of RemoveInputDevices @ 0x1C009A070
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 * Callees:
 *     RemoveRimManagedInputDevices @ 0x1C009A198 (RemoveRimManagedInputDevices.c)
 *     RequestDeviceChange @ 0x1C01E0784 (RequestDeviceChange.c)
 */

int RemoveInputDevices()
{
  __int64 v0; // rdi
  PVOID *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h]

  v0 = 0LL;
  v1 = (PVOID *)&aDeviceClassNotificationEntry;
  v2 = 3LL;
  do
  {
    if ( *(_DWORD *)(v0 + aDeviceTemplate[0] + 96) )
    {
      v3 = *(_QWORD *)(v0 + aDeviceTemplate[0] + 112);
      if ( v3 && (int)RawInputManagerObjectCreateKernelHandle(v3, 3LL, 0LL) >= 0 )
      {
        RIMDirectStopDeviceClassNotifications(Handle);
        ZwClose(Handle);
      }
    }
    else if ( *v1 )
    {
      IoUnregisterPlugPlayNotification(*v1);
      *v1 = 0LL;
    }
    ++v1;
    v0 += 568LL;
    --v2;
  }
  while ( v2 );
  while ( 1 )
  {
    EnterDeviceInfoListCrit_();
    if ( !gbPnPWaiting )
      break;
    LeaveDeviceInfoListCrit_();
    UserSessionSwitchLeaveCrit(v5, v4);
    KeWaitForSingleObject(gpEventPnPWainting, Executive, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
LABEL_17:
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_BYTE *)(i + 66) & 0x88) == 0 && (*(_BYTE *)(i + 64) & 0x40) == 0 )
    {
      *(_DWORD *)(i + 88) |= 1u;
      RequestDeviceChange((struct DEVICEINFO *)i);
      goto LABEL_17;
    }
  }
  LeaveDeviceInfoListCrit_();
  RemoveRimManagedInputDevices();
  return ForceUpdatePointerDeviceSystemMetricKeys();
}
