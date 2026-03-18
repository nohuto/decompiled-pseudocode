/*
 * XREFs of IoRequestDeviceEject @ 0x1401FA164
 * Callers:
 *     PipProcessStartPhase2 @ 0x1405501C8 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x1406973D8 (PipProcessRestartPhase2.c)
 * Callees:
 *     <none>
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
