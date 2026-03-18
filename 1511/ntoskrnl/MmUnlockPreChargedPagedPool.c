/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140117C20
 * Callers:
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 * Callees:
 *     MiUnlockCodePage @ 0x1400A1DD0 (MiUnlockCodePage.c)
 */

void __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1, __int64 a2)
{
  if ( (dword_1403810E8 & 2) == 0 )
    MiUnlockCodePage(
      ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * ((((a1 & 0xFFF) + a2 + 4095) >> 12) - 1));
}
