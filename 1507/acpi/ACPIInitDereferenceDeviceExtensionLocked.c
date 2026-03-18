/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C003C388
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0021010 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C5AC (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C0040AC0 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C0DC (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(volatile signed __int32 *a1)
{
  if ( _InterlockedDecrement(a1 + 169) )
    return 0;
  ACPIInitDeleteDeviceExtension(a1);
  return 1;
}
