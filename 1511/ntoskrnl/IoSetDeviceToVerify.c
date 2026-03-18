/*
 * XREFs of IoSetDeviceToVerify @ 0x14012FD00
 * Callers:
 *     VerifierIoSetDeviceToVerify @ 0x14020B930 (VerifierIoSetDeviceToVerify.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetDeviceToVerify(PETHREAD Thread, PDEVICE_OBJECT DeviceObject)
{
  Thread[1].ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)DeviceObject;
}
