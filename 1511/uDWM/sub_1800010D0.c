/*
 * XREFs of sub_1800010D0 @ 0x1800010D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

void *sub_1800010D0()
{
  void *result; // rax

  memset_0(&g_DwmWinSqmInstance, 0, 0x500uLL);
  result = memset_0(&unk_1800BECE8, 0, 0x500uLL);
  byte_1800BECE0 = 0;
  byte_1800BF1E8 = 0;
  return result;
}
