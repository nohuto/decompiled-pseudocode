/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0129B00
 * Callers:
 *     bUnloadEudcFont @ 0x1C01295F4 (bUnloadEudcFont.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C012AAA4 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C013CF4C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C013DE28 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0x1C013F410 (bAddFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C028A5A4 (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     cCapString @ 0x1C0033368 (cCapString.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0129894 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C013FA64 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 */

__int64 __fastcall PFTOBJ::bUnloadEUDCFont(struct _FONTHASH **this, unsigned __int16 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  WCHAR *v6; // rax
  unsigned __int16 *v7; // rsi
  struct PFF *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _FONTHASH **v13; // [rsp+60h] [rbp+8h] BYREF
  struct PFF **v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = this;
  v2 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = v4 + 1;
  if ( v5 > 0x1388000 )
    return 0LL;
  v6 = (WCHAR *)AllocFreeTmpBuffer(2 * v5);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  cCapString(v6, a2, v5);
  v13 = gpPFTPublic;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
  v8 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v13, v7, v5, 1u, 0LL, 0, &v14, 1);
  if ( v8 )
  {
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v13, v8, v14, 0);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  FreeTmpBuffer(v7, v9, v10, v11);
  return v2;
}
