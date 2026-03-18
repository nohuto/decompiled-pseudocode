/*
 * XREFs of VslIsSecureKernelRunning @ 0x1400B5F98
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1403DA8AC (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406266AC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140626FD8 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
