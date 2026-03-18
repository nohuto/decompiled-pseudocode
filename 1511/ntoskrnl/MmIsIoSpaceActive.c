/*
 * XREFs of MmIsIoSpaceActive @ 0x1401D5718
 * Callers:
 *     <none>
 * Callees:
 *     MiIsProbeActive @ 0x140103284 (MiIsProbeActive.c)
 */

LOGICAL __stdcall MmIsIoSpaceActive(PHYSICAL_ADDRESS StartAddress, SIZE_T NumberOfBytes)
{
  return MiIsProbeActive(
           StartAddress.QuadPart >> 12,
           ((__int64)(StartAddress.QuadPart - 1 + NumberOfBytes) >> 12) - (StartAddress.QuadPart >> 12) + 1,
           0);
}
