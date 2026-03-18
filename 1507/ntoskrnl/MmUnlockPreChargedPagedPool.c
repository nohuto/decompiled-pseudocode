/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140147EA4
 * Callers:
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 * Callees:
 *     MiUnlockCodePage @ 0x1400113B0 (MiUnlockCodePage.c)
 */

void __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1, __int64 a2)
{
  if ( (dword_1403D00D8 & 2) == 0 )
    MiUnlockCodePage(
      (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
      ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * ((((a1 & 0xFFF) + a2 + 4095) >> 12) - 1));
}
