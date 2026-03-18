/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x140421578
 * Callers:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x14054886C (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1404215A8 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, int a2, int a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, a2, (a3 + 4095) & 0xFFFFF000, 0);
}
