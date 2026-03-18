/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C000D930
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C000D8E0 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C000E074 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C000E2DC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C000EC48 (GreEnableEUDC.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  unsigned int v1; // edi
  char *v2; // rbx
  PFTOBJ *v3; // rcx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C0323BAC |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C0323338 )
  {
    Win32FreePool(qword_1C0323338);
    qword_1C0323338 = 0LL;
  }
  if ( qword_1C0323328 )
  {
    Win32FreePool(qword_1C0323328);
    qword_1C0323328 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v1 = 0;
    v2 = (char *)&unk_1C031D68C;
    do
    {
      if ( *((_DWORD *)v2 - 31) && *(_WORD *)v2 && *(_QWORD *)(v2 + 524) )
        bUnloadEudcFont(&qword_1C031D898[83 * v1]);
      ++v1;
      v2 += 664;
    }
    while ( v1 < 7 );
  }
  v3 = pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v3, &gawcSystemDBCSFontPath);
}
