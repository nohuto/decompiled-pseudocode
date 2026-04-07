/*
 * XREFs of _dynamic_initializer_for__g_DwmWinSqmInstance__ @ 0x1800010F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

void *dynamic_initializer_for__g_DwmWinSqmInstance__()
{
  void *result; // rax

  memset_0(&g_DwmWinSqmInstance, 0, 0x500uLL);
  result = memset_0(&unk_1800BACF8, 0, 0x500uLL);
  byte_1800BACF0 = 0;
  byte_1800BB1F8 = 0;
  return result;
}
