/*
 * XREFs of UsbhFdoPower_PowerFailureEntry @ 0x1C0045ED8
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C00014D0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0001710 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C00018B0 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0002FFC (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C0021424 (UsbhBusIoInvalidateDeviceRelations.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0021E0C (UsbhSetFdoPowerState.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C00227B4 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhReleasePowerContext @ 0x1C0023268 (UsbhReleasePowerContext.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

void __fastcall UsbhFdoPower_PowerFailureEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // rbx
  bool v8; // al
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+48h] [rbp-10h]
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v5 = (int)a3;
  LOBYTE(v16) = 0;
  v7 = FdoExt(a1, a2, a3, a4);
  UsbhException(a1, 0, 85, (int)&v17, 4, v5, 0, usbfile_fdopwr_c, 1027, v16);
  v7[315] = v5;
  v8 = Usb_Disconnected(v5);
  v9 = 213LL;
  if ( !v8 )
    v9 = 212LL;
  UsbhSetFdoPowerState(a1, v5, v9, (unsigned int)v17);
  Log(a1, 16, 1934645025, v5, 0LL);
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhReleaseFdoPwrLock(a1, *(_QWORD *)(a4 + 72), v10, v11);
  UsbhBusIoInvalidateDeviceRelations(a1, *(_QWORD *)(a4 + 72), v12, v13);
  UsbhReleasePowerContext(a1, a4, v14, v15);
  UsbhDisarmHubForWakeDetect(a1);
}
