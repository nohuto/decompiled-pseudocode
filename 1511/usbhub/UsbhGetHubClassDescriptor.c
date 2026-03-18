/*
 * XREFs of UsbhGetHubClassDescriptor @ 0x1C001CC20
 * Callers:
 *     UsbhCheckHubPowerStatus @ 0x1C00034B0 (UsbhCheckHubPowerStatus.c)
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhGetDescriptor @ 0x1C001BBA0 (UsbhGetDescriptor.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubClassDescriptor(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r9
  unsigned int Descriptor; // ebx
  unsigned __int16 v9; // r10
  int v10; // r11d
  unsigned __int16 v12; // r10
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+48h] [rbp-20h]
  unsigned __int16 v15; // [rsp+80h] [rbp+18h] BYREF
  _DWORD *v16; // [rsp+88h] [rbp+20h] BYREF

  v6 = FdoExt(a1, (__int64)a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
  v16 = v6 + 734;
  memset(a2, 0, 0x47uLL);
  LOBYTE(v7) = 41;
  v15 = 71;
  Descriptor = UsbhGetDescriptor(a1, &v15, (__int64)a2, v7, v13, 1);
  Log(a1, 8, 1214475379, (int)Descriptor, v15);
  if ( (Descriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( !(unsigned __int8)Usb_Disconnected(Descriptor) )
    {
      LOBYTE(v14) = 0;
      UsbhException(a1, 0, 14, (int)&v16, v12, Descriptor, -1, usbfile_hub_c, 4077, v14);
    }
  }
  else if ( *((_BYTE *)v16 + 2) )
  {
    v6[640] |= 0x400000u;
    Log(a1, v10, 1214475364, (__int64)v16, *((unsigned __int8 *)v16 + 2));
  }
  else
  {
    LOBYTE(v14) = 0;
    Descriptor = -1073741811;
    UsbhException(a1, 0, 15, (int)&v16, v9, -1073741811, -1, usbfile_hub_c, 4086, v14);
  }
  return Descriptor;
}
