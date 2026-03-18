/*
 * XREFs of UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C00547D0
 * Callers:
 *     <none>
 * Callees:
 *     SET_PDO_SWPNPSTATE @ 0x1C00084E0 (SET_PDO_SWPNPSTATE.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044404 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C00451F0 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0054970 (UsbhPdoRemoveCleanup.c)
 */

__int64 __fastcall UsbhPdoPnp_SurpriseRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx
  int v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF

  v6 = PdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4);
  Log(*((_QWORD *)v6 + 147), 256, 1936879716, (__int64)Irp, *((_QWORD *)v6 + 144));
  Log(*((_QWORD *)v6 + 147), v7, 1936879665, (__int64)DeviceObject, (__int64)v6);
  UsbhSetPdo_FailIo((__int64)DeviceObject, v8, v9, v10);
  if ( (v6[353] & 0x400000) != 0 )
    KeSetEvent((PRKEVENT)v6 + 120, 0, 0);
  if ( (v6[356] & 0x40000) != 0 )
  {
    v13[0] = *((_QWORD *)v6 + 377);
    memset(&v13[1], 0, 5);
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, v13, 13LL, 0LL, 0LL);
    v6[356] &= ~0x40000u;
  }
  if ( (v6[356] & 0x80000) != 0 )
  {
    v13[0] = v6;
    LOWORD(v13[1]) = 0;
    BYTE2(v13[1]) = 0;
    ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_DEVICE_STATE, v13, 11LL, 0LL, 0LL);
    v6[356] &= ~0x80000u;
  }
  UsbhPdoRemoveCleanup(DeviceObject);
  Usbh_PdoSurpriseRemove_PdoEvent(*((struct _DEVICE_OBJECT **)v6 + 147), DeviceObject, (__int64)(v6 + 236), v11);
  SET_PDO_SWPNPSTATE((__int64)DeviceObject, 102, 3);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
