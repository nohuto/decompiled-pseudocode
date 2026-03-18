/*
 * XREFs of CiAllocateMemory @ 0x1C0002490
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000A410 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CiAllocateMemory(SIZE_T a1)
{
  return ExAllocatePoolWithTag((POOL_TYPE)512, a1, 0x74727641u);
}
