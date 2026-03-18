/*
 * XREFs of UsbhPortResumeTimeout @ 0x1C0043EE4
 * Callers:
 *     UsbhWaitForPortResume @ 0x1C00292B4 (UsbhWaitForPortResume.c)
 * Callees:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C0021494 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 *     UsbhGetPortStatusBits @ 0x1C0043880 (UsbhGetPortStatusBits.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhPortResumeTimeout(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // r15
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // r10d
  unsigned int v11; // r10d
  struct _DEVICE_OBJECT *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 PortStatusBits; // al
  __int64 v17; // r11
  char v18; // r10
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // [rsp+48h] [rbp-30h]
  int v33; // [rsp+48h] [rbp-30h]
  int v34; // [rsp+90h] [rbp+18h] BYREF
  __int16 v35; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_WORD *)(a3 + 4);
  FdoExt((__int64)DeviceObject, a2, a3, a4);
  v8 = UsbhQueryPortState((__int64)DeviceObject, *(_WORD *)(a3 + 4), (__int64)&v35, &v34);
  v9 = 0;
  Log((__int64)DeviceObject, 16, 1920233265, v8, 0LL);
  if ( Usb_Disconnected(v10) )
    return v11;
  LOBYTE(v32) = 0;
  UsbhException((int)DeviceObject, *(unsigned __int16 *)(a3 + 4), 124, 0, 0, v11, v34, usbfile_bus_c, 7345, v32);
  v13 = (struct _DEVICE_OBJECT *)UsbhLatchPdo((__int64)DeviceObject, v4, 0LL, 0x7761726Du);
  Log((__int64)DeviceObject, 16, 1920233266, v4, (__int64)v13);
  if ( v13 )
  {
    PortStatusBits = UsbhGetPortStatusBits(v15, v14, &v35, (__int64)v13);
    Log((__int64)DeviceObject, 16, 1347899987, PortStatusBits, v17);
    if ( v18 == 25 )
    {
      Log((__int64)DeviceObject, 16, 1920233267, 25LL, 0LL);
    }
    else if ( v18 == 31 )
    {
      v9 = -1073741810;
      Log((__int64)DeviceObject, 16, 1920233268, 31LL, -1073741810LL);
    }
    else
    {
      v19 = UsbhSyncResetDeviceInternal(DeviceObject, a2, (__int64)v13);
      v23 = v19;
      if ( (v19 & 0xC0000000) == 0xC0000000 )
      {
        Log((__int64)DeviceObject, 16, 1920233269, 0LL, v19);
        UsbhQueueSoftConnectChange(DeviceObject, v4, a2, 1);
        v27 = PdoExt((__int64)v13, v24, v25, v26);
        LOBYTE(v33) = 0;
        v27[353] &= ~0x4000u;
        UsbhException((int)DeviceObject, 0, 125, 0, 0, v23, 0, usbfile_bus_c, 7405, v33);
      }
      else
      {
        v28 = PdoExt((__int64)v13, v20, v21, v22);
        v28[353] &= ~0x4000u;
        if ( (PdoExt((__int64)v13, v29, v30, v31)[353] & 4) != 0 )
          UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v13, 0x220FA7u);
      }
    }
    UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v13, 0LL, 0x7761726Du);
  }
  return v9;
}
