/*
 * XREFs of RtlCreateHashTable @ 0x1400A7ADC
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x14007F600 (SepSetTokenLowboxHandles.c)
 *     SepBuildCapPolicyTable @ 0x140145460 (SepBuildCapPolicyTable.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405489BC (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14054D488 (SepInitializeSharedSidMap.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1407B2E80 (SepInitializeSingletonAttributesStructures.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
