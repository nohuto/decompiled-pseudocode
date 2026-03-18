/*
 * XREFs of CiFreeMemory @ 0x1C0004714
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000ACD0 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000BFD4 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C34C (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
