/*
 * XREFs of UsbhHubResetIrqPipeWorker @ 0x1C0043B30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhPostInterrupt @ 0x1C00239F0 (UsbhPostInterrupt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhResetIrqPipe @ 0x1C0044140 (UsbhResetIrqPipe.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhHubResetIrqPipeWorker(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KEVENT *v9; // rbx
  _QWORD *v10; // r14
  NTSTATUS result; // eax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r9
  bool v15; // al
  struct _KEVENT *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  PDEVICE_OBJECT v19; // rcx
  unsigned __int16 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+28h] [rbp-50h]
  int v25; // [rsp+48h] [rbp-30h]

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Fu,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
      a2);
  Log((__int64)DeviceObject, 4, 1769107794, a3, v4);
  v9 = (struct _KEVENT *)FdoExt((__int64)DeviceObject, v6, v7, v8);
  v10 = (_QWORD *)UsbhIncHubBusy(DeviceObject, a3, (__int64)DeviceObject, 1380086643LL, 0);
  _InterlockedAdd(&v9[114].Header.Lock, 1u);
  result = (NTSTATUS)v9[106].Header.WaitListHead.Blink;
  if ( (result & 0x1000) != 0 )
  {
    LODWORD(v9[106].Header.WaitListHead.Blink) = result & 0xFFFFEFFF;
    Log((__int64)DeviceObject, 4, 1769107794, 0LL, 0LL);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v24) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x20u,
        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
        v24);
    }
    v12 = (int)UsbhResetIrqPipe(DeviceObject);
    Log((__int64)DeviceObject, 4, 1766999379, 0LL, v12);
    if ( (v12 & 0xC0000000) == 0xC0000000 )
    {
      v15 = Usb_Disconnected(v12);
      v16 = v9 + 112;
      if ( v15 )
      {
        KeSetEvent(v16, 0, 0);
        _InterlockedDecrement(&v9[114].Header.Lock);
        v19 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          return UsbhDecHubBusy((__int64)DeviceObject, v17, v10, v18);
        v20 = 33;
      }
      else
      {
        _InterlockedDecrement(&v9[114].Header.Lock);
        KeSetEvent(v16, 0, 0);
        if ( !BYTE4(v9[219].Header.WaitListHead.Flink) )
        {
          LOBYTE(v25) = 1;
          UsbhException((int)DeviceObject, 0, 7, 0, 0, v12, 0, usbfile_bus_c, 2768, v25);
        }
        v19 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          return UsbhDecHubBusy((__int64)DeviceObject, v17, v10, v18);
        v20 = 34;
      }
      LODWORD(v24) = v4;
      WPP_RECORDER_SF_d(
        (__int64)v19->DeviceExtension,
        0,
        1u,
        v20,
        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
        v24);
      return UsbhDecHubBusy((__int64)DeviceObject, v17, v10, v18);
    }
    _InterlockedDecrement(&v9[114].Header.Lock);
    UsbhDecHubBusy((__int64)DeviceObject, v13, v10, v14);
    result = UsbhPostInterrupt(DeviceObject, v21, v22, v23);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v24) = v4;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x23u,
               (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
               v24);
    }
  }
  return result;
}
