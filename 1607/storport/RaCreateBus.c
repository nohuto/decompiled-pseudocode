/*
 * XREFs of RaCreateBus @ 0x1C005776C
 * Callers:
 *     RaidCreateAdapter @ 0x1C0015D30 (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
