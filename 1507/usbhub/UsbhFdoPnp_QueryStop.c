/*
 * XREFs of UsbhFdoPnp_QueryStop @ 0x1C004B2B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C000A860 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     UsbhDisableHardReset @ 0x1C00467DC (UsbhDisableHardReset.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryStop(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0;
  v6 = (PDEVICE_OBJECT *)FdoExt(a1, (__int64)a2, a3, a4);
  v10 = FdoExt(a1, v7, v8, v9) + 346;
  Log(a1, 2, 1903784820, (__int64)v10, (__int64)a2);
  UsbhDisableHardReset(*((_QWORD *)v10 + 1));
  if ( (int)UsbhFdoCheckUpstreamConnectionState(*((_QWORD *)v10 + 1), &v15, v11, v12) >= 0 )
    Usbh_SSH_Event(*((PDEVICE_OBJECT *)v10 + 1), 6u, (__int64)v10, v13);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v6[151], a2);
}
