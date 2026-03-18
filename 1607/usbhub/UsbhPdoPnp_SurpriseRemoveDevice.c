/*
 * XREFs of UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054D80
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C001B744 (SET_PDO_SWPNPSTATE.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044874 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045660 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhBillboardCleanup @ 0x1C0053BBC (UsbhBillboardCleanup.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0054ED8 (UsbhPdoRemoveCleanup.c)
 */

__int64 __fastcall UsbhPdoPnp_SurpriseRemoveDevice(PDEVICE_OBJECT Pdo, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx
  int v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  char v19; // [rsp+48h] [rbp-30h]
  int v20; // [rsp+49h] [rbp-2Fh]

  v6 = PdoExt((__int64)Pdo, (__int64)Irp, a3, a4);
  Log(*((_QWORD *)v6 + 147), 256, 1936879716, (__int64)Irp, *((_QWORD *)v6 + 144));
  Log(*((_QWORD *)v6 + 147), v7, 1936879665, (__int64)Pdo, (__int64)v6);
  UsbhSetPdo_FailIo((__int64)Pdo, v8, v9, v10);
  if ( (v6[353] & 0x400000) != 0 )
    KeSetEvent((PRKEVENT)(v6 + 722), 0, 0);
  if ( (v6[356] & 0x40000) != 0 )
  {
    v14 = *((_QWORD *)v6 + 378);
    v20 = 0;
    v18 = v14;
    v19 = 0;
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v18, 13LL, 0LL, 0LL);
    v6[356] &= ~0x40000u;
  }
  if ( *((_QWORD *)v6 + 300) )
    UsbhBillboardCleanup(Pdo, v11, v12, v13);
  UsbhPdoRemoveCleanup(Pdo);
  Usbh_PdoSurpriseRemove_PdoEvent(*((struct _DEVICE_OBJECT **)v6 + 147), Pdo, (__int64)(v6 + 236), v15);
  SET_PDO_SWPNPSTATE((__int64)Pdo, 102LL, 3LL, v16);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
