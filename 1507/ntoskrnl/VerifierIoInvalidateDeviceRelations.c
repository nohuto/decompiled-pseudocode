/*
 * XREFs of VerifierIoInvalidateDeviceRelations @ 0x14025AFC4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoInvalidateDeviceRelations(PDEVICE_OBJECT DeviceObject, DEVICE_RELATION_TYPE Type)
{
  pXdvIoInvalidateDeviceRelations(DeviceObject, Type);
}
