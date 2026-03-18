/*
 * XREFs of RemoveInputDevices @ 0x1C012F0C0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C012D870 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 * Callees:
 *     RemoveRimManagedInputDevices @ 0x1C012F218 (RemoveRimManagedInputDevices.c)
 *     RequestDeviceChange @ 0x1C01E0174 (RequestDeviceChange.c)
 */

__int64 RemoveInputDevices()
{
  __int64 v0; // rdi
  void **v1; // rbx
  __int64 v2; // rsi
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 i; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h]

  v0 = 0LL;
  v1 = (void **)&aDeviceClassNotificationEntry;
  v2 = 3LL;
  do
  {
    if ( *(_DWORD *)(v0 + aDeviceTemplate[0] + 96) )
    {
      v3 = *(void **)(v0 + aDeviceTemplate[0] + 112);
      if ( v3 && (int)RawInputManagerObjectCreateKernelHandle(v3, 3LL, 0LL) >= 0 )
      {
        RIMDirectStopDeviceClassNotifications(Handle);
        ZwClose(Handle);
      }
    }
    else
    {
      v3 = *v1;
      if ( *v1 )
      {
        IoUnregisterPlugPlayNotification(v3);
        *v1 = 0LL;
      }
    }
    ++v1;
    v0 += 568LL;
    --v2;
  }
  while ( v2 );
  while ( 1 )
  {
    EnterDeviceInfoListCrit_(v3);
    if ( !gbPnPWaiting )
      break;
    LeaveDeviceInfoListCrit_(v6);
    UserSessionSwitchLeaveCrit(v5, v4);
    KeWaitForSingleObject(gpEventPnPWainting, Executive, 0, 0, 0LL);
    EnterCrit(1LL);
  }
LABEL_17:
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_BYTE *)(i + 66) & 0x88) == 0 && (*(_BYTE *)(i + 64) & 0x40) == 0 )
    {
      *(_DWORD *)(i + 96) |= 1u;
      RequestDeviceChange((struct DEVICEINFO *)i);
      goto LABEL_17;
    }
  }
  LeaveDeviceInfoListCrit_(0LL);
  RemoveRimManagedInputDevices();
  return ForceUpdatePointerDeviceSystemMetricKeys();
}
