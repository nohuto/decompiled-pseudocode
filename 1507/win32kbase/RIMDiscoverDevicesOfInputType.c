/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C00758D8
 * Callers:
 *     RIMDirectStartDeviceClassNotifications @ 0x1C006F6D0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 *     RIMAddInputOfType @ 0x1C00C1260 (RIMAddInputOfType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     DeviceTypeToRimInputType @ 0x1C0077280 (DeviceTypeToRimInputType.c)
 *     ApiSetIsRemoteConnection @ 0x1C0078294 (ApiSetIsRemoteConnection.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(PDRIVER_OBJECT *Object)
{
  NTSTATUS v2; // edi
  __int64 v3; // rsi
  PVOID *v4; // r14
  _QWORD *v5; // rbp

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
      if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)v3) & *((_DWORD *)Object + 19)) != 0 )
      {
        if ( *v5 )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xAu,
            (__int64)&WPP_10d7ee4e0c1b3831979d5da29df768e7_Traceguids);
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
                   RIMDeviceClassNotify,
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
