/*
 * XREFs of ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B4858
 * Callers:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C013EA0C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02B3EB0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0129388 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C012A04C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 */

void __fastcall PFFOBJ::vPFFC_DeleteAndCleanup(PFFOBJ *this)
{
  _BYTE v1[40]; // [rsp+20h] [rbp-28h] BYREF

  PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v1);
  vCleanupFontFile((struct PFFCLEANUP *)v1);
}
