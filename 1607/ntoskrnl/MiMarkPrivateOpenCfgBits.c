/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1404F444C
 * Callers:
 *     MiCommitVadCfgBits @ 0x140429850 (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x140429A14 (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1404F45BC (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1404F4488 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, int a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, 1, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0);
}
