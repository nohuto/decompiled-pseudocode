/*
 * XREFs of UsbhBusIfAddDevice @ 0x1C00127E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetBusInterface @ 0x1C0010490 (UsbhGetBusInterface.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhBusIfAddDevice(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int16 v2; // r14
  __int64 v3; // rbx
  unsigned __int16 i; // r10
  unsigned __int16 v5; // r10
  int BusInterface; // ebp
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r14
  unsigned __int16 v9; // r10
  __int64 v10; // rdi
  __int64 v11; // rax
  char v12; // al
  char v13; // cl
  char v14; // al
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // r9
  int v18; // r10d
  __int64 v19; // r9
  int v21; // [rsp+48h] [rbp-30h]

  v2 = 9;
  v3 = FdoExt(DeviceObject);
  for ( i = 328; ; i = 312 )
  {
    Log((_DWORD)DeviceObject, 8, 1198090289, i, v2);
    BusInterface = UsbhGetBusInterface(
                     DeviceObject,
                     (void *)(v3 + 4224),
                     (unsigned __int64)&USB_BUS_INTERFACE_HUB_GUID,
                     v5,
                     v2);
    Log((_DWORD)DeviceObject, 8, 1198090290, BusInterface, v2);
    if ( BusInterface >= 0 )
      break;
    LOBYTE(v21) = 0;
    UsbhException((int)DeviceObject, 0, 26, 0, 0, BusInterface, 0, usbfile_busif_c, 243, v21);
    if ( v2 != 9 )
      goto LABEL_4;
    v2 = 8;
  }
  *(_DWORD *)(v3 + 2560) |= 4u;
LABEL_4:
  v7 = 96;
  v8 = 3;
  if ( BusInterface >= 0 )
  {
    while ( 1 )
    {
      Log((_DWORD)DeviceObject, 8, 1198093617, v7, v8);
      BusInterface = UsbhGetBusInterface(
                       DeviceObject,
                       (void *)(v3 + 4552),
                       (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID,
                       v9,
                       v8);
      Log((_DWORD)DeviceObject, 8, 1198093618, BusInterface, v8);
      if ( BusInterface >= 0 )
        break;
      LOBYTE(v21) = 0;
      UsbhException((int)DeviceObject, 0, 27, 0, 0, BusInterface, 0, usbfile_busif_c, 281, v21);
      if ( v8 != 3 )
        goto LABEL_10;
      v7 = 80;
      v8 = 2;
    }
    *(_DWORD *)(v3 + 2560) |= 8u;
    v10 = FdoExt(DeviceObject);
    if ( *(_QWORD *)(v10 + 4384) )
    {
      v11 = FdoExt(DeviceObject);
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v10 + 4384))(*(_QWORD *)(v10 + 4232), *(_QWORD *)(v11 + 1192));
      BusInterface = 0;
      v13 = 1;
      if ( v12 )
        goto LABEL_9;
    }
    else
    {
      BusInterface = -1073741822;
    }
    v13 = 0;
LABEL_9:
    v14 = v13 ^ *(_DWORD *)(v3 + 2560);
    *(_WORD *)(v3 + 4800) = v8;
    *(_DWORD *)(v3 + 2560) ^= v14 & 1;
LABEL_10:
    if ( BusInterface >= 0 )
    {
      Log((_DWORD)DeviceObject, 8, 1198091569, 40, 0LL);
      UsbhGetBusInterface(
        DeviceObject,
        (void *)(v3 + 4648),
        (unsigned __int64)&USB_BUS_INTERFACE_HUB_MINIDUMP_GUID,
        v15,
        0);
      Log((_DWORD)DeviceObject, 8, 1198091570, BusInterface, 0LL);
      if ( v16 >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x20000000u;
      Log((_DWORD)DeviceObject, 8, 1198093105, 48, 0LL);
      UsbhGetBusInterface(DeviceObject, (void *)(v3 + 4688), (unsigned __int64)&USB_BUS_INTERFACE_HUB_SS_GUID, v17, 0);
      Log((_DWORD)DeviceObject, 8, 1198093106, BusInterface, 0LL);
      if ( v18 >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x800000u;
      Log((_DWORD)DeviceObject, 8, 1197895729, 64, 0LL);
      BusInterface = UsbhGetBusInterface(
                       DeviceObject,
                       (void *)(v3 + 4736),
                       (unsigned __int64)&USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS_GUID,
                       v19,
                       0);
      Log((_DWORD)DeviceObject, 8, 1197895730, BusInterface, 0LL);
      if ( BusInterface >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x80000000;
    }
  }
  Log((_DWORD)DeviceObject, 8, 1651730790, 0, BusInterface);
  return (unsigned int)BusInterface;
}
