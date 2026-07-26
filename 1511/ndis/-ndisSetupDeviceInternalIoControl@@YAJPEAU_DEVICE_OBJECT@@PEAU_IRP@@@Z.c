/*
 * XREFs of ?ndisSetupDeviceInternalIoControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00DC710
 * Callers:
 *     ndisDeviceInternalDispatch @ 0x1C005EAFC (ndisDeviceInternalDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetupDeviceInternalIoControl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  a2->IoStatus.Status = -1073741637;
  IofCompleteRequest(a2, 0);
  return 3221225659LL;
}
