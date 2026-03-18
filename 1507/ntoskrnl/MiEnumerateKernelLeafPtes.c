/*
 * XREFs of MiEnumerateKernelLeafPtes @ 0x1403F0340
 * Callers:
 *     MmUpdateHiberMappings @ 0x1403F02FC (MmUpdateHiberMappings.c)
 *     MmMarkHiberPhase @ 0x1403F16C0 (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEnumerateKernelLeafPtes(
        __int64 (__fastcall *a1)(__int64, unsigned __int64, unsigned __int64),
        __int64 a2)
{
  PVOID v2; // rax

  v2 = MmSystemRangeStart;
  if ( MmSystemRangeStart == (const PVOID)0xFFFFF68000000000LL )
    v2 = (PVOID)0xFFFFF70000000000LL;
  return MiEnumerateLeafPtes((unsigned __int64)v2, 0xFFFFFFFFFFFFFFFFuLL, a1, a2);
}
