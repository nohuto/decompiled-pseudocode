/*
 * XREFs of XLATEOBJ_iXlate @ 0x1C00DF4B0
 * Callers:
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0001040 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z @ 0x1C00E0FD0 (-vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00ECCB0 (-pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z @ 0x1C00F5340 (-vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0270B58 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C0284730 (-vTransparentCopy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0284F10 (-vTransparentCopyS16D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0285290 (-vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02857C0 (-vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02AF2C0 (NtGdiXLATEOBJ_iXlate.c)
 *     ?pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BA3C0 (-pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BA600 (-pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead16OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BA710 (-pxrlStrRead16OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BA820 (-pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BAA80 (-pxrlStrRead24AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BABC0 (-pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BAD00 (-pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BAF40 (-pxrlStrRead32OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BC850 (-vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BCAA0 (-vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02BCCB0 (-vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z.c)
 *     ?vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02BCF70 (-vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z.c)
 *     ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02C0AF0 (-vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02C1090 (-vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02C13E0 (-vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02C1530 (-vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02C3790 (-vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02C3D10 (-vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02C3EE0 (-vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CFDE0 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D0110 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C004177C (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C012CFF8 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C02B6DA0 (-XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall XLATEOBJ_iXlate(XLATEOBJ *pxlo, ULONG iColor)
{
  ULONG v2; // ebx
  ULONG v3; // esi
  FLONG flXlate; // eax
  ULONG cEntries; // ecx
  ULONG *v8; // r14
  int v9; // ebp
  unsigned __int8 *RGBXlate; // rax
  __int64 v11; // rdx
  struct tagPALETTEENTRY v12; // eax
  unsigned int NearestFromPalentryNoExactMatchFirst; // eax
  __int64 v14; // r8
  __int64 v15; // rax
  bool v16; // zf
  ULONG *pulXlate; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = iColor;
  if ( !pxlo )
    return iColor;
  flXlate = pxlo->flXlate;
  if ( (flXlate & 1) != 0 )
    return iColor;
  if ( (flXlate & 2) == 0 )
  {
    if ( (flXlate & 4) != 0 )
    {
      LOBYTE(v2) = iColor == *(_DWORD *)&pxlo[3].iSrcType;
      return v2;
    }
    if ( (pxlo[3].flXlate & 0x800) != 0 )
      v8 = *(ULONG **)&pxlo[2].iSrcType;
    else
      v8 = *(ULONG **)&pxlo[2].iUniq;
    v9 = bUMPDSecurityGateEx();
    if ( v9 )
    {
      if ( v8 )
      {
        if ( *(_QWORD *)&pxlo[2].iSrcType )
          goto LABEL_15;
      }
      else if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:ppal == NULL\n", 1665);
      }
      if ( *(_QWORD *)&pxlo[2].iSrcType || !gfUMPDDebug )
        return 0;
      v11 = 1670LL;
      goto LABEL_24;
    }
LABEL_15:
    if ( (v8[6] & 1) != 0 && *(_DWORD *)(*(_QWORD *)&pxlo[2].iSrcType + 28LL) == 256 )
    {
      pulXlate = v8;
      RGBXlate = XEPALOBJ::pGetRGBXlate((XEPALOBJ *)&pulXlate);
      if ( RGBXlate )
        return XLATEOBJ_ulIndexToPalSurf(pxlo, RGBXlate, v3);
      return 0;
    }
    if ( v9 && !pxlo[1].pulXlate )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalSrc == NULL\n", 1692LL);
      return 0;
    }
    pulXlate = pxlo[1].pulXlate;
    v12 = (struct tagPALETTEENTRY)XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, v3);
    if ( (pxlo[3].flXlate & 0x800) != 0 )
    {
      if ( !v9 || *(_QWORD *)&pxlo[2].iSrcType )
      {
        pulXlate = *(ULONG **)&pxlo[2].iSrcType;
        NearestFromPalentryNoExactMatchFirst = XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(
                                                 (XEPALOBJ *)&pulXlate,
                                                 v12);
        v14 = *(_QWORD *)&pxlo[2].iSrcType;
        *(_QWORD *)&iColor = NearestFromPalentryNoExactMatchFirst;
        if ( (struct PALETTE *)v14 == ppalDefault )
        {
          if ( NearestFromPalentryNoExactMatchFirst >= 0xA )
            return NearestFromPalentryNoExactMatchFirst + 236;
          return iColor;
        }
        if ( v9 )
        {
          if ( (*(_DWORD *)(v14 + 24) & 0x100) == 0 )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDstDC->flPal & PAL_DC == 0\n",
                1729LL);
            return 0;
          }
          if ( NearestFromPalentryNoExactMatchFirst >= *(_DWORD *)(v14 + 28) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:cIndex >= pxlo->ppalDstDC->cEntries\n",
                1735LL);
            return 0;
          }
        }
        if ( (pxlo[3].flXlate & 0x1000) != 0 )
          v15 = *(_QWORD *)(v14 + 80);
        else
          v15 = *(_QWORD *)(v14 + 72);
        return *(unsigned __int8 *)(v15 + *(_QWORD *)&iColor + 4);
      }
      if ( gfUMPDDebug )
      {
        v11 = 1706LL;
LABEL_24:
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDstDC == NULL\n", v11);
      }
    }
    else
    {
      if ( !v9 || *(_QWORD *)&pxlo[2].iUniq )
      {
        v16 = *(_DWORD *)(*(_QWORD *)&pxlo[2].iUniq + 28LL) == 0;
        pulXlate = *(ULONG **)&pxlo[2].iUniq;
        LOBYTE(v2) = v16;
        return XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&pulXlate, v12, v2);
      }
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDst == NULL\n", 1756LL);
    }
    return 0;
  }
  cEntries = pxlo->cEntries;
  if ( iColor > cEntries )
    v3 = iColor % cEntries;
  return *((_DWORD *)&pxlo[3].iSrcType + v3);
}
