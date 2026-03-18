/*
 * XREFs of ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800740C4
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x1800747B0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800749E0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800744A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800BA0CC (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800BA398 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180163A50 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
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
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 14));
        v2 = 0;
        goto LABEL_18;
      }
      if ( v2 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 14));
        v2 = -2003304307;
        goto LABEL_18;
      }
      if ( v2 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 14));
LABEL_18:
        *((_BYTE *)this + 747) = 1;
        return v2;
      }
      if ( byte_1801F055D )
      {
        v7 = byte_1801F055C;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1801F055D = 1;
        v7 = IsOptedIn != 0;
        byte_1801F055C = v7;
      }
      if ( v7 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(this + 14));
    v2 = -2003304442;
    goto LABEL_18;
  }
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 752) = 1;
  }
  else if ( a2 == 142213129 )
  {
    v8 = this[92];
    *((_BYTE *)this + 752) = 0;
    *((_BYTE *)this + 747) = 1;
    if ( v8 )
    {
      v9 = 0;
      COverlayContext::ProcessDisplayStateChange(v8, 1, &v9);
      *((_BYTE *)this[92] + 1085) = 1;
    }
    return 0;
  }
  return v2;
}
