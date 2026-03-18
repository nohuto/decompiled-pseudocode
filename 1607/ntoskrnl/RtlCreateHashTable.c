/*
 * XREFs of RtlCreateHashTable @ 0x1400A955C
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x14007F580 (SepSetTokenLowboxHandles.c)
 *     SepBuildCapPolicyTable @ 0x140144EF0 (SepBuildCapPolicyTable.c)
 *     SepInitializeLowBoxNumberTable @ 0x14054847C (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14054CF48 (SepInitializeSharedSidMap.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1407B2E80 (SepInitializeSingletonAttributesStructures.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
