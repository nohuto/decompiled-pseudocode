/*
 * XREFs of PortFreeDriverParameters @ 0x1C00558D4
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0023B14 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
