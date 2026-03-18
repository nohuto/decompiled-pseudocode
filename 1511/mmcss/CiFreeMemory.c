/*
 * XREFs of CiFreeMemory @ 0x1C00043AC
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000A2A0 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000BF84 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C2FC (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
