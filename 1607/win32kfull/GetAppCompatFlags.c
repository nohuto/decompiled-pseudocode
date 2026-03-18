/*
 * XREFs of GetAppCompatFlags @ 0x1C01140E0
 * Callers:
 *     ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0012348 (-bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 *     GetWindowWorker @ 0x1C0245B20 (GetWindowWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = a1;
  if ( !a1 )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return *(unsigned int *)(ThreadWin32Thread + 560);
}
