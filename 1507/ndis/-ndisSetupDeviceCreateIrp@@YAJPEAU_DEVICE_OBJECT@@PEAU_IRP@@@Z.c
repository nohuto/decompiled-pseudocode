/*
 * XREFs of ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E29A4
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0003150 (ndisCloseIrpHandler.c)
 *     ndisCreateHandler @ 0x1C00086B0 (ndisCreateHandler.c)
 *     ndisCloseHandler @ 0x1C00575C4 (ndisCloseHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetupDeviceCreateIrp(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
