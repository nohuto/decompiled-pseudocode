/*
 * XREFs of ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20
 * Callers:
 *     GreGradientFill @ 0x1C0019264 (GreGradientFill.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C001C5DC (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0039DC8 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C003BF04 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0042BD0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     GreDrawStream @ 0x1C00433E0 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BB4A0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00BBC94 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00E7048 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026028C (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C026AE4C (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C026FD4C (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0270B58 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02736E8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0275740 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0275EB0 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02943F0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02949E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0295BE0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02965F0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0296EA0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0297F50 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029857C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0298A2C (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0041720 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0044040 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0046230 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall EXLATEOBJ::bInitXlateObj(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r15d
  unsigned int v21; // esi
  struct _XLATETABLE near *v22; // rbp
  unsigned int i; // r8d
  __int64 v24; // rax
  int v25; // ecx
  __int64 result; // rax
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  _DWORD *v31; // r9
  int v32; // r10d
  int v33; // r11d
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // [rsp+50h] [rbp-58h] BYREF
  __int64 v39; // [rsp+58h] [rbp-50h] BYREF
  __int64 v40; // [rsp+60h] [rbp-48h] BYREF
  __int64 v41; // [rsp+68h] [rbp-40h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+10h]

  v42 = a2;
  v11 = a7;
  v12 = a4;
  v13 = a5;
  if ( !v12 )
  {
    if ( !a5 )
      goto LABEL_30;
    if ( (*(_DWORD *)(a5 + 24) & 0x800) != 0 )
    {
      v34 = *(_QWORD *)(a7 + 80);
      if ( !v34 || v34 == *(_QWORD *)(a7 + 72) )
        goto LABEL_30;
    }
  }
  if ( !a5 && (*(_DWORD *)(v12 + 24) & 0x800) != 0 )
  {
    v35 = *(_QWORD *)(a7 + 80);
    if ( !v35 || v35 == *(_QWORD *)(a7 + 72) )
      goto LABEL_30;
  }
  if ( !v12 || !a5 )
    goto LABEL_11;
  v16 = *(_QWORD *)(v12 + 136);
  v17 = v16 == v12 ? *(_DWORD *)(v12 + 32) : *(_DWORD *)(v16 + 32);
  v18 = *(_QWORD *)(a5 + 136);
  v19 = v18 == a5 ? *(_DWORD *)(a5 + 32) : *(_DWORD *)(v18 + 32);
  if ( v17 == v19 )
  {
LABEL_30:
    *a1 = (__int64)xloIdent;
    return 1LL;
  }
  a2 = v42;
LABEL_11:
  v20 = 1;
  if ( (a3 & 7) != 0 && a2 )
  {
    v20 = 0;
  }
  else if ( v12 && a5 )
  {
    v21 = *(_DWORD *)(v12 + 56);
    v39 = a7;
    v40 = a6;
    v38 = a5;
    v41 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v22 = xlateTable;
    for ( i = 0; i < 8; ++i )
    {
      v24 = *(_QWORD *)(v12 + 136);
      if ( v24 == v12 )
        v25 = *(_DWORD *)(v12 + 32);
      else
        v25 = *(_DWORD *)(v24 + 32);
      if ( *((_DWORD *)v22 + 8 * v21 + 4) == v25 )
      {
        v27 = XEPALOBJ::ulTime((XEPALOBJ *)&v38);
        if ( *(_DWORD *)((char *)v22 + v28 + 20) == v27 )
        {
          v29 = XEPALOBJ::ulTime((XEPALOBJ *)&v39);
          if ( *(_DWORD *)((char *)v22 + v30 + 28) == v29 )
          {
            v31 = *(_DWORD **)((char *)v22 + v30 + 8);
            *a1 = (__int64)v31;
            v22 = xlateTable;
            v32 = v31[19];
            if ( (v32 & 0x6000) == a11 )
            {
              if ( (v33 = v31[1], (v33 & 4) == 0 && (v32 & 0x100) == 0)
                || (v33 & 4) != 0
                && a10 == v31[6]
                && (v36 = XEPALOBJ::ulTime((XEPALOBJ *)&v40), *(_DWORD *)((char *)xlateTable + v37 + 24) == v36)
                || (v32 & 0x100) != 0 && a8 == v31[7] && a9 == v31[8] )
              {
                _InterlockedIncrement((volatile signed __int32 *)&xlateTable + 8 * v21);
                *(_DWORD *)(v12 + 56) = v21;
                SEMOBJ::vUnlock((SEMOBJ *)&v41);
                return 1LL;
              }
            }
          }
        }
      }
      v21 = ((_BYTE)v21 + 1) & 7;
    }
    *a1 = 0LL;
    if ( ghsemPalette )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
      GreReleaseSemaphoreInternal(ghsemPalette);
    }
    v12 = a4;
    v13 = a5;
    v11 = a7;
  }
  result = CreateXlateObject(v42, a3, v12, v13, a6, v11, a8, a9, a10, a11);
  *a1 = result;
  if ( result )
  {
    if ( v20 && a4 && a5 && (*(_DWORD *)(result + 76) & 0x200) == 0 )
      EXLATEOBJ::vAddToCache(a1, a4, a5, a6, a7);
    return 1LL;
  }
  return result;
}
