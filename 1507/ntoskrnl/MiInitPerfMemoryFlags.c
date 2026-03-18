/*
 * XREFs of MiInitPerfMemoryFlags @ 0x140220484
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x1406A2DF4 (MiLogSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
