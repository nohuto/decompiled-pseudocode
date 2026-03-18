/*
 * XREFs of UsbhOvercurrentResetWorker @ 0x1C003E018
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003DE30 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhWmiResetOvercurrent @ 0x1C004E9B0 (UsbhWmiResetOvercurrent.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     UsbhPCE_Enable @ 0x1C0028318 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C00283C4 (UsbhPCE_Resume.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C0028510 (UsbhDispatch_PindicatorEvent.c)
 *     UsbhSetPortPower @ 0x1C003CA04 (UsbhSetPortPower.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0040C00 (UsbhPCE_BusDisconnect.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhOvercurrentResetWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF

  v4 = a4;
  v5 = (unsigned int)a2;
  FdoExt(a1, a2, a3, a4);
  PortData = UsbhGetPortData(a1, v5);
  Log(a1, 0x4000, 1870033495, a3, v5);
  UsbhWait(a1, 0x1F4u);
  Log(a1, 0x4000, 1870016848, a3, (unsigned __int16)v5);
  v9 = UsbhGetPortData(a1, v5);
  if ( v9 )
    UsbhDispatch_PindicatorEvent(a1, v9, 3, a3);
  UsbhPCE_BusDisconnect(a1, a3, (unsigned __int16)v5);
  v12 = (int)UsbhSetPortPower(a1, (unsigned __int16)v5, v10, v11);
  Log(a1, 0x4000, 1870017104, v12, (unsigned __int16)v5);
  if ( v13 < 0 )
  {
    if ( !Usb_Disconnected(v13) )
    {
      Log(a1, v22, 1870017569, a3, v5);
      UsbhDispatch_HardResetEvent(a1, a3, 3);
    }
  }
  else
  {
    UsbhWait(a1, HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next));
    UsbhPCE_Resume(a1, a3, (unsigned __int16)v5, v14);
    Log(a1, 0x4000, 1870025299, v12, (unsigned __int16)v5);
    v15 = UsbhQueryPortState(a1, v5, &v24, &v25);
    if ( !Usb_Disconnected(v15) )
    {
      Log(a1, 16, 1870017616, (unsigned __int16)v24, HIWORD(v24));
      Log(a1, v18, 1870017582, v17, (unsigned __int16)v5);
      if ( (int)v19 >= 0 && (v24 & 1) != 0 && (v24 & 0x10000) == 0 )
      {
        Log(a1, v20, 1870017872, (unsigned __int16)v5, v19);
        UsbhQueueSoftConnectChange(a1);
      }
      *(_DWORD *)(PortData + 2404) = 0;
      Log(a1, 0x4000, 1870017381, a3, (unsigned __int16)v5);
      UsbhPCE_Enable(a1, a3, (unsigned __int16)v5, v21);
    }
  }
  LOBYTE(v16) = v4;
  return Usbh_OvercurrentDerefHubBusy(a1, PortData, v16);
}
