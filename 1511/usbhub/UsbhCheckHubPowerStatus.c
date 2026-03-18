/*
 * XREFs of UsbhCheckHubPowerStatus @ 0x1C00034B0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00089C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001CC20 (UsbhGetHubClassDescriptor.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhCheckHubPowerStatus(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // ecx
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  __int64 v12; // [rsp+20h] [rbp-A8h]
  int v13; // [rsp+48h] [rbp-80h]
  _DWORD v14[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v15[80]; // [rsp+60h] [rbp-68h] BYREF

  v14[0] = 0;
  v2 = FdoExt(a1);
  v3 = UsbhFdoCheckUpstreamConnectionState(a1, v14);
  v4 = v3;
  if ( v3 >= 0 && (*(_DWORD *)(v2 + 4216) & 0xFFFFFFFD) == 0 )
  {
    v12 = v3;
    v5 = 810571602;
    v6 = a1;
LABEL_4:
    Log(v6, 16, v5, 0, v12);
    goto LABEL_5;
  }
  if ( (unsigned __int8)Usb_Disconnected((unsigned int)v3) )
  {
    v12 = v4;
    v6 = a1;
    if ( (v14[0] & 2) != 0 )
    {
      Log(a1, 16, 1347892082, 0, v4);
      LOBYTE(v13) = 0;
      UsbhException(a1, 0, 112, v8, 0, v4, 0, usbfile_fdopwr_c, 3861, v13);
      goto LABEL_5;
    }
    v5 = 1347900018;
    goto LABEL_4;
  }
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 16, 1347899937, 0, v4);
    LOBYTE(v13) = 0;
    UsbhException(a1, 0, v9 + 110, v9, 0, v4, 0, usbfile_fdopwr_c, 3881, v13);
  }
  else if ( (int)v4 < 0 || (v14[0] & 1) != 0 )
  {
    LODWORD(v4) = UsbhGetHubClassDescriptor(a1, v15);
    Log(a1, 16, 1666209618, 0, (int)v4);
    if ( (v4 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v4) )
    {
      LOBYTE(v13) = 0;
      UsbhException(a1, 0, v11 + 109, v11, 0, v4, 0, usbfile_fdopwr_c, 3915, v13);
    }
  }
  else
  {
    LODWORD(v4) = -1073741823;
    Log(a1, 16, 1699764050, 0, -1073741823LL);
    LOBYTE(v13) = 0;
    UsbhException(a1, 0, v10 + 111, v10, 0, -1073741823, 0, usbfile_fdopwr_c, 3897, v13);
  }
LABEL_5:
  Log(a1, 16, 1348825714, 0, (int)v4);
  return (unsigned int)v4;
}
