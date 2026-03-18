/*
 * XREFs of ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C001201C
 * Callers:
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001318C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiResetEngine @ 0x1C0019770 (VidSchiResetEngine.c)
 *     VidSchiReportHwHang @ 0x1C001DFB4 (VidSchiReportHwHang.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::AcquireReference(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL) <= 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
