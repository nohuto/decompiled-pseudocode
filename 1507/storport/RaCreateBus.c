/*
 * XREFs of RaCreateBus @ 0x1C004C790
 * Callers:
 *     RaidCreateAdapter @ 0x1C0008A24 (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
