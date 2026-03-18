/*
 * XREFs of ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180074700
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800459A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800744A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007AE90 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800BA0CC (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800BA398 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180163A50 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPresentStatistics(
        CHwndRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  CHwFullScreenRenderTarget *v5; // rcx
  int (*v6)(CHwFullScreenRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int PresentStatistics; // eax
  int v8; // edi
  UINT32 *v9; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v13; // al
  COverlayContext *v14; // rcx
  bool v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 637) || (v5 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 6)) == 0LL )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, -2003304307, 0x799u);
  }
  else
  {
    v6 = *(int (**)(CHwFullScreenRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v5 + 320LL);
    if ( v6 == CHwFullScreenRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwFullScreenRenderTarget::GetPresentStatistics(v5, a2);
    else
      PresentStatistics = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, struct DXGI_FRAME_STATISTICS_DWM *))v6)(
                            v5,
                            a2);
    v8 = PresentStatistics;
    if ( PresentStatistics < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, PresentStatistics, 0x794u);
    v9 = (UINT32 *)*((_QWORD *)this + 5);
    a3->uiNumerator = v9[68];
    a3->uiDenominator = v9[69];
  }
  if ( v8 < 0 )
  {
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager((const struct _TlgProvider_t *)v9);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v8);
    if ( v8 == -2003304306 )
    {
      if ( byte_1801F055D )
      {
        v13 = byte_1801F055C;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1801F055D = 1;
        v13 = IsOptedIn != 0;
        byte_1801F055C = v13;
      }
      if ( v13 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    *((_BYTE *)this + 635) = 1;
  }
  else if ( v8 == 142213121 )
  {
    *((_BYTE *)this + 640) = 1;
  }
  else if ( v8 == 142213129 )
  {
    v14 = (COverlayContext *)*((_QWORD *)this + 78);
    *((_BYTE *)this + 640) = 0;
    *((_BYTE *)this + 635) = 1;
    if ( v14 )
    {
      v15 = 0;
      COverlayContext::ProcessDisplayStateChange(v14, 1, &v15);
      *(_BYTE *)(*((_QWORD *)this + 78) + 1085LL) = 1;
    }
  }
  return (unsigned int)v8;
}
