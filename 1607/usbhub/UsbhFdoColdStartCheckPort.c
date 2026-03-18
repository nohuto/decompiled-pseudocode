/*
 * XREFs of UsbhFdoColdStartCheckPort @ 0x1C00035B8
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0003190 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoColdStartCheckPort(__int64 a1, int a2, __int64 a3)
{
  __int64 PortState; // rbx
  int v6; // r11d
  int v8; // r9d
  int v9; // [rsp+48h] [rbp-10h]
  int v11; // [rsp+70h] [rbp+18h]

  FdoExt(a1);
  PortState = (int)UsbhQueryPortState(a1);
  Log(a1, 16, 1667515185, *(unsigned __int16 *)(a3 + 4), PortState);
  if ( (PortState & 0xC0000000) != 0xC0000000 )
  {
    if ( (a2 & 1) != 0 && (a2 & 0x10000) == 0 )
    {
      Log(a1, v6, 1667515187, 0, PortState);
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_CONNECT,
        *(unsigned __int16 *)(a3 + 4),
        PortState);
      *(_BYTE *)(a3 + 2841) = 1;
    }
    return (unsigned int)PortState;
  }
  Log(a1, v6, 1667515186, 0, PortState);
  if ( !(unsigned __int8)Usb_Disconnected((unsigned int)PortState) )
  {
    LOBYTE(v9) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a3 + 4), 48, v8, 0, PortState, v11, usbfile_fdopwr_c, 3004, v9);
    return (unsigned int)PortState;
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, 0, PortState);
  return 0LL;
}
