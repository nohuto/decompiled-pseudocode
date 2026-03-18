/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C012AAA4
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C01291F0 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C01295F4 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0129B00 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C013C928 (GreEnableEUDC.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  unsigned int v1; // edi
  char *v2; // rbx
  struct _FONTHASH **v3; // rcx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C03234D0 |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C0323480 )
  {
    Win32FreePool(qword_1C0323480);
    qword_1C0323480 = 0LL;
  }
  if ( qword_1C03233D8 )
  {
    Win32FreePool(qword_1C03233D8);
    qword_1C03233D8 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v1 = 0;
    v2 = (char *)&unk_1C031D88C;
    do
    {
      if ( *((_DWORD *)v2 - 31) && *(_WORD *)v2 && *(_QWORD *)(v2 + 524) )
        bUnloadEudcFont((__int64)&qword_1C031DA98[83 * v1]);
      ++v1;
      v2 += 664;
    }
    while ( v1 < 7 );
  }
  v3 = (struct _FONTHASH **)pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v3, &gawcSystemDBCSFontPath);
}
