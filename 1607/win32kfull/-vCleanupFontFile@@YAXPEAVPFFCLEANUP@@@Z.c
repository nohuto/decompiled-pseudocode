/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C002177C
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0022BB8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0022D74 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0026C2C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B6960 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C002A2A8 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  v2 = *(_QWORD *)a1;
  if ( v1 )
  {
    if ( !*((_QWORD *)a1 + 2) )
      PDEVOBJ::UnloadFontFile((PDEVOBJ *)&v2, v1);
  }
}
