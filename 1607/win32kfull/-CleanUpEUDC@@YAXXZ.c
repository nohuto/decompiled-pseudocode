/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C0107CD8
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C0107B40 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C0021F90 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0022ABC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C0107E88 (GreEnableEUDC.c)
 */

void __fastcall CleanUpEUDC(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v4; // edi
  char *v5; // rbx
  struct _FONTHASH **v6; // rcx

  if ( !gpPFTPublic || (v3 = 1, !ghsemPublicPFT) )
    v3 = 0;
  dword_1C03292A0 |= 2u;
  if ( v3 )
    GreEnableEUDC(0LL);
  if ( qword_1C03289E8 )
  {
    Win32FreePool(qword_1C03289E8, a2, a3);
    qword_1C03289E8 = 0LL;
  }
  if ( qword_1C0328960 )
  {
    Win32FreePool(qword_1C0328960, a2, a3);
    qword_1C0328960 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v4 = 0;
    v5 = (char *)&unk_1C03236CC;
    do
    {
      if ( *((_DWORD *)v5 - 31) && *(_WORD *)v5 && *(_QWORD *)(v5 + 524) )
        bUnloadEudcFont(&qword_1C03238D8[83 * v4]);
      ++v4;
      v5 += 664;
    }
    while ( v4 < 7 );
  }
  v6 = (struct _FONTHASH **)pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs, a2, a3);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v6, &gawcSystemDBCSFontPath);
}
