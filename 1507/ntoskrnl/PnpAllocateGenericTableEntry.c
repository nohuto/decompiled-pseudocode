/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x140559F28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PnpAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag((POOL_TYPE)257, a2, 0x75737050u);
}
