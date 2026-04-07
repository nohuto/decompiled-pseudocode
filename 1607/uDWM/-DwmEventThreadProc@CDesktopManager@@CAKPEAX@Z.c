/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180011000 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18001E310 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180029110 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002BE20 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800415D4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180045170 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18004584C (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180045984 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180045DBC (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18005059A (memcpy_0.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x180076524 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x180076614 (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180076B48 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800770F8 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x180078798 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008D96C (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  int v2; // esi
  bool v3; // r13
  bool v4; // r14
  HANDLE v5; // rdi
  __int64 (*v6)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  signed int v9; // r12d
  HRESULT v10; // eax
  int Instance; // eax
  const unsigned __int16 *v12; // rdx
  LARGE_INTEGER v13; // rbx
  bool v14; // si
  DWORD v15; // r14d
  CDesktopManager *v16; // rdi
  __int64 v17; // rsi
  bool v18; // si
  bool v19; // zf
  __int64 v20; // rcx
  char v21; // al
  DWORD v22; // r8d
  bool v23; // di
  char v24; // r13
  const HANDLE *v25; // rdx
  DWORD v26; // eax
  int v27; // r14d
  __int64 v28; // rcx
  double v29; // xmm6_8
  CDesktopManager *v30; // rdi
  unsigned int v31; // esi
  const void *v32; // r9
  CTopLevelWindow3D *v33; // rcx
  __int64 (__fastcall *v34)(CTopLevelWindow3D *); // rax
  int v35; // eax
  __int64 v36; // rsi
  bool v37; // si
  int updated; // eax
  CAnimationEngine *v39; // rcx
  unsigned int v40; // edx
  signed int LastError; // eax
  int v42; // r9d
  signed int v43; // eax
  signed int v44; // eax
  int v45; // eax
  int v46; // eax
  CDesktopManager *v47; // rcx
  CDesktopManager *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  CAnimationEngine *v51; // rcx
  CAnimationEngine *v52; // rcx
  unsigned int v54; // [rsp+28h] [rbp-E0h]
  unsigned int v55; // [rsp+28h] [rbp-E0h]
  bool v56[8]; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v59[2]; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v61; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE pHandles; // [rsp+68h] [rbp-A0h] BYREF
  tagMSG Msg; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *v64; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE *v65; // [rsp+B0h] [rbp-58h]
  int v66; // [rsp+B8h] [rbp-50h]
  __int64 v67; // [rsp+BCh] [rbp-4Ch]
  _BYTE v68[80]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v69[12]; // [rsp+118h] [rbp+10h] BYREF

  v2 = -2147221008;
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  hObject = 0LL;
  PerformanceCount.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  *(_WORD *)&v56[4] = 0;
  v69[0] = 0LL;
  v56[0] = 0;
  v56[1] = 0;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 374) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v54 = 1697;
    goto LABEL_93;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, (unsigned __int16 *)&v56[4]);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6A3u);
    goto LABEL_131;
  }
  v10 = CoInitializeEx(0LL, 0);
  v59[1] = v10;
  v2 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6AAu);
  v9 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6ABu);
    goto LABEL_131;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 20);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v54 = 1709;
    v42 = Instance;
LABEL_97:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, v54);
    goto LABEL_131;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v69, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v43 = GetLastError();
    v9 = v43;
    if ( v43 > 0 )
      v9 = (unsigned __int16)v43 | 0x80070000;
    v54 = 1721;
LABEL_93:
    if ( v9 >= 0 )
      v9 = -2003304445;
    v42 = v9;
    goto LABEL_97;
  }
  v13 = PerformanceCount;
  v59[0] = 0;
  v56[3] = 1;
  while ( 1 )
  {
    if ( !v5
      && (int)MilCompositionEngine_GetComposedEventId(
                *((struct HMIL_CONNECTION__ **)CDesktopManager::s_pDesktopManagerInstance + 5),
                v59) >= 0 )
    {
      OpenComposedEvent(v59[0], v40, &hObject);
      v5 = hObject;
    }
    memset_0(&Msg, 0, sizeof(Msg));
    pHandles = v5;
    v14 = 0;
    v15 = 1;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v16 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v17 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v18 = !*(_DWORD *)(v17 + 64) || !*(_BYTE *)(v17 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v14 = !v18 || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v16 + 358)) && !*((_BYTE *)v16 + 18);
      v19 = hObject == 0LL;
      *((_BYTE *)v16 + 17) = v14;
      v56[1] = !v19 && v14 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22);
      if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAllAnimationFinished_Info) )
      {
        if ( v14 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            TemplateEventDescriptor(v20, &UdwmAllAnimationFinished_Info);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v56[1] && v3 )
    {
      v21 = 1;
      v22 = 64;
LABEL_74:
      v23 = v56[0];
      v15 = 0;
      if ( v56[0] )
      {
        v23 = 0;
        v56[0] = 0;
      }
      goto LABEL_28;
    }
    v21 = 0;
    v22 = 64;
    if ( !v56[1] )
      goto LABEL_74;
    v23 = v56[0];
    if ( !v56[0] )
    {
      v13.QuadPart = -1LL;
      v56[0] = 1;
      v22 = 0;
      v23 = 1;
    }
LABEL_28:
    v24 = 0;
    if ( v21 )
    {
      v24 = v14;
      goto LABEL_61;
    }
    if ( !v23 )
      v22 = -1;
    v25 = v15 ? &pHandles : 0LL;
    v26 = MsgWaitForMultipleObjectsEx(v15, v25, v22, 0x1CFFu, 6u);
    if ( v26 == v15 )
      break;
    if ( !v23 || v26 && v26 != 258 )
      goto LABEL_61;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v27 = 0;
    v9 = 0;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      PerformanceCount.QuadPart = 0LL;
      SetLastError(0);
      if ( QueryPerformanceCounter(&PerformanceCount) )
      {
        if ( v13.QuadPart == -1 )
          v13 = PerformanceCount;
        v29 = (double)(PerformanceCount.LowPart - v13.LowPart) / (double)(int)Frequency.LowPart;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          TemplateEventDescriptor(v28, &UdwmAnimation_Info);
        v30 = CDesktopManager::s_pDesktopManagerInstance;
        CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v29);
        v31 = *((_DWORD *)v30 + 358);
        if ( v31 )
        {
          v32 = (const void *)*((_QWORD *)v30 + 176);
          v64 = v68;
          v65 = v68;
          v24 = 1;
          v66 = 10;
          v67 = 10LL;
          if ( v31 <= 0xA )
          {
            memcpy_0(v68, v32, 8LL * v31);
            HIDWORD(v67) = v31;
            goto LABEL_45;
          }
          v45 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v64, 8u, v31, v32);
          v9 = v45;
          if ( v45 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xC0u);
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5B1u);
            goto LABEL_120;
          }
          v31 = HIDWORD(v67);
LABEL_45:
          if ( v31 )
          {
            while ( 1 )
            {
              v33 = *(CTopLevelWindow3D **)&v64[8 * v27];
              v34 = *(__int64 (__fastcall **)(CTopLevelWindow3D *))(*(_QWORD *)v33 + 120LL);
              v35 = v34 == CTopLevelWindow3D::OnGlobalTimeUpdated
                  ? CTopLevelWindow3D::OnGlobalTimeUpdated(v33)
                  : ((__int64 (*)(void))v34)();
              v9 = v35;
              if ( v35 < 0 )
                break;
              if ( (unsigned int)++v27 >= HIDWORD(v67) )
                goto LABEL_50;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x5B5u);
LABEL_120:
            DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v64);
LABEL_53:
            if ( v9 >= 0 )
              goto LABEL_54;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5CCu);
            goto LABEL_58;
          }
LABEL_50:
          if ( v64 != v65 )
          {
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
            v64 = 0LL;
          }
        }
        if ( !*((_BYTE *)v30 + 22) )
          goto LABEL_53;
        v46 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                 + 26));
        v9 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x5BBu);
          goto LABEL_53;
        }
LABEL_54:
        v36 = *((_QWORD *)v30 + 20);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v37 = !*(_DWORD *)(v36 + 64) || !*(_BYTE *)(v36 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v37 )
        {
          v39 = (CAnimationEngine *)*((_QWORD *)v30 + 20);
          v56[2] = 0;
          CAnimationEngine::OnTick(v39, *((double *)CDesktopManager::s_pDesktopManagerInstance + 29), &v56[2]);
          v24 |= v56[2];
        }
LABEL_58:
        if ( v9 >= 0 )
        {
          v13 = PerformanceCount;
          goto LABEL_60;
        }
        v55 = 1526;
      }
      else
      {
        v44 = GetLastError();
        v9 = v44;
        if ( v44 > 0 )
          v9 = (unsigned __int16)v44 | 0x80070000;
        v55 = 1516;
        if ( v9 >= 0 )
          v9 = -2003304445;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v55);
    }
LABEL_60:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x733u);
      goto LABEL_128;
    }
LABEL_61:
    if ( Msg.message == 18 )
      goto LABEL_128;
    v19 = v24 == 0;
    v3 = v56[0];
    if ( !v19 )
    {
      v61 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165));
        v9 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x745u);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v61);
          goto LABEL_128;
        }
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v3 = v56[0];
    }
    v5 = hObject;
  }
  if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    goto LABEL_61;
  while ( Msg.message != 18 )
  {
    DispatchMessageW(&Msg);
    if ( !Msg.hwnd )
      CDesktopManager::HandleThreadMessage(Msg.message, (HWND)Msg.wParam, Msg.lParam);
    if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      goto LABEL_61;
  }
LABEL_128:
  if ( hObject )
    CloseHandle(hObject);
  v4 = v56[3];
  v2 = v59[1];
LABEL_131:
  CWaitForService::Cleanup((CWaitForService *)v69);
  if ( v4 )
  {
    v61 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( *(_WORD *)&v56[4] )
        UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v56[4], g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v47);
      v48 = CDesktopManager::s_pDesktopManagerInstance;
      v49 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
      if ( v49 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        v48 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) = 0LL;
      }
      v50 = *((_QWORD *)v48 + 31);
      if ( v50 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        v48 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31) = 0LL;
      }
      v51 = (CAnimationEngine *)*((_QWORD *)v48 + 20);
      if ( v51 )
      {
        CAnimationEngine::Cleanup(v51);
        v48 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v52 = (CAnimationEngine *)*((_QWORD *)v48 + 20);
      if ( v52 )
      {
        CAnimationEngine::Release(v52);
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) = 0LL;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v61);
  }
  if ( v2 >= 0 )
    CoUninitialize();
  if ( v9 >= 0 )
    return (unsigned int)v9;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003302654, 0x778u);
  return 2291664642LL;
}
