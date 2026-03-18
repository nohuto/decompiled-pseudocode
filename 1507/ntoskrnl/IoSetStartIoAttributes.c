/*
 * XREFs of IoSetStartIoAttributes @ 0x140171678
 * Callers:
 *     VerifierIoSetStartIoAttributes @ 0x140742068 (VerifierIoSetStartIoAttributes.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetStartIoAttributes(PDEVICE_OBJECT DeviceObject, BOOLEAN DeferredStartIo, BOOLEAN NonCancelable)
{
  if ( DeferredStartIo )
    DeviceObject->DeviceObjectExtension->StartIoFlags |= 0x100u;
  if ( NonCancelable )
    DeviceObject->DeviceObjectExtension->StartIoFlags |= 0x200u;
}
