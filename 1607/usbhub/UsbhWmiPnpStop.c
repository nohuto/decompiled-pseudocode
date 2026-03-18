/*
 * XREFs of UsbhWmiPnpStop @ 0x1C004F0D0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

int __fastcall UsbhWmiPnpStop(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx

  v5 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  v6 = v5;
  if ( (v5[640] & 2) != 0 )
  {
    LODWORD(v5) = IoWMIRegistrationControl(DeviceObject, 2u);
    v6[640] &= ~2u;
  }
  return (int)v5;
}
