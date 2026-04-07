/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180040248
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180047E0C (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001B9C8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003F680 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x18003F7DC (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ?Create@CLivePreview@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180045B70 (-Create@CLivePreview@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x180045EB4 (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x180046070 (--0CWindowList@@QEAA@XZ.c)
 *     ?CreateRootVisual@CWindowList@@QEAAJXZ @ 0x18004616C (-CreateRootVisual@CWindowList@@QEAAJXZ.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18004731C (--0CContactManager@@QEAA@XZ.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x180047CB0 (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180047EF8 (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x180047F58 (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180048114 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x1800481A8 (-Init@CTextCache@@QEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006CDBC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     Template_q @ 0x180074F24 (Template_q.c)
 */

__int64 __fastcall CDesktopManager::Initialize(
        CDesktopManager *this,
        const struct StartupInfo *a2,
        struct CompositionInfo *a3)
{
  HANDLE EventW; // r15
  char v6; // r12
  CWindowList *v7; // rax
  CWindowList *v8; // rax
  signed int v9; // ebx
  CContactManager *v10; // rax
  CContactManager *v11; // rax
  CTransitionVisualController *v12; // rax
  CTransitionVisualController *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  CDesktopManager *v17; // rax
  __int64 v18; // rcx
  struct IAnimationClockEventListener *v19; // rdx
  int v20; // eax
  int v21; // r9d
  struct MIL_CHANNEL__ *const *v22; // r14
  int Channel; // eax
  CTextCache *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct MIL_CHANNEL__ *v29; // rax
  CDesktopManager *v30; // rax
  signed int v31; // eax
  HANDLE Thread; // rax
  signed int v33; // eax
  signed int LastError; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsa; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsb; // [rsp+20h] [rbp-48h]
  HANDLE Handles[2]; // [rsp+30h] [rbp-38h] BYREF
  int pvParam; // [rsp+70h] [rbp+8h] BYREF
  int v41; // [rsp+74h] [rbp+Ch]

  *((_BYTE *)this + 19) = 0;
  *((_BYTE *)this + 23) = 0;
  EventW = 0LL;
  v6 = 0;
  *((_QWORD *)this + 7) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *(_QWORD *)a3;
  v7 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        576LL);
  if ( v7 )
    v8 = CWindowList::CWindowList(v7);
  else
    v8 = 0LL;
  *((_QWORD *)this + 167) = v8;
  if ( !v8 )
  {
    dwCreationFlags = 240;
LABEL_6:
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800A32E8, 1LL, -2147024882, dwCreationFlags);
    return (unsigned int)v9;
  }
  v10 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             328LL);
  if ( v10 )
    v11 = CContactManager::CContactManager(v10);
  else
    v11 = 0LL;
  *((_QWORD *)this + 20) = v11;
  if ( !v11 )
  {
    dwCreationFlags = 243;
    goto LABEL_6;
  }
  v12 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 16LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
  if ( v12 )
    v13 = CTransitionVisualController::CTransitionVisualController(v12);
  else
    v13 = 0LL;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) = v13;
  if ( !v13 )
  {
    dwCreationFlags = 246;
    goto LABEL_6;
  }
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)v14 = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v14 + 8) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_DWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_QWORD *)(v14 + 64) = 0LL;
    *(_DWORD *)(v14 + 72) = 0;
    *(_BYTE *)(v14 + 80) = 0;
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) = v15;
  if ( !v15 )
  {
    dwCreationFlags = 249;
    goto LABEL_6;
  }
  v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v16 )
  {
    *(_QWORD *)v16 = &CAnimationClockCoordinator::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v16 + 8));
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 56) = 0LL;
    *(_QWORD *)(v16 + 64) = 0LL;
    *(_QWORD *)(v16 + 72) = 0LL;
    *(_DWORD *)(v16 + 80) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21) = v16;
  if ( !v16 )
  {
    dwCreationFlags = 252;
    goto LABEL_6;
  }
  v18 = *((_QWORD *)v17 + 24);
  v19 = (struct IAnimationClockEventListener *)(v18 + 8);
  if ( !v18 )
    v19 = 0LL;
  v20 = CAnimationClockCoordinator::SetEventCallback((CAnimationClockCoordinator *)v16, v19);
  v9 = v20;
  if ( v20 < 0 )
  {
    dwCreationFlagsa = 255;
LABEL_31:
    v21 = v20;
    goto LABEL_32;
  }
  pvParam = 8;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    CDesktopManager::SetWindowAnimation(v41 != 0);
  v20 = DwmRedirectionManagerInitialize(
          a3,
          *((struct IDwmRedirectionClient **)this + 167),
          (struct IDwmRedirectionManager **)this + 6);
  v9 = v20;
  if ( v20 < 0 )
  {
    dwCreationFlagsa = 271;
    goto LABEL_31;
  }
  v22 = (struct MIL_CHANNEL__ *const *)((char *)this + 32);
  v6 = 1;
  Channel = MilConnection_CreateChannel(*((struct HMIL_CONNECTION__ **)this + 5), (struct MIL_CHANNEL__ **)this + 4);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 275;
LABEL_39:
    v21 = Channel;
    goto LABEL_32;
  }
  v24 = (CTextCache *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        128LL);
  if ( v24 )
  {
    *((_QWORD *)v24 + 14) = 0LL;
    *(_QWORD *)v24 = &CTextCache::`vftable';
    *((_QWORD *)v24 + 15) = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  *((_QWORD *)this + 27) = v24;
  if ( !v24 )
  {
    dwCreationFlagsb = 284;
LABEL_45:
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800A32E8, 1LL, -2147024882, dwCreationFlagsb);
LABEL_99:
    CDesktopManager::NotifyRedirectionShutdown(this);
    DwmRedirectionManagerShutdown();
    goto LABEL_100;
  }
  Channel = CTextCache::Init(v24);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 285;
    goto LABEL_39;
  }
  v25 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  if ( v25 )
  {
    *(_QWORD *)v25 = &CIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v25 + 16) = 0LL;
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 32) = 0LL;
    *(_DWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 48) = 0LL;
    *(_QWORD *)(v25 + 56) = 0LL;
    *(_QWORD *)(v25 + 64) = 0LL;
    *(_DWORD *)(v25 + 72) = 0;
    *(_QWORD *)(v25 + 96) = 0LL;
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)this + 28) = v25;
  if ( !v25 )
  {
    dwCreationFlagsb = 288;
    goto LABEL_45;
  }
  Channel = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v25);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 289;
    goto LABEL_39;
  }
  v26 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v26 )
  {
    *(_QWORD *)v26 = &CImmersiveIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v26 + 16) = 0LL;
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = 0LL;
    *(_DWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 48) = 0LL;
    *(_QWORD *)(v26 + 56) = 0LL;
    *(_QWORD *)(v26 + 64) = 0LL;
    *(_DWORD *)(v26 + 72) = 0;
    *(_QWORD *)(v26 + 80) = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  *((_QWORD *)this + 29) = v26;
  if ( !v26 )
  {
    dwCreationFlagsb = 292;
    goto LABEL_45;
  }
  Channel = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v26);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 293;
    goto LABEL_39;
  }
  CDesktopManager::SetupDPIValues(this);
  *((_DWORD *)this + 344) = -1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v27, &UdwmStartup_Info, 1LL);
  Channel = WICCreateImagingFactory_Proxy(567LL, (char *)this + 240);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 302;
    goto LABEL_39;
  }
  Channel = CDesktopManager::UpdateSettings(this, 13);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 315;
    goto LABEL_39;
  }
  Channel = CLivePreview::Create(*v22, (struct CLivePreview **)this + 170);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 317;
    goto LABEL_39;
  }
  v28 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          48LL);
  if ( v28 )
  {
    v29 = *v22;
    *(_QWORD *)v28 = &CProjectionBorderManager::`vftable';
    *(_QWORD *)(v28 + 8) = 0LL;
    *(_QWORD *)(v28 + 16) = 0LL;
    *(_QWORD *)(v28 + 24) = 0LL;
    *(_DWORD *)(v28 + 32) = 0;
    *(_QWORD *)(v28 + 40) = v29;
  }
  else
  {
    v28 = 0LL;
  }
  v30 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)this + 171) = v28;
  if ( !*((_QWORD *)v30 + 171) )
  {
    dwCreationFlagsb = 320;
    goto LABEL_45;
  }
  Channel = CDesktopManager::_InitializeWnf(this);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 322;
    goto LABEL_39;
  }
  Channel = DCompositionCreateDevice3(0LL, &GUID_e669f781_4574_4472_86e9_d79eddfd50a4, (char *)this + 184);
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 324;
    goto LABEL_39;
  }
  Channel = CWindowList::CreateRootVisual(*((CWindowList **)this + 167));
  v9 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 347;
    goto LABEL_39;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  if ( EventW )
  {
    SetLastError(0);
    Thread = CreateThread(0LL, 0LL, CDesktopManager::DwmEventThreadProc, EventW, 0, (LPDWORD)this + 378);
    *((_QWORD *)this + 190) = Thread;
    if ( Thread )
    {
      Handles[0] = EventW;
      Handles[1] = Thread;
      SetLastError(0);
      if ( !WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
      {
        *((_BYTE *)this + 23) = 1;
        goto LABEL_97;
      }
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      dwCreationFlagsa = 380;
    }
    else
    {
      v33 = GetLastError();
      v9 = v33;
      if ( v33 > 0 )
        v9 = (unsigned __int16)v33 | 0x80070000;
      dwCreationFlagsa = 364;
    }
  }
  else
  {
    v31 = GetLastError();
    v9 = v31;
    if ( v31 > 0 )
      v9 = (unsigned __int16)v31 | 0x80070000;
    dwCreationFlagsa = 355;
  }
  if ( v9 >= 0 )
    v9 = -2003304445;
  v21 = v9;
LABEL_32:
  MilInstrumentationCheckHR(0x14u, &dword_1800A32E8, 1LL, v21, dwCreationFlagsa);
LABEL_97:
  if ( v9 < 0 && v6 )
    goto LABEL_99;
LABEL_100:
  if ( EventW )
    CloseHandle(EventW);
  return (unsigned int)v9;
}
