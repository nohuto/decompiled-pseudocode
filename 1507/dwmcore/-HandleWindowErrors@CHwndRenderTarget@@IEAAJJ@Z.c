/*
 * XREFs of ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18004ABD8
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18004B2E0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18004B580 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800EA4A0 (-PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180012D20 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x18008DD30 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180124BF0 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::HandleWindowErrors(COverlayContext **this, int a2)
{
  unsigned int v2; // ebx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v7; // al
  COverlayContext *v8; // rcx
  bool v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 < 0 )
  {
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager((const struct _TlgProvider_t *)this);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v2);
    if ( v2 != -2003304442 )
    {
      if ( v2 == -2003304316 || v2 == -2003304309 )
      {
        CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)this);
        v2 = 0;
        goto LABEL_19;
      }
      if ( v2 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)this);
        v2 = -2003304307;
        goto LABEL_18;
      }
      if ( v2 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)this);
LABEL_19:
        *((_BYTE *)this + 561) = 1;
        return v2;
      }
      if ( byte_180196529 )
      {
        v7 = byte_180196528;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180196529 = 1;
        v7 = IsOptedIn != 0;
        byte_180196528 = v7;
      }
      if ( v7 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)this);
    v2 = -2003304442;
LABEL_18:
    *((_BYTE *)this + 562) = 1;
    goto LABEL_19;
  }
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 566) = 1;
  }
  else if ( a2 == 142213129 )
  {
    v8 = this[69];
    *((_BYTE *)this + 566) = 0;
    *((_BYTE *)this + 561) = 1;
    if ( v8 )
    {
      v9 = 0;
      COverlayContext::ProcessDisplayStateChange(v8, 1, &v9);
      *((_BYTE *)this[69] + 821) = 1;
    }
    return 0;
  }
  return v2;
}
