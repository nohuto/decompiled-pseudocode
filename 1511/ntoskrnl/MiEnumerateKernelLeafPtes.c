/*
 * XREFs of MiEnumerateKernelLeafPtes @ 0x14039DF84
 * Callers:
 *     MmUpdateHiberMappings @ 0x14039DF40 (MmUpdateHiberMappings.c)
 *     MmMarkHiberPhase @ 0x14039EE0C (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEnumerateKernelLeafPtes(
        void (__fastcall *a1)(__int64, unsigned __int64, unsigned __int64),
        __int64 a2)
{
  PVOID v2; // rax

  v2 = MmSystemRangeStart;
  if ( MmSystemRangeStart == (const PVOID)0xFFFFF68000000000LL )
    v2 = (PVOID)0xFFFFF70000000000LL;
  return MiEnumerateLeafPtes((unsigned __int64)v2, 0xFFFFFFFFFFFFFFFFuLL, a1, a2);
}
