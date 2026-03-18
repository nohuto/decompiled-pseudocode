/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1401DB928
 * Callers:
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x140623BE0 (MiLogSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
