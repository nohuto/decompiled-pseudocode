/*
 * XREFs of IoSetDeviceToVerify @ 0x1401F6724
 * Callers:
 *     VerifierIoSetDeviceToVerify @ 0x14025AFCC (VerifierIoSetDeviceToVerify.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetDeviceToVerify(PETHREAD Thread, PDEVICE_OBJECT DeviceObject)
{
  Thread[1].ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)DeviceObject;
}
