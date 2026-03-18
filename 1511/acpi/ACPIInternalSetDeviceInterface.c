/*
 * XREFs of ACPIInternalSetDeviceInterface @ 0x1C001ADA8
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C001AC80 (ACPIProcessorStartDevice.c)
 *     ACPICMButtonStartWorker @ 0x1C001AE80 (ACPICMButtonStartWorker.c)
 *     ACPIThermalStartDevice @ 0x1C006CB30 (ACPIThermalStartDevice.c)
 *     ACPIButtonStartDevice @ 0x1C006D540 (ACPIButtonStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C007ACA0 (ACPIFanStartDevice.c)
 * Callees:
 *     <none>
 */

int __fastcall ACPIInternalSetDeviceInterface(struct _DEVICE_OBJECT *a1, const GUID *a2)
{
  int result; // eax
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+20h] [rbp-18h] BYREF

  result = IoRegisterDeviceInterface(a1, a2, 0LL, &SymbolicLinkName);
  if ( result >= 0 )
    return IoSetDeviceInterfaceState(&SymbolicLinkName, 1u);
  return result;
}
