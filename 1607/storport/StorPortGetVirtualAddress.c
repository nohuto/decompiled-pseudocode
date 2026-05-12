/*
 * XREFs of StorPortGetVirtualAddress @ 0x1C002DCB0
 * Callers:
 *     StorPortGetVirtualAddressVrfy @ 0x1C0062300 (StorPortGetVirtualAddressVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
