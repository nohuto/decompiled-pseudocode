/*
 * XREFs of bIFIMetricsToTextMetricW @ 0x1C00378F4
 * Callers:
 *     bGetTextMetrics @ 0x1C0038CEC (bGetTextMetrics.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C00380C4 (-bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricW(struct RFONTOBJ *a1, struct DCOBJ *a2, __int64 a3, struct _IFIMETRICS *a4)
{
  unsigned int v7; // esi
  _OWORD *v8; // rax

  v7 = bIFIMetricsToTextMetricWStrict(a1, a2, (struct tagTEXTMETRICW *)a3, a4);
  *(_BYTE *)(a3 + 64) = a4->chFirstChar;
  *(_BYTE *)(a3 + 65) = a4->chLastChar;
  *(_BYTE *)(a3 + 66) = a4->chDefaultChar;
  *(_BYTE *)(a3 + 67) = a4->chBreakChar;
  if ( v7 )
  {
    v8 = PALLOCMEM2(0x44uLL, 2003661895LL, 1);
    if ( v8 )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 696LL) = v8;
      *v8 = *(_OWORD *)a3;
      v8[1] = *(_OWORD *)(a3 + 16);
      v8[2] = *(_OWORD *)(a3 + 32);
      v8[3] = *(_OWORD *)(a3 + 48);
      *((_DWORD *)v8 + 16) = *(_DWORD *)(a3 + 64);
    }
  }
  return v7;
}
