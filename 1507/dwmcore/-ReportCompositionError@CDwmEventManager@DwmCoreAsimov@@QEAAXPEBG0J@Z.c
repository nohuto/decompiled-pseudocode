/*
 * XREFs of ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x18008DD30
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004A078 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18004ABD8 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18004B0F0 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18004B220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800962A4 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180123308 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 * Callees:
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x18005FEA0 (-ProcessEvent@-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU-$Asi.c)
 *     ?RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ @ 0x18008DD7C (-RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ.c)
 */

void __fastcall DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
        DwmCoreAsimov::CDwmEventManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  _QWORD *v5; // rcx
  void **v6; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+48h] [rbp-30h]
  const unsigned __int16 *v8; // [rsp+50h] [rbp-28h]
  const unsigned __int16 *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]

  v7 = 7;
  v8 = a2;
  v5 = *(_QWORD **)this;
  v6 = &DwmCoreAsimov::CompositionErrorEventData::`vftable';
  v10 = a4;
  v9 = a3;
  DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(
    v5,
    (__int64 (__fastcall ***)(_QWORD, _QWORD))&v6);
  DwmCoreAsimov::CDwmEventManager::RecordErrorForAggregation(this);
}
