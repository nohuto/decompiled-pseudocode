/*
 * XREFs of UsbhFdoPnp_PassOnSuccess @ 0x1C004B210
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_PassOnSuccess(__int64 a1, IRP *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  PDEVICE_OBJECT *v7; // rax

  Log(a1, 2, 1718842723, 0LL, (__int64)a2);
  v7 = (PDEVICE_OBJECT *)FdoExt(v6, v3, v4, v5);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v7[151], a2);
}
