/*
 * XREFs of ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C0129240
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C01291F0 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C01292BC (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 */

void MultiUserGreCleanupAllFonts(void)
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rbx

  if ( gpPFTPrivate )
    bCleanupFontTable(gpPFTPrivate);
  if ( gpPFTPublic )
    bCleanupFontTable((struct PFT **)&gpPFTPublic);
  if ( gpPFTDevice )
    bCleanupFontTable(&gpPFTDevice);
  v0 = gpPrintKViewList;
  if ( gpPrintKViewList )
  {
    do
    {
      v3 = v0;
      v0 = *(_QWORD *)(v0 + 32);
      Win32FreePool(v3);
    }
    while ( v0 );
    gpPrintKViewList = 0LL;
  }
  v1 = gpcpVTFD;
  if ( gpcpVTFD )
  {
    do
    {
      v4 = *(_QWORD *)(v1 + 16);
      Win32FreePool(v1);
      v1 = v4;
    }
    while ( v4 );
    gpcpVTFD = 0LL;
  }
  v2 = gpcpGlyphsets;
  if ( gpcpGlyphsets )
  {
    do
    {
      v5 = *(_QWORD *)(v2 + 16);
      Win32FreePool(v2);
      v2 = v5;
    }
    while ( v5 );
    gpcpGlyphsets = 0LL;
  }
}
