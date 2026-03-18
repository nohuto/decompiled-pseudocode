/*
 * XREFs of UsbhPdoCreateSymbolicLink @ 0x1C0027288
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhSetPdoRegistryParameter @ 0x1C000AB2C (UsbhSetPdoRegistryParameter.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoCreateSymbolicLink(
        PDEVICE_OBJECT DeviceObject,
        const GUID *InterfaceClassGuid,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v6; // rdi
  struct _UNICODE_STRING *v7; // rsi
  NTSTATUS v8; // ebx
  int v10; // eax
  void *v11; // rcx
  int v12; // [rsp+48h] [rbp-10h]

  v6 = PdoExt((__int64)DeviceObject, (__int64)InterfaceClassGuid, a3, a4);
  v7 = (struct _UNICODE_STRING *)(v6 + 298);
  v8 = IoRegisterDeviceInterface(DeviceObject, InterfaceClassGuid, 0LL, (PUNICODE_STRING)(v6 + 298));
  if ( v8 < 0 )
    goto LABEL_11;
  v8 = IoSetDeviceInterfaceState(v7, 1u);
  if ( v8 < 0
    || (v6[353] |= 0x10u,
        v8 = UsbhSetPdoRegistryParameter(
               DeviceObject,
               L"SymbolicName",
               1u,
               *((PVOID *)v6 + 150),
               *((unsigned __int16 *)v6 + 596)),
        v8 < 0) )
  {
    v10 = v6[353];
    if ( (v10 & 0x10) != 0 )
    {
      v6[353] = v10 & 0xFFFFFFEF;
      IoSetDeviceInterfaceState(v7, 0);
    }
    v6[353] &= ~8u;
    v11 = (void *)*((_QWORD *)v6 + 150);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)v6 + 150) = 0LL;
    }
  }
  else
  {
    v6[353] |= 8u;
  }
  if ( v8 < 0 )
  {
LABEL_11:
    LOBYTE(v12) = 0;
    UsbhException(*((_QWORD *)v6 + 147), *((unsigned __int16 *)v6 + 710), 101, 0, 0, v8, -1, usbfile_pdo_c, 358, v12);
  }
  Log(*((_QWORD *)v6 + 147), 256, 1937337676, v8, (__int64)DeviceObject);
  return (unsigned int)v8;
}
