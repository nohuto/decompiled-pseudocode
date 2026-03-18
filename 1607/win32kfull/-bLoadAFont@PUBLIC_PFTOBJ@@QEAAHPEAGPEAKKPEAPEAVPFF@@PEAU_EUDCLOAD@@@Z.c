/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0024B94
 * Callers:
 *     bAddFlEntry @ 0x1C00608E8 (bAddFlEntry.c)
 *     FinishStockFontInit @ 0x1C00BC170 (FinishStockFontInit.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C01081B0 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C01082A8 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C0288FC4 (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x1C028937C (GreEudcLoadLinkW.c)
 *     bInitOneStockFontInternal @ 0x1C037D5F4 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C037F2E0 (bInitSystemFont.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     cCapString @ 0x1C00607F4 (cCapString.c)
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
  __int64 v12; // rax
  unsigned __int16 *v13; // rdi
  unsigned int Fonts; // ebx
  size_t v16; // [rsp+28h] [rbp-50h]

  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v11 = v6 + 1;
  if ( v11 > 0x1388000 )
    return 0LL;
  v12 = AllocFreeTmpBuffer(2 * v11);
  v13 = (unsigned __int16 *)v12;
  if ( !v12 )
    return 0LL;
  cCapString(v12, a2, v11);
  LODWORD(v16) = 0;
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v13, v11, 1u, 0LL, v16, a3, a4, a5, 0, 0, a6);
  FreeTmpBuffer(v13);
  return Fonts;
}
