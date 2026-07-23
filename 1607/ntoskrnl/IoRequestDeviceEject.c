/*
 * XREFs of IoRequestDeviceEject @ 0x1401CCCE0
 * Callers:
 *     PipProcessStartPhase2 @ 0x14050CFC4 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14064E080 (PipProcessRestartPhase2.c)
 * Callees:
 *     <none>
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
