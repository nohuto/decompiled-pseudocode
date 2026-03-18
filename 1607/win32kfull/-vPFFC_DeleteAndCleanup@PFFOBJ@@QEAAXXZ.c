/*
 * XREFs of ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B6960
 * Callers:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0064574 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02B6030 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C002177C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0026C80 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 */

void __fastcall PFFOBJ::vPFFC_DeleteAndCleanup(PFFOBJ *this, __int64 a2, __int64 a3)
{
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v3, a3);
  vCleanupFontFile((struct PFFCLEANUP *)v3);
}
