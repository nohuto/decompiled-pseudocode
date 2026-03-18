/*
 * XREFs of RemoveInputDevices @ 0x1C00E90F0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 * Callees:
 *     RemoveRimManagedInputDevices @ 0x1C00E9168 (RemoveRimManagedInputDevices.c)
 */

int RemoveInputDevices()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h]

  v0 = 0LL;
  v1 = 3LL;
  do
  {
    v2 = *(_QWORD *)(v0 + aDeviceTemplate[0] + 104);
    if ( v2 && (int)RawInputManagerObjectCreateKernelHandle(v2, 3LL, 0LL) >= 0 )
    {
      RIMDirectStopDeviceClassNotifications(Handle);
      ZwClose(Handle);
    }
    v0 += 560LL;
    --v1;
  }
  while ( v1 );
  RemoveRimManagedInputDevices(v2);
  return ForceUpdatePointerDeviceSystemMetricKeys();
}
