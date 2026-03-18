/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C007FBEC
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C0088380 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C00CE630 (RIMAddInputOfType.c)
 * Callees:
 *     ApiSetIsRemoteConnection @ 0x1C000F57C (ApiSetIsRemoteConnection.c)
 *     DeviceTypeToRimInputType @ 0x1C0010A30 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(PDRIVER_OBJECT *Object)
{
  NTSTATUS v2; // edi
  __int64 v3; // rsi
  PVOID *v4; // r14
  _QWORD *v5; // rbp
  int v6; // edx

  v2 = -1073741811;
  if ( (unsigned int)ApiSetIsRemoteConnection() || !Object[14] )
  {
    return 0;
  }
  else
  {
    v3 = 0LL;
    v4 = (PVOID *)(Object + 15);
    v5 = Object + 45;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v3) & *((_DWORD *)Object + 19)) != 0 )
      {
        if ( *v5 )
        {
          LOBYTE(v6) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            3,
            10,
            (__int64)&WPP_a520ef420a2c3ab2b2c997c48bfcc906_Traceguids);
        }
        else
        {
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = IoRegisterPlugPlayNotification(
                   EventCategoryDeviceInterfaceChange,
                   1u,
                   *v4,
                   Object[14],
                   (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)RIMDeviceClassNotify,
                   &Object[2 * (unsigned int)v3 + 48],
                   (PVOID *)&Object[v3 + 45]);
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      v3 = (unsigned int)(v3 + 1);
      ++v5;
      v4 += 10;
    }
    while ( (unsigned int)v3 <= 2 );
  }
  return (unsigned int)v2;
}
