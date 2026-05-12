/*
 * XREFs of RaCreateBus @ 0x1C00507F4
 * Callers:
 *     RaidCreateAdapter @ 0x1C000AC10 (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
