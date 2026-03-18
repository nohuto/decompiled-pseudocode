/*
 * XREFs of UsbhSuspendPort @ 0x1C0025A38
 * Callers:
 *     UsbhRequestPortSuspend @ 0x1C00258F4 (UsbhRequestPortSuspend.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040874 (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhGetPortStatus @ 0x1C003C2C8 (UsbhGetPortStatus.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhSuspendPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  _DWORD *v6; // r13
  __int64 v7; // rdi
  int v9; // r10d
  int PortStatus; // eax
  int v11; // [rsp+20h] [rbp-30h]
  int v12; // [rsp+48h] [rbp-8h]
  __int16 v13; // [rsp+98h] [rbp+48h] BYREF
  int v14; // [rsp+A0h] [rbp+50h] BYREF
  int v15; // [rsp+A8h] [rbp+58h] BYREF
  __int16 v16; // [rsp+ACh] [rbp+5Ch]
  __int16 v17; // [rsp+AEh] [rbp+5Eh]

  v4 = (unsigned __int16)a2;
  v14 = 0;
  v13 = 0;
  v6 = FdoExt(a1, a2, a3, a4);
  Log(a1, 8, 1937076272, v4, 0LL);
  v15 = 131875;
  v16 = v4;
  v17 = 0;
  v7 = (int)UsbhSyncSendCommand(a1, (__int64)&v15, 0LL, &v13, v11, &v14);
  Log(a1, 8, 1937076273, v7, v14);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v7) )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, (unsigned __int16)v4, 51, 0, 0, v7, v9, usbfile_hub_c, 3651, v12);
  }
  Log(a1, 8, 1937077072, v7, v4);
  if ( (v6[641] & 2) != 0 )
  {
    PortStatus = UsbhGetPortStatus(a1, (unsigned __int16)v4, &v13, &v14);
    Log(a1, 8, 1937076307, PortStatus, v14);
  }
  return (unsigned int)v7;
}
