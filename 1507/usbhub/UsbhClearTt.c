/*
 * XREFs of UsbhClearTt @ 0x1C0042A44
 * Callers:
 *     UsbhReset1Complete @ 0x1C00090A0 (UsbhReset1Complete.c)
 *     UsbhInitializeDevice @ 0x1C0026B6C (UsbhInitializeDevice.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

void __fastcall UsbhClearTt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  _DWORD *v7; // rbp
  int v8; // edx
  int v9; // edx
  int v10; // [rsp+20h] [rbp-58h]
  int v11[2]; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+50h] [rbp-28h] BYREF
  _WORD v14[4]; // [rsp+58h] [rbp-20h] BYREF
  __int16 v15; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3;
  v7 = FdoExt(a1, a2, a3, a4);
  Log(a1, 4, 1919243348, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x18u,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
      *(unsigned __int16 *)(a2 + 4));
  if ( (v7[640] & 0x80u) != 0 )
  {
    v15 = 0;
    v14[0] = 2083;
    Log(a1, 4, 1920156737, v4, 0LL);
    v14[2] = *(_WORD *)(a2 + 4);
    v14[3] = 0;
    v14[1] = 16 * (v4 & 0x7F);
    v8 = UsbhSyncSendCommand(a1, (__int64)v14, 0LL, &v15, v10, &v13);
    if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
    {
      LOBYTE(v12) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 22, (int)v14, 8, v9, v13, usbfile_bus_c, 2412, v12);
    }
  }
  else
  {
    Log(a1, 4, 1851872340, a2, 0LL);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11[0] = *(unsigned __int16 *)(a2 + 4);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x19u,
        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
        *(_QWORD *)v11);
    }
  }
}
