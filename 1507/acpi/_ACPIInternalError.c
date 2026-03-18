/*
 * XREFs of _ACPIInternalError @ 0x1C0036CD8
 * Callers:
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C006A528 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiArblibScoreRequirement @ 0x1C0079300 (AcpiArblibScoreRequirement.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA3u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
