/*
 * XREFs of bIFIMetricsToTextMetricW @ 0x1C0011BC8
 * Callers:
 *     bGetTextMetrics @ 0x1C0011B34 (bGetTextMetrics.c)
 * Callees:
 *     ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0012348 (-bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricW(struct RFONTOBJ *a1, struct DCOBJ *a2, __int64 a3, struct _IFIMETRICS *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rax

  v7 = bIFIMetricsToTextMetricWStrict(a1, a2, (struct tagTEXTMETRICW *)a3, a4);
  *(_BYTE *)(a3 + 64) = a4->chFirstChar;
  *(_BYTE *)(a3 + 65) = a4->chLastChar;
  *(_BYTE *)(a3 + 66) = a4->chDefaultChar;
  *(_BYTE *)(a3 + 67) = a4->chBreakChar;
  if ( v7 )
  {
    v8 = PALLOCMEM2(0x44uLL);
    if ( v8 )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 696LL) = v8;
      *(_OWORD *)v8 = *(_OWORD *)a3;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(v8 + 32) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(a3 + 48);
      *(_DWORD *)(v8 + 64) = *(_DWORD *)(a3 + 64);
    }
  }
  return v7;
}
