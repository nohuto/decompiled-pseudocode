/*
 * XREFs of MmGetVirtualForPhysical @ 0x14014CCEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall MmGetVirtualForPhysical(PHYSICAL_ADDRESS PhysicalAddress)
{
  return (PVOID)((PhysicalAddress.LowPart & 0xFFF)
               + ((__int64)(*(_QWORD *)(48 * ((unsigned __int64)PhysicalAddress.QuadPart >> 12) - 0x57FFFFFFFF8LL) << 25) >> 16));
}
