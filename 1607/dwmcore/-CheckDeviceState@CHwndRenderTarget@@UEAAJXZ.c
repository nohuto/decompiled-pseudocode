/*
 * XREFs of ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x1800745A0
 * Callers:
 *     ?CheckDeviceState@CRenderTargetManager@@QEAAJXZ @ 0x180073820 (-CheckDeviceState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800744A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18008F500 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800BA0CC (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800BA398 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180163A50 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::CheckDeviceState(CHwndRenderTarget *this)
{
  int v1; // ebx
  CHwndRenderTarget *v2; // rdi
  __int64 (*v3)(void); // rax
  int v4; // eax
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  COverlayContext *v7; // rcx
  int v8; // eax
  int IsOptedIn; // eax
  char v10; // al
  bool v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = this;
  if ( *((_BYTE *)this + 637) )
  {
    v1 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304307, 0x7E0u);
  }
  else
  {
    if ( !*((_QWORD *)this + 6) )
    {
      v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 14) + 256LL))((char *)this - 112);
      v1 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v8, 0x7BBu);
    }
    if ( (*((_BYTE *)v2 + 252) & 0x10) != 0 )
    {
      this = (CHwndRenderTarget *)*((_QWORD *)v2 + 6);
      if ( this )
      {
        v3 = *(__int64 (**)(void))(*(_QWORD *)this + 208LL);
        if ( (char *)v3 == (char *)CHwDisplayRenderTarget::CheckDeviceState )
          v4 = CHwDisplayRenderTarget::CheckDeviceState(this);
        else
          v4 = v3();
        v1 = v4;
        if ( v4 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v4, 0x7CAu);
        if ( *((_BYTE *)v2 + 640) )
        {
          if ( v1 < 0 )
            goto LABEL_16;
          if ( v1 != 142213121 )
            v1 = 142213129;
        }
      }
    }
  }
  if ( v1 >= 0 )
  {
    if ( v1 == 142213121 )
    {
      *((_BYTE *)v2 + 640) = 1;
    }
    else if ( v1 == 142213129 )
    {
      v7 = (COverlayContext *)*((_QWORD *)v2 + 78);
      *((_BYTE *)v2 + 640) = 0;
      *((_BYTE *)v2 + 635) = 1;
      if ( v7 )
      {
        v11 = 0;
        COverlayContext::ProcessDisplayStateChange(v7, 1, &v11);
        *(_BYTE *)(*((_QWORD *)v2 + 78) + 1085LL) = 1;
      }
    }
    return (unsigned int)v1;
  }
LABEL_16:
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(this);
  DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v1);
  if ( v1 == -2003304306 )
  {
    if ( byte_1801F055D )
    {
      v10 = byte_1801F055C;
    }
    else
    {
      IsOptedIn = WinSqmIsOptedIn();
      byte_1801F055D = 1;
      v10 = IsOptedIn != 0;
      byte_1801F055C = v10;
    }
    if ( v10 )
      CDwmCoreWinSqm::RecordDisplayDriverName();
  }
  CHwndRenderTarget::ReleaseResourcesForDisplayChange(v2);
  *((_BYTE *)v2 + 635) = 1;
  return (unsigned int)v1;
}
