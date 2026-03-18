/*
 * XREFs of UsbhQueryHubState @ 0x1C001C92C
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 *     UsbhGetHubPowerStatus @ 0x1C001CA44 (UsbhGetHubPowerStatus.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryHubState(__int64 a1, int *a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int16 v12; // r8
  int v13; // [rsp+20h] [rbp-60h]
  int v14; // [rsp+48h] [rbp-38h]
  _DWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h] BYREF
  int v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+64h] [rbp-1Ch] BYREF
  char v19; // [rsp+68h] [rbp-18h]

  v15[0] = 160;
  *a2 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 4;
  v15[1] = 0x40000;
  v6 = UsbhSyncSendCommand(a1, (__int64)v15, (__int64)&v17, &v18, v13, &v16);
  v7 = v16;
  v8 = v6;
  Log(a1, 4, 1365799796, v6, v16);
  if ( v8 < 0 || (_WORD)v18 == 4 )
  {
    if ( (v8 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v8) )
    {
      Log(a1, 4, 1366324018, v12, v7);
      LOBYTE(v14) = 0;
      UsbhException(a1, 0, 8, (int)&v17, 10, v8, v7, usbfile_bus_c, 1737, v14);
    }
    if ( v8 >= 0 )
    {
      v9 = (unsigned __int16)v17;
      v10 = HIWORD(v17);
      *a2 = v17;
      Log(a1, 4, 1215329140, v10, v9);
    }
    if ( a3 )
      *a3 = v7;
    return (unsigned int)v8;
  }
  else
  {
    Log(a1, 4, 1366324017, (unsigned __int16)v18, v7);
    LOBYTE(v14) = 0;
    UsbhException(a1, 0, 9, (int)&v17, 10, v8, v7, usbfile_bus_c, 1725, v14);
    if ( a3 )
      *a3 = v7;
    return 3221225473LL;
  }
}
