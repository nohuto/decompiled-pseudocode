/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180043C90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18001AB40 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002C6E0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x1800336D0 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180039324 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180043BD8 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800440D8 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x1800441D8 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800446AC (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x180074728 (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180074C58 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800751E0 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008EAAC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  char v2; // r12
  void *v3; // r13
  bool v4; // r14
  int v5; // r15d
  __int64 (*v6)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  signed int v9; // edi
  HRESULT v10; // eax
  int Instance; // eax
  const unsigned __int16 *v12; // rdx
  bool v13; // di
  DWORD v14; // r15d
  CDesktopManager *v15; // rbx
  __int64 v16; // rdi
  bool v17; // di
  __int64 v18; // rcx
  char v19; // al
  DWORD v20; // r8d
  bool v21; // bl
  const HANDLE *v22; // rdx
  DWORD v23; // eax
  int v24; // eax
  int updated; // eax
  unsigned int v26; // edx
  signed int LastError; // eax
  int v28; // r9d
  signed int v29; // eax
  unsigned int v30; // edx
  struct _SINGLE_LIST_ENTRY *i; // rbx
  CDesktopManager *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  CAnimationEngine *v35; // rcx
  CAnimationEngine *v36; // rcx
  unsigned int v38; // [rsp+28h] [rbp-E0h]
  bool v39[4]; // [rsp+38h] [rbp-D0h] BYREF
  signed int v40; // [rsp+3Ch] [rbp-CCh]
  unsigned __int16 v41[2]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp-B8h] BYREF
  union _LARGE_INTEGER v45; // [rsp+58h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+60h] [rbp-A8h] BYREF
  void *v47; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE pHandles; // [rsp+70h] [rbp-98h] BYREF
  tagMSG Msg; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v50[12]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = -2147221008;
  v47 = 0LL;
  v45.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  v39[0] = 0;
  v41[0] = 0;
  v50[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 378) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v38 = 1624;
    goto LABEL_68;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, v41);
  v40 = v8;
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x65Au);
    goto LABEL_89;
  }
  v10 = CoInitializeEx(0LL, 0);
  LODWORD(v43) = v10;
  v5 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x661u);
  v40 = v5;
  v9 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x662u);
    goto LABEL_89;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22);
  v40 = Instance;
  v9 = Instance;
  if ( Instance < 0 )
  {
    v38 = 1636;
    v28 = Instance;
LABEL_72:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, v38);
    goto LABEL_89;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v50, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v29 = GetLastError();
    v9 = v29;
    if ( v29 > 0 )
      v9 = (unsigned __int16)v29 | 0x80070000;
    v38 = 1648;
LABEL_68:
    if ( v9 >= 0 )
      v9 = -2003304445;
    v40 = v9;
    v28 = v9;
    goto LABEL_72;
  }
  v39[0] = 1;
  v42 = 0;
  while ( 1 )
  {
    if ( !v3
      && (int)MilCompositionEngine_GetComposedEventId(
                *((struct HMIL_CONNECTION__ **)CDesktopManager::s_pDesktopManagerInstance + 5),
                &v42) >= 0 )
    {
      OpenComposedEvent(v42, v26, &v47);
      v3 = v47;
    }
    Msg.hwnd = 0LL;
    memset_0(&Msg.message, 0, 0x28uLL);
    pHandles = v3;
    v13 = 0;
    v14 = 1;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v17 = !*(_DWORD *)(v16 + 64) || !*(_BYTE *)(v16 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v13 = !v17 || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v15 + 362)) && !*((_BYTE *)v15 + 18);
      *((_BYTE *)v15 + 17) = v13;
      v4 = v3 && v13 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22);
      if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAllAnimationFinished_Info) )
      {
        if ( v13 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            TemplateEventDescriptor(v18, &UdwmAllAnimationFinished_Info);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v4 && v2 )
    {
      v19 = 1;
      v20 = 64;
LABEL_49:
      v14 = 0;
      if ( v2 )
        v2 = 0;
      goto LABEL_28;
    }
    v19 = 0;
    v20 = 64;
    if ( !v4 )
      goto LABEL_49;
    if ( !v2 )
    {
      v45.QuadPart = -1LL;
      v2 = 1;
      v20 = 0;
    }
LABEL_28:
    v21 = 0;
    v39[1] = 0;
    if ( v19 )
    {
      v21 = v13;
      goto LABEL_38;
    }
    if ( !v2 )
      v20 = -1;
    v22 = v14 ? &pHandles : 0LL;
    v23 = MsgWaitForMultipleObjectsEx(v14, v22, v20, 0x1CFFu, 6u);
    if ( v23 == v14 )
      break;
    if ( v2 && (!v23 || v23 == 258) )
    {
      v24 = CDesktopManager::ProcessAnimationTick(&v45, &Frequency, &v39[1]);
      v40 = v24;
      v9 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x6EAu);
        goto LABEL_86;
      }
      v21 = v39[1];
    }
LABEL_38:
    if ( Msg.message == 18 )
      goto LABEL_85;
    if ( v21 )
    {
      v46 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167));
        v40 = updated;
        v9 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x6FCu);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v46);
          goto LABEL_86;
        }
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
  }
  if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    goto LABEL_38;
  while ( Msg.message != 18 )
  {
    DispatchMessageW(&Msg);
    if ( !Msg.hwnd )
      CDesktopManager::HandleThreadMessage(Msg.message, (HWND)Msg.wParam, Msg.lParam);
    if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      goto LABEL_38;
  }
LABEL_85:
  v9 = v40;
LABEL_86:
  if ( v3 )
    CloseHandle(v3);
  v5 = v43;
LABEL_89:
  CWaitForService::Cleanup((CWaitForService *)v50);
  if ( v39[0] )
  {
    v46 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( v41[0] )
        UnregisterClassW((LPCWSTR)v41[0], g_hInstance);
      for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
      {
        if ( !LOBYTE(i[7].Next) )
          CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
      }
      v32 = CDesktopManager::s_pDesktopManagerInstance;
      v33 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
      if ( v33 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 32));
        v32 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32) = 0LL;
      }
      v34 = *((_QWORD *)v32 + 33);
      if ( v34 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        v32 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33) = 0LL;
      }
      v35 = (CAnimationEngine *)*((_QWORD *)v32 + 22);
      if ( v35 )
      {
        CAnimationEngine::Cleanup(v35);
        v32 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v36 = (CAnimationEngine *)*((_QWORD *)v32 + 22);
      if ( v36 )
      {
        CAnimationEngine::Release(v36, v30);
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = 0LL;
      }
      v9 = v40;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v46);
  }
  if ( v5 >= 0 )
    CoUninitialize();
  if ( v9 >= 0 )
    return (unsigned int)v9;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003302654, 0x72Fu);
  return 2291664642LL;
}
