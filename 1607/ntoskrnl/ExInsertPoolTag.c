/*
 * XREFs of ExInsertPoolTag @ 0x14009AABC
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 */

_BOOL8 __fastcall ExInsertPoolTag(unsigned int a1, ULONG_PTR a2, unsigned __int64 a3, int a4, char a5)
{
  return ExpAllocateBigPool(a2, a4, a3, a1, a5) != 0;
}
