/*
 * XREFs of IoRequestDeviceEject @ 0x1401CCE94
 * Callers:
 *     PipProcessStartPhase2 @ 0x1404E7068 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14064DF9C (PipProcessRestartPhase2.c)
 * Callees:
 *     <none>
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
