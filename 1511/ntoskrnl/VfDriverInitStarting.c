/*
 * XREFs of VfDriverInitStarting @ 0x1406B24B4
 * Callers:
 *     MmCallDllInitialize @ 0x14050A338 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140751FAC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
