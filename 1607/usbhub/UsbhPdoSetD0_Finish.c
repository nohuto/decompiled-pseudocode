/*
 * XREFs of UsbhPdoSetD0_Finish @ 0x1C00010E4
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0001000 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019FA4 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdoPowerState @ 0x1C001A240 (UsbhSetPdoPowerState.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0021D6C (UsbhAcquireFdoPwrLock.c)
 *     UsbhDisableDeviceForWake @ 0x1C00231C4 (UsbhDisableDeviceForWake.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoSetD0_Finish(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdi
  POWER_STATE v8; // ebx
  int v9; // r8d
  unsigned int v10; // edx
  int v12; // edx
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v6 = PdoExt(a2);
  v7 = FdoExt(*(_QWORD *)(a1 + 8));
  v8.SystemState = *(_SYSTEM_POWER_STATE *)(*(_QWORD *)(a3 + 184) + 24LL);
  UsbhAcquireFdoPwrLock(*(_QWORD *)(a1 + 8), a1, 126LL, 1852401232LL);
  PdoExt(a2);
  UsbhSetPdoPowerState(a1, (_DWORD)a2, v9, 1, 8);
  Log(*(_QWORD *)(a1 + 8), 16, 1884769123, a1, (__int64)a2);
  *(_DWORD *)(v6 + 2376) = *(_DWORD *)(v7 + 4216);
  UsbhReleaseFdoPwrLock(*(_QWORD *)(a1 + 8), a1);
  if ( (*(_DWORD *)(v6 + 1412) & 0x100) != 0 )
  {
    v10 = UsbhDisableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v14);
    if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v10) )
    {
      LOBYTE(v13) = 0;
      UsbhException(
        *(_QWORD *)(a1 + 8),
        *(unsigned __int16 *)(v6 + 1420),
        49,
        0,
        0,
        v12,
        v14,
        usbfile_pdopwr_c,
        842,
        v13);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
      *(_WORD *)(v6 + 1420));
  UsbhSet_Pdo_Dx(a2, v8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
      *(_WORD *)(v6 + 1420));
  return 0LL;
}
