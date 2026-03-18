/*
 * XREFs of UsbhGetHubClassDescriptor @ 0x1C00205F8
 * Callers:
 *     UsbhCheckHubPowerStatus @ 0x1C00034B0 (UsbhCheckHubPowerStatus.c)
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhGetDescriptor @ 0x1C00206F4 (UsbhGetDescriptor.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubClassDescriptor(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  unsigned int Descriptor; // ebx
  unsigned __int16 v8; // r10
  int v9; // r11d
  unsigned __int16 v11; // r10
  int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+48h] [rbp-20h]
  _DWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  v6 = FdoExt(a1, (__int64)a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
  v14 = v6 + 734;
  memset(a2, 0, 0x47uLL);
  Descriptor = UsbhGetDescriptor(a1, v12, 1);
  Log(a1, 8, 1214475379, (int)Descriptor, 71LL);
  if ( (Descriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( !(unsigned __int8)Usb_Disconnected(Descriptor) )
    {
      LOBYTE(v13) = 0;
      UsbhException(a1, 0, 14, (int)&v14, v11, Descriptor, -1, usbfile_hub_c, 4077, v13);
    }
  }
  else if ( *((_BYTE *)v14 + 2) )
  {
    v6[640] |= 0x400000u;
    Log(a1, v9, 1214475364, (__int64)v14, *((unsigned __int8 *)v14 + 2));
  }
  else
  {
    LOBYTE(v13) = 0;
    Descriptor = -1073741811;
    UsbhException(a1, 0, 15, (int)&v14, v8, -1073741811, -1, usbfile_hub_c, 4086, v13);
  }
  return Descriptor;
}
