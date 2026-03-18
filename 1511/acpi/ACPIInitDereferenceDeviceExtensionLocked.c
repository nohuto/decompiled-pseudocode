/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C003C718
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0021828 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0036438 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C93C (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C0040570 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C46C (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(volatile signed __int32 *a1)
{
  if ( _InterlockedDecrement(a1 + 169) )
    return 0;
  ACPIInitDeleteDeviceExtension(a1);
  return 1;
}
