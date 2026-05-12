/*
 * XREFs of PortFreeDriverParameters @ 0x1C005FE78
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0029A30 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
