/*
 * XREFs of RaidCreateDma @ 0x1C004D098
 * Callers:
 *     RaidCreateAdapter @ 0x1C0008A24 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

void *__fastcall RaidCreateDma(void *a1)
{
  void *result; // rax

  if ( a1 )
    return memset(a1, 0, 0x20uLL);
  return result;
}
