/*
 * XREFs of _ACPIInternalError @ 0x1C00378C8
 * Callers:
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0067B28 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiArblibScoreRequirement @ 0x1C0079460 (AcpiArblibScoreRequirement.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA3u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
