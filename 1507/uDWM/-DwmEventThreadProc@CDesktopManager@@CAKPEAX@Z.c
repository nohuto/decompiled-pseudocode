/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800424A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180009FA8 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18001BF30 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180026640 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800298C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180030FE8 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180031480 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18003F968 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180042AD4 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180042B58 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180042CD8 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memcpy_0 @ 0x1800498BA (memcpy_0.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x18006C6F8 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x18006C7E8 (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18006CD18 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x18006D2A0 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006F138 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008AFDC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  int v2; // esi
  HANDLE v3; // rdi
  bool v4; // r14
  bool v5; // r15
  __int64 (*v6)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  signed int v9; // r13d
  HRESULT v10; // eax
  int Instance; // eax
  const unsigned __int16 *v12; // rdx
  LARGE_INTEGER v13; // rbx
  bool v14; // di
  DWORD v15; // r14d
  CDesktopManager *v16; // rsi
  __int64 v17; // rdi
  bool v18; // di
  bool v19; // zf
  __int64 v20; // rcx
  char v21; // al
  DWORD v22; // r8d
  char v23; // si
  const HANDLE *v24; // rdx
  DWORD v25; // eax
  __int64 v26; // rcx
  double v27; // xmm6_8
  CDesktopManager *v28; // r14
  unsigned int v29; // edi
  const void *v30; // r9
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(CTopLevelWindow3D *); // r15
  int v33; // eax
  __int64 v34; // rdi
  bool v35; // di
  int updated; // eax
  CAnimationEngine *v37; // rcx
  unsigned int v38; // edx
  signed int LastError; // eax
  int v40; // r9d
  signed int v41; // eax
  signed int v42; // eax
  int v43; // eax
  int v44; // eax
  CDesktopManager *v45; // rcx
  unsigned int v46; // edx
  CDesktopManager *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdi
  CAnimationEngine *v50; // rcx
  CAnimationEngine *v51; // rcx
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  unsigned int v54; // [rsp+28h] [rbp-E0h]
  bool v55[8]; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v58[2]; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v60; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE pHandles; // [rsp+68h] [rbp-A0h] BYREF
  tagMSG Msg; // [rsp+70h] [rbp-98h] BYREF
  _QWORD **v63; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE *v64; // [rsp+B0h] [rbp-58h]
  int v65; // [rsp+B8h] [rbp-50h]
  __int64 v66; // [rsp+BCh] [rbp-4Ch]
  _BYTE v67[80]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v68[12]; // [rsp+118h] [rbp+10h] BYREF

  v2 = -2147221008;
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  hObject = 0LL;
  v55[1] = 0;
  PerformanceCount.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  v55[2] = 0;
  *(_WORD *)&v55[4] = 0;
  v68[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 378) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v53 = 1582;
    goto LABEL_96;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, (unsigned __int16 *)&v55[4]);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x630u);
    goto LABEL_132;
  }
  v10 = CoInitializeEx(0LL, 0);
  v58[0] = v10;
  v2 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x637u);
  v9 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x638u);
    goto LABEL_132;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v53 = 1594;
    v40 = Instance;
LABEL_100:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v40, v53);
    goto LABEL_132;
  }
  if ( (int)CDesktopManager::InitializeComObjects((LPVOID *)CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v68, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v41 = GetLastError();
    v9 = v41;
    if ( v41 > 0 )
      v9 = (unsigned __int16)v41 | 0x80070000;
    v53 = 1606;
LABEL_96:
    if ( v9 >= 0 )
      v9 = -2003304445;
    v40 = v9;
    goto LABEL_100;
  }
  v13 = PerformanceCount;
  v58[1] = 0;
  v55[3] = 1;
  while ( 1 )
  {
    if ( !v3
      && (int)MilCompositionEngine_GetComposedEventId(
                *((struct HMIL_CONNECTION__ **)CDesktopManager::s_pDesktopManagerInstance + 5),
                &v58[1]) >= 0 )
    {
      OpenComposedEvent(v58[1], v38, &hObject);
      v3 = hObject;
    }
    Msg.hwnd = 0LL;
    memset_0(&Msg.message, 0, 0x28uLL);
    pHandles = v3;
    v14 = 0;
    v15 = 1;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v16 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v17 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v18 = !*(_DWORD *)(v17 + 64) || !*(_BYTE *)(v17 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v14 = !v18 || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v16 + 362)) && !*((_BYTE *)v16 + 18);
      v19 = hObject == 0LL;
      *((_BYTE *)v16 + 17) = v14;
      v55[2] = !v19 && v14 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22);
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
    if ( v55[2] || !v5 )
    {
      v21 = 0;
      v22 = 64;
      if ( v55[2] )
      {
        if ( v5 )
          goto LABEL_27;
        v13.QuadPart = -1LL;
        v5 = 1;
        v22 = 0;
        goto LABEL_72;
      }
    }
    else
    {
      v21 = 1;
      v22 = 64;
    }
    v15 = 0;
    if ( !v5 )
      goto LABEL_27;
    v5 = 0;
LABEL_72:
    v55[1] = v5;
LABEL_27:
    v23 = 0;
    if ( v21 )
    {
      v23 = v14;
      goto LABEL_61;
    }
    if ( !v5 )
      v22 = -1;
    v24 = v15 ? &pHandles : 0LL;
    v25 = MsgWaitForMultipleObjectsEx(v15, v24, v22, 0x1CFFu, 6u);
    if ( v25 == v15 )
      break;
    if ( !v5 || v25 && v25 != 258 )
      goto LABEL_61;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v9 = 0;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      PerformanceCount.QuadPart = 0LL;
      SetLastError(0);
      if ( QueryPerformanceCounter(&PerformanceCount) )
      {
        if ( v13.QuadPart == -1 )
          v13 = PerformanceCount;
        v27 = (double)(PerformanceCount.LowPart - v13.LowPart) / (double)(int)Frequency.LowPart;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          TemplateEventDescriptor(v26, &UdwmAnimation_Info);
        v28 = CDesktopManager::s_pDesktopManagerInstance;
        CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v27);
        v29 = *((_DWORD *)v28 + 362);
        if ( v29 )
        {
          v30 = (const void *)*((_QWORD *)v28 + 178);
          v63 = (_QWORD **)v67;
          v23 = 1;
          v65 = 10;
          v64 = v67;
          v66 = 10LL;
          v9 = 0;
          v55[0] = 1;
          if ( v29 <= 0xA )
          {
            memcpy_0(v67, v30, 8LL * v29);
            HIDWORD(v66) = v29;
            goto LABEL_44;
          }
          v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v63, 8u, v29, v30);
          v9 = v43;
          if ( v43 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v43, 0xC0u);
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x53Eu);
            DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v63);
            goto LABEL_53;
          }
          v29 = HIDWORD(v66);
LABEL_44:
          v31 = 0LL;
          if ( v29 )
          {
            while ( 1 )
            {
              v32 = *(__int64 (__fastcall **)(CTopLevelWindow3D *))(*v63[v31] + 120LL);
              v33 = v32 == CTopLevelWindow3D::OnGlobalTimeUpdated
                  ? CTopLevelWindow3D::OnGlobalTimeUpdated((CTopLevelWindow3D *)v63[v31])
                  : v32((CTopLevelWindow3D *)v63[v31]);
              v9 = v33;
              if ( v33 < 0 )
                break;
              v31 = (unsigned int)(v31 + 1);
              if ( (unsigned int)v31 >= HIDWORD(v66) )
                goto LABEL_49;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x542u);
            DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v63);
            v23 = v55[0];
            v5 = v55[1];
LABEL_53:
            if ( v9 >= 0 )
              goto LABEL_54;
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x559u);
            goto LABEL_58;
          }
LABEL_49:
          if ( v63 != (_QWORD **)v64 )
          {
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v63);
            v63 = 0LL;
          }
          v5 = v55[1];
          v23 = v55[0];
        }
        if ( !*((_BYTE *)v28 + 22) )
          goto LABEL_53;
        v44 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                 + 28));
        v9 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x548u);
          goto LABEL_53;
        }
LABEL_54:
        v34 = *((_QWORD *)v28 + 22);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v35 = !*(_DWORD *)(v34 + 64) || !*(_BYTE *)(v34 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v35 )
        {
          v37 = (CAnimationEngine *)*((_QWORD *)v28 + 22);
          v55[0] = 0;
          CAnimationEngine::OnTick(v37, *((double *)CDesktopManager::s_pDesktopManagerInstance + 31), v55);
          v23 |= v55[0];
        }
LABEL_58:
        if ( v9 >= 0 )
        {
          v13 = PerformanceCount;
          goto LABEL_60;
        }
        v54 = 1411;
      }
      else
      {
        v42 = GetLastError();
        v9 = v42;
        if ( v42 > 0 )
          v9 = (unsigned __int16)v42 | 0x80070000;
        v54 = 1401;
        if ( v9 >= 0 )
          v9 = -2003304445;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, v54);
    }
LABEL_60:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x6C0u);
      goto LABEL_129;
    }
LABEL_61:
    if ( Msg.message == 18 )
      goto LABEL_129;
    if ( v23 )
    {
      v60 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167));
        v9 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x6D2u);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v60);
          goto LABEL_129;
        }
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    v3 = hObject;
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
LABEL_129:
  if ( hObject )
    CloseHandle(hObject);
  v4 = v55[3];
  v2 = v58[0];
LABEL_132:
  CWaitForService::Cleanup((CWaitForService *)v68);
  if ( v4 )
  {
    v60 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( *(_WORD *)&v55[4] )
        UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v55[4], g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v45);
      v47 = CDesktopManager::s_pDesktopManagerInstance;
      v48 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
      if ( v48 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 32));
        v47 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32) = 0LL;
      }
      v49 = *((_QWORD *)v47 + 33);
      if ( v49 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        v47 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33) = 0LL;
      }
      v50 = (CAnimationEngine *)*((_QWORD *)v47 + 22);
      if ( v50 )
      {
        CAnimationEngine::Cleanup(v50);
        v47 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v51 = (CAnimationEngine *)*((_QWORD *)v47 + 22);
      if ( v51 )
      {
        CAnimationEngine::Release(v51, v46);
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = 0LL;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v60);
  }
  if ( v2 >= 0 )
    CoUninitialize();
  if ( v9 >= 0 )
    return (unsigned int)v9;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003302654, 0x705u);
  return 2291664642LL;
}
