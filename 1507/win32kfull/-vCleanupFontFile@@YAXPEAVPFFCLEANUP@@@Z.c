/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0129388
 * Callers:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C012610C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0129894 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0129BFC (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B4858 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C0129818 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
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
