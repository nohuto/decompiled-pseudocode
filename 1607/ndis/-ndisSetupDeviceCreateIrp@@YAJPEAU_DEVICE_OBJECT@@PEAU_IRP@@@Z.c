/*
 * XREFs of ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E2588
 * Callers:
 *     ndisCloseHandler @ 0x1C000CC68 (ndisCloseHandler.c)
 *     ndisCreateHandler @ 0x1C000CEDC (ndisCreateHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetupDeviceCreateIrp(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
