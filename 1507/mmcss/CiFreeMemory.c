/*
 * XREFs of CiFreeMemory @ 0x1C00042BC
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000A410 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000BF94 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C30C (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
