/*
 * XREFs of ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A3100
 * Callers:
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E1794 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00FE334 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015BAF4 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027BDF0 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C027BF44 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C028629C (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C029DE70 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C029F330 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C029FA50 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A1840 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02A2AF0 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     NtGdiEngTextOut @ 0x1C02AE1D0 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02AE900 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02AEB40 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02AEC70 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02AEDB0 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C02A34F0 (-bAllocFontLinks@UMPDOBJ@@QEAAHI@Z.c)
 */

__int64 __fastcall UMPDReleaseRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5)
{
  unsigned int *v6; // rdi
  void **v9; // r15
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbp
  int v19; // r15d
  char *v20; // r13
  unsigned int v21; // r15d
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  char *v29; // [rsp+20h] [rbp-48h]

  v29 = 0LL;
  v6 = a3;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( a2 )
  {
    if ( !a3 && !a4 )
    {
      v9 = a5;
      if ( !a5 )
      {
        v10 = 1;
        goto LABEL_11;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v9 = a5;
  if ( !a5 )
    return 0LL;
  v10 = 0;
  *a3 = 0;
  *a4 = 0;
LABEL_11:
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
  if ( !v11 )
    goto LABEL_54;
  GreAcquireSemaphore(v11);
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 528);
    if ( v13 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v13) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSystemTT->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 528LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x20u;
        else
          *v6 |= 0x20u;
      }
    }
  }
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
  if ( v14 )
  {
    v15 = *(_QWORD *)(v14 + 528);
    if ( v15 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v15) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSysEUDC->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 528LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x40u;
        else
          *v6 |= 0x40u;
      }
    }
  }
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 744LL);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 528);
    if ( v17 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v17) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntDefEUDC->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + 528LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x80u;
        else
          *v6 |= 0x80u;
      }
    }
  }
  v18 = *(unsigned int *)(*(_QWORD *)a1 + 848LL);
  if ( (_DWORD)v18 )
  {
    if ( v10 )
    {
      v19 = UMPDOBJ::bAllocFontLinks(a2, v18);
    }
    else
    {
      if ( (unsigned int)v18 <= 0xA )
        v20 = (char *)*v9;
      else
        v20 = (char *)PALLOCMEM2((unsigned int)(4 * v18), 1886221639LL, 0);
      v29 = v20;
      *v9 = v20;
      if ( !v20 )
        goto LABEL_52;
      *a4 = v18;
      v19 = 1;
      memset(v20, 0, 4 * v18);
    }
    if ( v19 )
    {
      v21 = 0;
      v22 = 0LL;
      v23 = 0LL;
      do
      {
        v24 = *(_QWORD *)(v23 + *(_QWORD *)(*(_QWORD *)a1 + 752LL));
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 528);
          if ( v25 )
          {
            if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v25) )
            {
              EtwTraceGreLockReleaseSemaphore(
                L"rfo.prfnt->paprfntFaceName[ii]->hsemCache",
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 752LL) + v23) + 528LL));
              GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 752LL) + v23) + 528LL));
              if ( v10 )
              {
                if ( v21 < *((_DWORD *)a2 + 104) )
                {
                  v26 = *((_QWORD *)a2 + 53);
                  if ( v26 )
                    *(_DWORD *)(v22 + v26) = 1;
                }
              }
              else
              {
                *(_DWORD *)&v29[v22] = 1;
              }
            }
          }
        }
        ++v21;
        v23 += 8LL;
        v22 += 4LL;
      }
      while ( v21 < (unsigned int)v18 );
      v6 = a3;
    }
  }
  if ( !v10 )
  {
LABEL_52:
    *v6 |= *(_DWORD *)(*(_QWORD *)a1 + 720LL) << 16;
    *(_DWORD *)(*(_QWORD *)a1 + 720LL) |= 0x200u;
  }
  EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)a1 + 856LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 856LL));
LABEL_54:
  v27 = *(_QWORD *)(*(_QWORD *)a1 + 528LL);
  if ( v27 && (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v27) )
  {
    EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)a1 + 528LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 528LL));
    if ( v10 )
      *((_DWORD *)a2 + 103) |= 0x10u;
    else
      *v6 |= 0x10u;
  }
  return 1LL;
}
