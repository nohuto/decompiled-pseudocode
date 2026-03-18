/*
 * XREFs of MmIsIoSpaceActive @ 0x1401E6D48
 * Callers:
 *     <none>
 * Callees:
 *     MiIsProbeActive @ 0x14010DED8 (MiIsProbeActive.c)
 */

LOGICAL __stdcall MmIsIoSpaceActive(PHYSICAL_ADDRESS StartAddress, SIZE_T NumberOfBytes)
{
  return MiIsProbeActive(
           (unsigned __int64)StartAddress.QuadPart >> 12,
           ((StartAddress.QuadPart - 1 + NumberOfBytes) >> 12) - ((unsigned __int64)StartAddress.QuadPart >> 12) + 1,
           0);
}
