/*
 * XREFs of UsbhFdoPnp_StopDevice @ 0x1C004BB90
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_FDO_Pnp_State @ 0x1C000BAB0 (Usbh_FDO_Pnp_State.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_StopDevice(__int64 a1, IRP *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  PDEVICE_OBJECT *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9

  Log(a1, 2, 1716737104, 0LL, (__int64)a2);
  v7 = (PDEVICE_OBJECT *)FdoExt(a1, v4, v5, v6);
  v11 = FdoExt(a1, v8, v9, v10);
  Usbh_FDO_Pnp_State((__int64)(v11 + 346), 5u, v12, v13);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v7[151], a2);
}
