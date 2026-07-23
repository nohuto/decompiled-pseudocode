/*
 * XREFs of IoSetDeviceToVerify @ 0x1401C90C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoSetDeviceToVerify(PETHREAD Thread, PDEVICE_OBJECT DeviceObject)
{
  Thread[1].ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)DeviceObject;
}
