/*
 * XREFs of DeviceNotify @ 0x1C01DF790
 * Callers:
 *     <none>
 * Callees:
 *     RequestDeviceChange @ 0x1C01E0174 (RequestDeviceChange.c)
 */

__int64 __fastcall DeviceNotify(char *NotificationStructure, struct DEVICEINFO *Context)
{
  unsigned int v2; // ebx
  __int16 v4; // di
  struct DEVICEINFO *v5; // rcx

  v2 = 0;
  v4 = 0;
  if ( *(_OWORD *)(NotificationStructure + 4) == *(_OWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE )
  {
    v4 = 2;
  }
  else if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1
         && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 )
  {
    v4 = 4;
  }
  else if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1
         && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 )
  {
    v4 = 8;
  }
  EnterDeviceInfoListCrit_(NotificationStructure);
  v5 = (struct DEVICEINFO *)gpDeviceInfoList;
  if ( gpDeviceInfoList )
  {
    do
    {
      if ( v5 == Context )
        break;
      v5 = (struct DEVICEINFO *)*((_QWORD *)v5 + 7);
    }
    while ( v5 );
    if ( v5 && !gProtocolType )
    {
      if ( v4 )
      {
        if ( (*((_BYTE *)Context + 66) & 0x88) == 0 )
        {
          KeResetEvent(gpEventPnPWainting);
          gbPnPWaiting = 1;
          RequestDeviceChange(Context);
          gbPnPWaiting = 0;
          KeSetEvent(gpEventPnPWainting, 1, 0);
        }
      }
      else
      {
        v2 = -1073741823;
      }
    }
  }
  LeaveDeviceInfoListCrit_(v5);
  return v2;
}
