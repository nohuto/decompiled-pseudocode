/*
 * XREFs of GetAppCompatFlags @ 0x1401E7A80
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x14008BC58 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x14010F068 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetAppCompatFlags(struct tagTHREADINFO *a1)
{
  if ( !a1 )
    a1 = PtiCurrent(0LL);
  return *((unsigned int *)a1 + 168);
}
