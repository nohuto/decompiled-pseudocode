/*
 * XREFs of ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18007C8A0
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008F290 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180073E60 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18007C550 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18007F4F4 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800B6448 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x18013A12C (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPresentStatistics(
        CHwFullScreenRenderTarget **this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  CHwFullScreenRenderTarget *v5; // rdi
  __int64 (__fastcall *v6)(CHwFullScreenRenderTarget *, struct DXGI_FRAME_STATISTICS_DWM *); // rsi
  int PresentStatistics; // eax
  int v8; // edi
  UINT32 *v9; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v13; // al
  COverlayContext *v14; // rcx
  bool v15; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 516) || (v5 = this[6]) == 0LL )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, -2003304307, 0x78Bu);
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v5 + 304LL);
    if ( v6 == CHwFullScreenRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwFullScreenRenderTarget::GetPresentStatistics(this[6], a2);
    else
      PresentStatistics = v6(this[6], a2);
    v8 = PresentStatistics;
    if ( PresentStatistics < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, PresentStatistics, 0x786u);
    v9 = (UINT32 *)this[5];
    a3->uiNumerator = v9[68];
    a3->uiDenominator = v9[69];
  }
  if ( v8 < 0 )
  {
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager((const struct _TlgProvider_t *)v9);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v8);
    if ( v8 != -2003304442 )
    {
      if ( v8 == -2003304316 || v8 == -2003304309 )
        goto LABEL_27;
      if ( v8 != -2003304307 )
      {
        if ( v8 == -2003304306 )
        {
          if ( byte_1801A418C )
          {
            v13 = byte_1801A418D;
          }
          else
          {
            IsOptedIn = WinSqmIsOptedIn();
            byte_1801A418C = 1;
            v13 = IsOptedIn != 0;
            byte_1801A418D = v13;
          }
          if ( v13 )
            CDwmCoreWinSqm::RecordDisplayDriverName();
          goto LABEL_25;
        }
LABEL_27:
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)this);
        goto LABEL_26;
      }
    }
LABEL_25:
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)this);
    *((_BYTE *)this + 515) = 1;
LABEL_26:
    *((_BYTE *)this + 514) = 1;
    return (unsigned int)v8;
  }
  if ( v8 == 142213121 )
  {
    *((_BYTE *)this + 519) = 1;
  }
  else if ( v8 == 142213129 )
  {
    v14 = this[63];
    *((_BYTE *)this + 519) = 0;
    *((_BYTE *)this + 514) = 1;
    if ( v14 )
    {
      v15 = 0;
      COverlayContext::ProcessDisplayStateChange(v14, 1, &v15);
      *((_BYTE *)this[63] + 837) = 1;
    }
  }
  return (unsigned int)v8;
}
