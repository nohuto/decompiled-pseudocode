/*
 * XREFs of VslIsSecureKernelRunning @ 0x1401429E8
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1403AE820 (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1405FD364 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

bool VslIsSecureKernelRunning()
{
  return (HvlpFlags & 0x2000) != 0;
}
