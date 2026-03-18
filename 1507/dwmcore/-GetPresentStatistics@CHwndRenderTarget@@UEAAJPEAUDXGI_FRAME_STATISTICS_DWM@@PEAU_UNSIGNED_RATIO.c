/*
 * XREFs of ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18004B220
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180066DB0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180012D20 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800430B0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x18008DD30 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180124BF0 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
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
  CHwFullScreenRenderTarget **v10; // rbx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v14; // al
  COverlayContext *v15; // rcx
  bool v16; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 523) || (v5 = this[6]) == 0LL )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2003304307, 0x7D0u);
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v5 + 296LL);
    if ( v6 == CHwFullScreenRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwFullScreenRenderTarget::GetPresentStatistics(this[6], a2);
    else
      PresentStatistics = v6(this[6], a2);
    v8 = PresentStatistics;
    if ( PresentStatistics < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, PresentStatistics, 0x7CBu);
    v9 = (UINT32 *)this[5];
    a3->uiNumerator = v9[219];
    a3->uiDenominator = v9[220];
  }
  v10 = this - 5;
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
          if ( byte_180196529 )
          {
            v14 = byte_180196528;
          }
          else
          {
            IsOptedIn = WinSqmIsOptedIn();
            byte_180196529 = 1;
            v14 = IsOptedIn != 0;
            byte_180196528 = v14;
          }
          if ( v14 )
            CDwmCoreWinSqm::RecordDisplayDriverName();
          goto LABEL_25;
        }
LABEL_27:
        CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)v10);
        goto LABEL_26;
      }
    }
LABEL_25:
    CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)v10);
    *((_BYTE *)v10 + 562) = 1;
LABEL_26:
    *((_BYTE *)v10 + 561) = 1;
    return (unsigned int)v8;
  }
  if ( v8 == 142213121 )
  {
    *((_BYTE *)v10 + 566) = 1;
  }
  else if ( v8 == 142213129 )
  {
    v15 = v10[69];
    *((_BYTE *)v10 + 566) = 0;
    *((_BYTE *)v10 + 561) = 1;
    if ( v15 )
    {
      v16 = 0;
      COverlayContext::ProcessDisplayStateChange(v15, 1, &v16);
      *((_BYTE *)v10[69] + 821) = 1;
    }
  }
  return (unsigned int)v8;
}
