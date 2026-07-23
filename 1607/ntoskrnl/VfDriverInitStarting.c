/*
 * XREFs of VfDriverInitStarting @ 0x1406FE168
 * Callers:
 *     MmCallDllInitialize @ 0x1405447E0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
