/*
 * XREFs of MiEnumerateKernelLeafPtes @ 0x1403C9674
 * Callers:
 *     MmUpdateHiberMappings @ 0x1403C9630 (MmUpdateHiberMappings.c)
 *     MmMarkHiberPhase @ 0x1403CAD7C (MmMarkHiberPhase.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x1400B7AA0 (MiEnumerateLeafPtes.c)
 */

unsigned __int64 __fastcall MiEnumerateKernelLeafPtes(
        __int64 (__fastcall *a1)(__int64, unsigned __int64, unsigned __int64),
        __int64 a2)
{
  return MiEnumerateLeafPtes(0xFFFF800000000000uLL, 0xFFFFFFFFFFFFFFFFuLL, a1, a2, 2);
}
