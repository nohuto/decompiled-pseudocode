/*
 * XREFs of ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00DC6F4
 * Callers:
 *     ndisCreateHandler @ 0x1C0004CC4 (ndisCreateHandler.c)
 *     ndisCloseHandler @ 0x1C000B2C0 (ndisCloseHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetupDeviceCreateIrp(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
