/*
 * XREFs of VfDriverInitStarting @ 0x1407320CC
 * Callers:
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1407B8F6C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
