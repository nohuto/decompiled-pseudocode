/*
 * XREFs of ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C0107B90
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C0107B40 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C0107C0C (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 */

void __fastcall MultiUserGreCleanupAllFonts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx

  if ( gpPFTPrivate )
    bCleanupFontTable(gpPFTPrivate);
  if ( gpPFTPublic )
    bCleanupFontTable((struct PFT **)&gpPFTPublic);
  if ( gpPFTDevice )
    bCleanupFontTable(&gpPFTDevice);
  v3 = gpPrintKViewList;
  if ( gpPrintKViewList )
  {
    do
    {
      v6 = v3;
      v3 = *(_QWORD *)(v3 + 32);
      Win32FreePool(v6, a2, a3);
    }
    while ( v3 );
    gpPrintKViewList = 0LL;
  }
  v4 = gpcpVTFD;
  if ( gpcpVTFD )
  {
    do
    {
      v7 = *(_QWORD *)(v4 + 16);
      Win32FreePool(v4, a2, a3);
      v4 = v7;
    }
    while ( v7 );
    gpcpVTFD = 0LL;
  }
  v5 = gpcpGlyphsets;
  if ( gpcpGlyphsets )
  {
    do
    {
      v8 = *(_QWORD *)(v5 + 16);
      Win32FreePool(v5, a2, a3);
      v5 = v8;
    }
    while ( v8 );
    gpcpGlyphsets = 0LL;
  }
}
