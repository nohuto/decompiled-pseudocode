/*
 * XREFs of ??1?$CAutoPtr@I@ATL@@QEAA@XZ @ 0x18000F940
 * Callers:
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$1 @ 0x18002244D (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned int>::~CAutoPtr<unsigned int>(void **a1)
{
  operator delete(*a1, 4uLL);
  *a1 = 0LL;
}
