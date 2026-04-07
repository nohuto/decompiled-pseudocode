/*
 * XREFs of _dynamic_initializer_for__g_DwmWinSqmInstance__ @ 0x1800010C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

void *dynamic_initializer_for__g_DwmWinSqmInstance__()
{
  void *result; // rax

  memset_0(&g_DwmWinSqmInstance, 0, 0x500uLL);
  result = memset_0(&unk_1800BCCD8, 0, 0x500uLL);
  byte_1800BCCD0 = 0;
  byte_1800BD1D8 = 0;
  return result;
}
