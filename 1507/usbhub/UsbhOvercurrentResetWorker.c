/*
 * XREFs of UsbhOvercurrentResetWorker @ 0x1C003DDE8
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003DC00 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhWmiResetOvercurrent @ 0x1C004EA50 (UsbhWmiResetOvercurrent.c)
 * Callees:
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0015DC8 (UsbhDispatch_HardResetEvent.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhPCE_Enable @ 0x1C0029358 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C0029404 (UsbhPCE_Resume.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C0029550 (UsbhDispatch_PindicatorEvent.c)
 *     UsbhSetPortPower @ 0x1C003C7D4 (UsbhSetPortPower.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00409E4 (UsbhPCE_BusDisconnect.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhOvercurrentResetWorker(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  __int64 v5; // rsi
  __int64 PortData; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  int v13; // r10d
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r10
  int v18; // r11d
  __int64 v19; // r10
  int v20; // r11d
  __int64 v21; // r9
  int v22; // r11d
  __int64 v23; // r9
  unsigned __int16 v25; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 v26; // [rsp+7Ah] [rbp+12h]
  int v27; // [rsp+80h] [rbp+18h] BYREF

  v4 = a4;
  v5 = (unsigned int)a2;
  FdoExt((__int64)a1, a2, a3, a4);
  PortData = UsbhGetPortData((__int64)a1, v5);
  Log((__int64)a1, 0x4000, 1870033495, a3, v5);
  UsbhWait((int)a1, 500);
  Log((__int64)a1, 0x4000, 1870016848, a3, (unsigned __int16)v5);
  v9 = UsbhGetPortData((__int64)a1, v5);
  if ( v9 )
    UsbhDispatch_PindicatorEvent((__int64)a1, v9, 3, a3);
  UsbhPCE_BusDisconnect(a1, a3, (unsigned __int16)v5);
  v12 = (int)UsbhSetPortPower((__int64)a1, (unsigned __int16)v5, v10, v11);
  Log((__int64)a1, 0x4000, 1870017104, v12, (unsigned __int16)v5);
  if ( v13 < 0 )
  {
    if ( !Usb_Disconnected(v13) )
    {
      Log((__int64)a1, v22, 1870017569, a3, v5);
      UsbhDispatch_HardResetEvent((__int64)a1, a3, 3LL, v23);
    }
  }
  else
  {
    UsbhWait((int)a1, SHIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next));
    UsbhPCE_Resume(a1, a3, (unsigned __int16)v5, v14);
    Log((__int64)a1, 0x4000, 1870025299, v12, (unsigned __int16)v5);
    v15 = UsbhQueryPortState((__int64)a1, v5, (__int64)&v25, &v27);
    if ( !Usb_Disconnected(v15) )
    {
      Log((__int64)a1, 16, 1870017616, v25, v26);
      Log((__int64)a1, v18, 1870017582, v17, (unsigned __int16)v5);
      if ( (int)v19 >= 0 && (v25 & 1) != 0 && (v26 & 1) == 0 )
      {
        Log((__int64)a1, v20, 1870017872, (unsigned __int16)v5, v19);
        UsbhQueueSoftConnectChange((_DWORD)a1);
      }
      *(_DWORD *)(PortData + 2404) = 0;
      Log((__int64)a1, 0x4000, 1870017381, a3, (unsigned __int16)v5);
      UsbhPCE_Enable(a1, a3, (unsigned __int16)v5, v21);
    }
  }
  LOBYTE(v16) = v4;
  return Usbh_OvercurrentDerefHubBusy(a1, PortData, v16);
}
