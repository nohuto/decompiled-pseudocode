/*
 * XREFs of ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18007C760
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18007C550 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18007F4F4 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180081370 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800B6448 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x18013A12C (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::CheckDeviceState(CHwndRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(CHwDisplayRenderTarget *__hidden); // rbx
  int v5; // eax
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int v8; // eax
  int IsOptedIn; // eax
  char v10; // al
  COverlayContext *v11; // rcx
  bool v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 516) )
  {
    v1 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, -2003304307, 0x7D2u);
  }
  else
  {
    if ( !*((_QWORD *)this + 6) )
    {
      v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 5) + 240LL))((char *)this - 40);
      v1 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v8, 0x7ADu);
    }
    if ( (*((_BYTE *)this + 180) & 0x10) != 0 )
    {
      v3 = *((_QWORD *)this + 6);
      if ( v3 )
      {
        v4 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden))(*(_QWORD *)v3 + 200LL);
        if ( v4 == CHwDisplayRenderTarget::CheckDeviceState )
          v5 = CHwDisplayRenderTarget::CheckDeviceState(*((CHwDisplayRenderTarget **)this + 6));
        else
          v5 = v4(*((CHwDisplayRenderTarget **)this + 6));
        v1 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v5, 0x7BCu);
        if ( *((_BYTE *)this + 519) )
        {
          if ( v1 < 0 )
            goto LABEL_16;
          if ( v1 != 142213121 )
            v1 = 142213129;
        }
      }
    }
  }
  if ( v1 < 0 )
  {
LABEL_16:
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager(this);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v1);
    if ( v1 != -2003304307 && v1 != -2003304442 )
    {
      if ( v1 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
        goto LABEL_18;
      }
      if ( byte_1801A418C )
      {
        v10 = byte_1801A418D;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1801A418C = 1;
        v10 = IsOptedIn != 0;
        byte_1801A418D = v10;
      }
      if ( v10 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    *((_BYTE *)this + 515) = 1;
LABEL_18:
    *((_BYTE *)this + 514) = 1;
    return (unsigned int)v1;
  }
  if ( v1 == 142213121 )
  {
    *((_BYTE *)this + 519) = 1;
  }
  else if ( v1 == 142213129 )
  {
    v11 = (COverlayContext *)*((_QWORD *)this + 63);
    *((_BYTE *)this + 519) = 0;
    *((_BYTE *)this + 514) = 1;
    if ( v11 )
    {
      v12 = 0;
      COverlayContext::ProcessDisplayStateChange(v11, 1, &v12);
      *(_BYTE *)(*((_QWORD *)this + 63) + 837LL) = 1;
    }
  }
  return (unsigned int)v1;
}
