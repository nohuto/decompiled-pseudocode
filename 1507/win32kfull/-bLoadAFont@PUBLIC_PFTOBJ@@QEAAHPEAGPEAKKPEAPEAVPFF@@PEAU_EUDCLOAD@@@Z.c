/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0140390
 * Callers:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C013CF4C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     FinishStockFontInit @ 0x1C013D0D0 (FinishStockFontInit.c)
 *     bAddAllFlEntry @ 0x1C013DE28 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0x1C013F410 (bAddFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C028A5A4 (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x1C028A9D4 (GreEudcLoadLinkW.c)
 *     bInitOneStockFontInternal @ 0x1C0378B8C (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C037A27C (bInitSystemFont.c)
 * Callees:
 *     cCapString @ 0x1C0033368 (cCapString.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C013FB2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadAFont(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int a4,
        struct PFF **a5,
        struct _EUDCLOAD *a6)
{
  __int64 v6; // rbx
  unsigned int v11; // ebx
  WCHAR *v12; // rax
  unsigned __int16 *v13; // rdi
  unsigned int Fonts; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  size_t v19; // [rsp+28h] [rbp-50h]

  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v11 = v6 + 1;
  if ( v11 > 0x1388000 )
    return 0LL;
  v12 = (WCHAR *)AllocFreeTmpBuffer(2 * v11);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  cCapString(v12, a2, v11);
  LODWORD(v19) = 0;
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v13, v11, 1u, 0LL, v19, a3, a4, a5, 0, 0, a6);
  FreeTmpBuffer(v13, v15, v16, v17);
  return Fonts;
}
