/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F96C
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C00285EC (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FB94 (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C0056A20 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F634 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(volatile signed __int32 *a1)
{
  if ( _InterlockedDecrement(a1 + 171) )
    return 0;
  ACPIInitDeleteDeviceExtension(a1);
  return 1;
}
