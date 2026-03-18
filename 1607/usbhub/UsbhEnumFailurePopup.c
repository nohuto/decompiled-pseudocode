/*
 * XREFs of UsbhEnumFailurePopup @ 0x1C004F250
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004DEA0 (UsbhBuildWmiConnectionNotification.c)
 */

void __fastcall UsbhEnumFailurePopup(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *EventData; // rax
  __int64 v11; // rbx
  NTSTATUS v12; // eax

  v6 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  v7 = *(unsigned __int16 *)(a2 + 20);
  v8 = *((_QWORD *)v6 + 377);
  v9 = *(unsigned int *)(v8 + 4 * v7);
  if ( (v9 & 0x10) == 0 || (v6[641] & 1) == 0 )
  {
    EventData = UsbhBuildWmiConnectionNotification((__int64)DeviceObject, (unsigned __int16)v7, v8, v9);
    v11 = (__int64)EventData;
    if ( EventData )
    {
      *EventData = 0;
      EventData[3] = *(_DWORD *)(a2 + 16);
      v12 = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
      Log((__int64)DeviceObject, 128, 1886351409, v12, v11);
    }
  }
}
