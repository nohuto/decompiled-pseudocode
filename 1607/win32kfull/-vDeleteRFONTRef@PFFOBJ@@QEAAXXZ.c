/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0026C2C
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C002D840 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0129850 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     vKillRFONTList @ 0x1C025B08C (vKillRFONTList.c)
 *     GreGetKerningPairs @ 0x1C027DAD0 (GreGetKerningPairs.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C029B4B0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C002177C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0026C80 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFOBJ::vDeleteRFONTRef(PFFOBJ *this)
{
  int v2; // ebx
  __int64 v3; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v5 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  --*(_DWORD *)(*(_QWORD *)this + 68LL);
  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) && !*(_QWORD *)(v3 + 160) && !*(_DWORD *)(v3 + 68) && !*(_DWORD *)(v3 + 64) )
  {
    PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v4);
    v2 = 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  if ( v2 )
    vCleanupFontFile((struct PFFCLEANUP *)v4);
}
