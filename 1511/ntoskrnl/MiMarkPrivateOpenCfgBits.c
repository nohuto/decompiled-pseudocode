/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1403CAE00
 * Callers:
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1403CA63C (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1403CAE30 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, int a2, int a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, a2, (a3 + 4095) & 0xFFFFF000, 0);
}
