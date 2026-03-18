/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1401EC6EC
 * Callers:
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x140659210 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
