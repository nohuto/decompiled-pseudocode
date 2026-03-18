/*
 * XREFs of ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18007C248
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18007C970 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800B8C20 (-PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18007C550 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18007F4F4 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800B6448 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x18013A12C (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
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
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 5));
        v2 = 0;
        goto LABEL_19;
      }
      if ( v2 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 5));
        v2 = -2003304307;
        goto LABEL_18;
      }
      if ( v2 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 5));
LABEL_19:
        *((_BYTE *)this + 554) = 1;
        return v2;
      }
      if ( byte_1801A418C )
      {
        v7 = byte_1801A418D;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1801A418C = 1;
        v7 = IsOptedIn != 0;
        byte_1801A418D = v7;
      }
      if ( v7 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 5));
    v2 = -2003304442;
LABEL_18:
    *((_BYTE *)this + 555) = 1;
    goto LABEL_19;
  }
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 559) = 1;
  }
  else if ( a2 == 142213129 )
  {
    v8 = this[68];
    *((_BYTE *)this + 559) = 0;
    *((_BYTE *)this + 554) = 1;
    if ( v8 )
    {
      v9 = 0;
      COverlayContext::ProcessDisplayStateChange(v8, 1, &v9);
      *((_BYTE *)this[68] + 837) = 1;
    }
    return 0;
  }
  return v2;
}
