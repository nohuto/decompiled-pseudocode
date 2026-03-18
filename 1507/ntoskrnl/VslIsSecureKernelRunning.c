/*
 * XREFs of VslIsSecureKernelRunning @ 0x1401EE648
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

bool VslIsSecureKernelRunning()
{
  return (HvlpFlags & 0x2000) != 0;
}
