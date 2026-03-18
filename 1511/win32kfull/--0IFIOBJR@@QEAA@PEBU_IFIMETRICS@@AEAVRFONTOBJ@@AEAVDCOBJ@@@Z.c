/*
 * XREFs of ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00E8B50
 * Callers:
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0002FD8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C00E7ED0 (cjIFIMetricsToOTMW.c)
 *     ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C00E86A0 (-bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     GreFontIsLinked @ 0x1C00FC998 (GreFontIsLinked.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0299E34 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A7D0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C001C55C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C001C59C (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C001D7D4 (-fwdExternalLeading@IFIOBJ@@QEAAFXZ.c)
 */

IFIOBJR *__fastcall IFIOBJR::IFIOBJR(
        IFIOBJR *this,
        const struct _IFIMETRICS *a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4)
{
  int *v6; // rcx
  int v8; // edx
  int v9; // r11d
  int v10; // edx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r10
  int v14; // r11d
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  v6 = (int *)((char *)a2 + a2->dpFontSim);
  v8 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 0x6000;
  switch ( v8 )
  {
    case 0:
      *((_BYTE *)this + 19) = a2->panose.bWeight;
      *((_WORD *)this + 10) = a2->usWinWeight;
      *((_WORD *)this + 11) = a2->fsSelection;
      *((_WORD *)this + 12) = a2->fwdAveCharWidth;
      *((_WORD *)this + 13) = a2->fwdMaxCharInc;
      *(POINTL *)((char *)this + 28) = a2->ptlCaret;
      break;
    case 8192:
      if ( (a2->fsSelection & 1) == 0 )
      {
        v18 = *v6;
LABEL_15:
        *((_OWORD *)this + 1) = *(_OWORD *)((char *)v6 + v18);
        *((_DWORD *)this + 8) = *(int *)((char *)v6 + v18 + 16);
        break;
      }
      goto LABEL_16;
    case 16384:
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v18 = v6[1];
        goto LABEL_15;
      }
      goto LABEL_16;
    case 24576:
LABEL_16:
      v18 = v6[2];
      goto LABEL_15;
  }
  v9 = *((__int16 *)this + 13);
  *((_DWORD *)this + 10) = *((__int16 *)this + 12);
  *((_DWORD *)this + 9) = v9;
  v10 = (__int16)IFIOBJ::fwdExternalLeading(this);
  *((_DWORD *)this + 12) = v10;
  *((_DWORD *)this + 11) = (__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56));
  if ( (*(_DWORD *)(v13 + 48) & 0x3000010) == 0 )
  {
    v16 = *(_DWORD *)(*(_QWORD *)v11 + 672LL);
    if ( v16 > 1 )
    {
      *((_DWORD *)this + 10) = v16 * v12;
      *((_DWORD *)this + 9) = v16 * v14;
    }
    v17 = *(_DWORD *)(*(_QWORD *)v11 + 676LL);
    if ( v17 > 1 )
    {
      v19 = v17 * *((_DWORD *)this + 11);
      *((_DWORD *)this + 12) = v17 * v10;
      *((_DWORD *)this + 11) = v19;
    }
  }
  if ( (*(_DWORD *)(v13 + 48) & 1) != 0 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
    *((_DWORD *)this + 13) = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v20);
    *((_DWORD *)this + 14) = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v20);
  }
  else
  {
    *((_DWORD *)this + 13) = *(_DWORD *)(v13 + 132) * *(_DWORD *)(*(_QWORD *)v11 + 676LL);
    *((_DWORD *)this + 14) = *(_DWORD *)(v13 + 128) * *(_DWORD *)(*(_QWORD *)v11 + 672LL);
  }
  return this;
}
