/*
 * XREFs of VerifierIoSetStartIoAttributes @ 0x1406C0874
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoSetStartIoAttributes(
        PDEVICE_OBJECT DeviceObject,
        BOOLEAN DeferredStartIo,
        BOOLEAN NonCancelable)
{
  pXdvIoSetStartIoAttributes(DeviceObject, DeferredStartIo, NonCancelable);
}
