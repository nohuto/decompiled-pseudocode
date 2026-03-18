/*
 * XREFs of IoRequestDeviceEject @ 0x1401BE8FC
 * Callers:
 *     PipProcessStartPhase2 @ 0x1404F1A4C (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x140618DE8 (PipProcessRestartPhase2.c)
 * Callees:
 *     <none>
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
