/*
 * XREFs of GetFontResourceInfoInternalW @ 0x1C02D16E4
 * Callers:
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C02A7100 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C013FA64 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C0140E30 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     vIFIMetricsToLogFontW @ 0x1C029A794 (vIFIMetricsToLogFontW.c)
 */

__int64 __fastcall GetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int *a6,
        int a7)
{
  unsigned __int64 v8; // rbp
  __int64 v11; // r14
  struct PFF *v12; // rax
  struct PFF *v13; // rdi
  struct PDEV *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // esi
  __int64 v18; // rdx
  unsigned int FontFile; // eax
  struct _FONTHASH **v21; // [rsp+40h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h] BYREF

  v8 = a4;
  v11 = 0LL;
  v22 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v21 = gpPFTPublic;
  v12 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v21, a1, a2, a3, 0LL, 0, 0LL, 0);
  v13 = v12;
  if ( !v12 )
  {
    if ( a7 != 5 )
      goto LABEL_46;
    if ( (_DWORD)v8 )
    {
      if ( !a6 || (unsigned int)v8 < 4 )
        goto LABEL_46;
      *a6 = 1;
    }
LABEL_44:
    LODWORD(v11) = 1;
    goto LABEL_45;
  }
  switch ( a7 )
  {
    case 0:
      if ( (_DWORD)v8 )
      {
        if ( (unsigned int)v8 < 4 )
          goto LABEL_46;
        *a6 = *((_DWORD *)v12 + 36);
      }
      goto LABEL_38;
    case 1:
      v18 = *((_QWORD *)v12 + 10);
      v21 = (struct _FONTHASH **)*((_QWORD *)v12 + 11);
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v21, v18, 1u, 0, 0LL);
      if ( FontFile == -1 )
        goto LABEL_46;
      if ( (_DWORD)v8 )
      {
        if ( FontFile > (unsigned int)v8 )
          FontFile = -1;
        else
          FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v21, *((_QWORD *)v13 + 10), 1u, v8, a6);
      }
      if ( FontFile == -1 )
        goto LABEL_46;
      v15 = FontFile;
      goto LABEL_33;
    case 2:
      if ( (_DWORD)v8 )
      {
        v16 = *((unsigned int *)v12 + 36);
        if ( v8 < 92 * v16 )
          goto LABEL_46;
        v17 = 0;
        if ( (_DWORD)v16 )
        {
          do
          {
            vIFIMetricsToLogFontW((__int64)a6 + v11, *(_QWORD *)(*((_QWORD *)v13 + v17 + 27) + 32LL));
            v11 += 92LL;
            ++v17;
          }
          while ( v17 < *((_DWORD *)v13 + 36) );
        }
        *a5 = v11;
LABEL_34:
        LODWORD(v11) = 1;
        goto LABEL_46;
      }
      v15 = 92LL * *((unsigned int *)v12 + 36);
LABEL_33:
      *a5 = v15;
      goto LABEL_34;
    case 3:
      if ( (_DWORD)v8 )
      {
        if ( !a6 || (unsigned int)v8 < 4 )
          goto LABEL_46;
        v14 = (struct PDEV *)*((_QWORD *)v12 + 11);
        if ( v14 == gppdevTrueType || v14 == (struct PDEV *)qword_1C032F1C8 && !*(_DWORD *)(*((_QWORD *)v12 + 10) + 8LL) )
          LODWORD(v11) = 1;
        *a6 = v11;
      }
      goto LABEL_44;
  }
  if ( a7 != 5 )
  {
    EngSetLastError(0x57u);
    goto LABEL_46;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_38;
  if ( a6 && (unsigned int)v8 >= 4 )
  {
    *a6 = 0;
LABEL_38:
    LODWORD(v11) = 1;
LABEL_45:
    *a5 = 4LL;
  }
LABEL_46:
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  return (unsigned int)v11;
}
