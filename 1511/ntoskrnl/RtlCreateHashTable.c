/*
 * XREFs of RtlCreateHashTable @ 0x1400E5860
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x1400035E4 (SepSetTokenLowboxHandles.c)
 *     SepBuildCapPolicyTable @ 0x1400F3BAC (SepBuildCapPolicyTable.c)
 *     SepInitializeLowBoxNumberTable @ 0x14050D018 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x1405282C4 (SepInitializeSharedSidMap.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140762A88 (SepInitializeSingletonAttributesStructures.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
