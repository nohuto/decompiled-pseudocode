/*
 * XREFs of PortFreeDriverParameters @ 0x1C0059798
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0025F90 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
