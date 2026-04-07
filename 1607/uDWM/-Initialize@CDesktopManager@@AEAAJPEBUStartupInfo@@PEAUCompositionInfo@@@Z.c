/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180046620
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180044ABC (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x180044B6C (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180044BF8 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x180044C2C (-Init@CTextCache@@QEAAJXZ.c)
 *     ?Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180044C78 (-Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180044FC8 (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x1800450BC (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x180045AD0 (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180045BC0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x180045C90 (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@QEAAJXZ @ 0x180047388 (-CreateRootVisual@CWindowList@@QEAAJXZ.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x180047570 (--0CWindowList@@QEAA@XZ.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x1800483F8 (--0CContactManager@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180076BEC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::Initialize(
        CDesktopManager *this,
        const struct StartupInfo *a2,
        struct CompositionInfo *a3)
{
  HANDLE EventW; // rbp
  char v6; // r15
  CWindowList *v7; // rax
  CWindowList *v8; // rbx
  CWindowList *v9; // rax
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
  signed int v21; // ebx
  struct IDwmChannel **v22; // r14
  int Channel; // eax
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  struct IDwmChannel *v30; // rcx
  HANDLE Thread; // rax
  int v33; // r9d
  signed int LastError; // eax
  signed int v35; // eax
  signed int v36; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsa; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsb; // [rsp+20h] [rbp-48h]
  HANDLE Handles[2]; // [rsp+30h] [rbp-38h] BYREF
  int pvParam; // [rsp+70h] [rbp+8h] BYREF
  int v42; // [rsp+74h] [rbp+Ch]

  *((_BYTE *)this + 19) = 0;
  *((_BYTE *)this + 23) = 0;
  EventW = 0LL;
  v6 = 0;
  *((_QWORD *)this + 7) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *(_QWORD *)a3;
  v7 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        576LL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x240uLL);
    v9 = CWindowList::CWindowList(v8);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 165) = v9;
  if ( !v9 )
  {
    dwCreationFlags = 267;
LABEL_58:
    v21 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800A3CAC, 1u, -2147024882, dwCreationFlags);
    return (unsigned int)v21;
  }
  v10 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             328LL);
  if ( v10 )
    v11 = CContactManager::CContactManager(v10);
  else
    v11 = 0LL;
  *((_QWORD *)this + 18) = v11;
  if ( !v11 )
  {
    dwCreationFlags = 270;
    goto LABEL_58;
  }
  v12 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 16LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
  if ( v12 )
    v13 = CTransitionVisualController::CTransitionVisualController(v12);
  else
    v13 = 0LL;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) = v13;
  if ( !v13 )
  {
    dwCreationFlags = 273;
    goto LABEL_58;
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
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = v15;
  if ( !v15 )
  {
    dwCreationFlags = 276;
    goto LABEL_58;
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
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19) = v16;
  if ( !v16 )
  {
    dwCreationFlags = 279;
    goto LABEL_58;
  }
  v18 = *((_QWORD *)v17 + 22);
  v19 = (struct IAnimationClockEventListener *)(v18 + 8);
  if ( !v18 )
    v19 = 0LL;
  v20 = CAnimationClockCoordinator::SetEventCallback((CAnimationClockCoordinator *)v16, v19);
  v21 = v20;
  if ( v20 < 0 )
  {
    dwCreationFlagsa = 282;
LABEL_68:
    v33 = v20;
LABEL_71:
    MilInstrumentationCheckHR(0x14u, &dword_1800A3CAC, 1u, v33, dwCreationFlagsa);
    goto LABEL_51;
  }
  pvParam = 8;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    CDesktopManager::SetWindowAnimation(v42 != 0);
  v20 = DwmRedirectionManagerInitialize(
          a3,
          *((struct IDwmRedirectionClient **)this + 165),
          (struct IDwmRedirectionManager **)this + 6);
  v21 = v20;
  if ( v20 < 0 )
  {
    dwCreationFlagsa = 298;
    goto LABEL_68;
  }
  v22 = (struct IDwmChannel **)((char *)this + 32);
  v6 = 1;
  Channel = MilConnection_CreateChannel(*((struct HMIL_CONNECTION__ **)this + 5), (struct IDwmChannel **)this + 4);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 302;
LABEL_70:
    v33 = Channel;
    goto LABEL_71;
  }
  v24 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    128LL);
  v25 = v24;
  if ( v24 )
  {
    memset_0(v24, 0, 0x80uLL);
    *v25 = &CTextCache::`vftable';
    memset_0(v25 + 1, 0, 0x5CuLL);
    v25[13] = 0LL;
    v25[14] = 0LL;
    v25[15] = 0LL;
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)this + 25) = v25;
  if ( !v25 )
  {
    dwCreationFlagsb = 311;
LABEL_75:
    v21 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800A3CAC, 1u, -2147024882, dwCreationFlagsb);
LABEL_104:
    CDesktopManager::NotifyRedirectionShutdown(this);
    DwmRedirectionManagerShutdown();
    goto LABEL_52;
  }
  Channel = CTextCache::Init((CTextCache *)v25);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 312;
    goto LABEL_70;
  }
  v26 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  if ( v26 )
  {
    *(_QWORD *)v26 = &CIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v26 + 16) = 0LL;
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = 0LL;
    *(_DWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 48) = 0LL;
    *(_QWORD *)(v26 + 56) = 0LL;
    *(_QWORD *)(v26 + 64) = 0LL;
    *(_DWORD *)(v26 + 72) = 0;
    *(_QWORD *)(v26 + 96) = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  *((_QWORD *)this + 26) = v26;
  if ( !v26 )
  {
    dwCreationFlagsb = 315;
    goto LABEL_75;
  }
  Channel = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v26);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 316;
    goto LABEL_70;
  }
  v27 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v27 )
  {
    *(_QWORD *)v27 = &CImmersiveIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v27 + 16) = 0LL;
    *(_QWORD *)(v27 + 24) = 0LL;
    *(_QWORD *)(v27 + 32) = 0LL;
    *(_DWORD *)(v27 + 40) = 0;
    *(_QWORD *)(v27 + 48) = 0LL;
    *(_QWORD *)(v27 + 56) = 0LL;
    *(_QWORD *)(v27 + 64) = 0LL;
    *(_DWORD *)(v27 + 72) = 0;
    *(_QWORD *)(v27 + 80) = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  *((_QWORD *)this + 27) = v27;
  if ( !v27 )
  {
    dwCreationFlagsb = 319;
    goto LABEL_75;
  }
  Channel = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v27);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 320;
    goto LABEL_70;
  }
  CDesktopManager::SetupDPIValues(this);
  *((_DWORD *)this + 340) = -1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v28, &UdwmStartup_Info, 1LL);
  Channel = WICCreateImagingFactory_Proxy(567LL, (char *)this + 224);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 329;
    goto LABEL_70;
  }
  Channel = CDesktopManager::UpdateSettings(this, 13);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 342;
    goto LABEL_70;
  }
  Channel = CLivePreview::Create(*v22, (struct CLivePreview **)this + 168);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 344;
    goto LABEL_70;
  }
  v29 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          440LL);
  if ( v29 )
  {
    v30 = *v22;
    *(_QWORD *)v29 = &CProjectionBorderManager::`vftable';
    *(_QWORD *)(v29 + 400) = 0LL;
    *(_QWORD *)(v29 + 408) = 0LL;
    *(_QWORD *)(v29 + 416) = 0LL;
    *(_DWORD *)(v29 + 424) = 0;
    *(_QWORD *)(v29 + 432) = v30;
  }
  else
  {
    v29 = 0LL;
  }
  *((_QWORD *)this + 169) = v29;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 169) )
  {
    dwCreationFlagsb = 347;
    goto LABEL_75;
  }
  Channel = DCompositionCreateDevice3(0LL, &GUID_0ab6bdb3_4d49_46a8_b90b_1a86b0cd4e41, (char *)this + 168);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 349;
    goto LABEL_70;
  }
  Channel = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 232LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 351;
    goto LABEL_70;
  }
  Channel = CWindowList::CreateRootVisual(*((CWindowList **)this + 165));
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 355;
    goto LABEL_70;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  if ( !EventW )
  {
    LastError = GetLastError();
    v21 = LastError;
    if ( LastError > 0 )
      v21 = (unsigned __int16)LastError | 0x80070000;
    dwCreationFlagsa = 363;
    goto LABEL_94;
  }
  SetLastError(0);
  Thread = CreateThread(
             0LL,
             0LL,
             (LPTHREAD_START_ROUTINE)CDesktopManager::DwmEventThreadProc,
             EventW,
             0,
             (LPDWORD)this + 374);
  *((_QWORD *)this + 188) = Thread;
  if ( !Thread )
  {
    v35 = GetLastError();
    v21 = v35;
    if ( v35 > 0 )
      v21 = (unsigned __int16)v35 | 0x80070000;
    dwCreationFlagsa = 372;
    goto LABEL_94;
  }
  Handles[0] = EventW;
  Handles[1] = Thread;
  SetLastError(0);
  if ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
  {
    v36 = GetLastError();
    v21 = v36;
    if ( v36 > 0 )
      v21 = (unsigned __int16)v36 | 0x80070000;
    dwCreationFlagsa = 388;
LABEL_94:
    if ( v21 >= 0 )
      v21 = -2003304445;
    v33 = v21;
    goto LABEL_71;
  }
  Channel = CDesktopManager::_InitializeWnf(this);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 393;
    goto LABEL_70;
  }
  *((_BYTE *)this + 23) = 1;
LABEL_51:
  if ( v21 < 0 && v6 )
    goto LABEL_104;
LABEL_52:
  if ( EventW )
    CloseHandle(EventW);
  return (unsigned int)v21;
}
