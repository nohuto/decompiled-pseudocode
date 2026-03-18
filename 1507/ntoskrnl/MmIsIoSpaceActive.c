/*
 * XREFs of MmIsIoSpaceActive @ 0x1402176A4
 * Callers:
 *     <none>
 * Callees:
 *     MiIsProbeActive @ 0x140135338 (MiIsProbeActive.c)
 */

LOGICAL __stdcall MmIsIoSpaceActive(PHYSICAL_ADDRESS StartAddress, SIZE_T NumberOfBytes)
{
  return MiIsProbeActive(
           (unsigned __int64 *)(StartAddress.QuadPart >> 12),
           ((__int64)(StartAddress.QuadPart - 1 + NumberOfBytes) >> 12) - (StartAddress.QuadPart >> 12) + 1,
           0);
}
