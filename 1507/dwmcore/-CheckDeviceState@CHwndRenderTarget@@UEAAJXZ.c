/*
 * XREFs of ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18004B0F0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180012D20 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180045330 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x18008DD30 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180124BF0 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::CheckDeviceState(CHwndRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(CHwDisplayRenderTarget *); // rbx
  int v5; // eax
  char *v6; // rdi
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int v9; // eax
  int IsOptedIn; // eax
  char v11; // al
  COverlayContext *v12; // rcx
  bool v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 523) )
  {
    v1 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304307, 0x817u);
  }
  else
  {
    if ( !*((_QWORD *)this + 6) )
    {
      v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 5) + 232LL))((char *)this - 40);
      v1 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v9, 0x7F2u);
    }
    if ( (*((_BYTE *)this + 180) & 0x10) != 0 )
    {
      v3 = *((_QWORD *)this + 6);
      if ( v3 )
      {
        v4 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)v3 + 200LL);
        if ( v4 == CHwDisplayRenderTarget::CheckDeviceState )
          v5 = CHwDisplayRenderTarget::CheckDeviceState(*((CHwDisplayRenderTarget **)this + 6));
        else
          v5 = v4(*((CHwDisplayRenderTarget **)this + 6));
        v1 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v5, 0x801u);
        if ( *((_BYTE *)this + 526) && v1 >= 0 && v1 != 142213121 )
          v1 = 142213129;
      }
    }
  }
  v6 = (char *)this - 40;
  if ( v1 < 0 )
  {
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager(this);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v1);
    if ( v1 != -2003304307 && v1 != -2003304442 )
    {
      if ( v1 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)((char *)this - 40));
        goto LABEL_19;
      }
      if ( byte_180196529 )
      {
        v11 = byte_180196528;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180196529 = 1;
        v11 = IsOptedIn != 0;
        byte_180196528 = v11;
      }
      if ( v11 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)((char *)this - 40));
    v6[562] = 1;
LABEL_19:
    v6[561] = 1;
    return (unsigned int)v1;
  }
  if ( v1 == 142213121 )
  {
    v6[566] = 1;
  }
  else if ( v1 == 142213129 )
  {
    v12 = (COverlayContext *)*((_QWORD *)v6 + 69);
    v6[566] = 0;
    v6[561] = 1;
    if ( v12 )
    {
      v13 = 0;
      COverlayContext::ProcessDisplayStateChange(v12, 1, &v13);
      *(_BYTE *)(*((_QWORD *)v6 + 69) + 821LL) = 1;
    }
  }
  return (unsigned int)v1;
}
