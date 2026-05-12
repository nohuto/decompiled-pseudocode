/*
 * XREFs of RaidCreateDma @ 0x1C005ABB0
 * Callers:
 *     RaidCreateAdapter @ 0x1C0015D30 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 */

void *__fastcall RaidCreateDma(void *a1)
{
  void *result; // rax

  if ( a1 )
    return memset(a1, 0, 0x20uLL);
  return result;
}
