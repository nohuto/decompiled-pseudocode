/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180033280
 * Callers:
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x1800339E0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x1800330E8 (-WaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18003340C (-PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180033478 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z @ 0x180033B20 (-SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z.c)
 *     ?CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z @ 0x180033B40 (-CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18006A4D4 (-ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     Template_q @ 0x18006A6A8 (Template_q.c)
 */

__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  bool v3; // si
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // rcx
  CAudioThreadPool *v8; // rsi
  struct _TP_WAIT *(__fastcall *v9)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), void *); // rbp
  struct _TP_WAIT *v10; // rax
  void *v11; // r14
  void (__fastcall *v12)(CAudioThreadPool *__hidden, struct _TP_WAIT *, void *, struct _FILETIME *); // rdi
  DWORD v13; // ebx
  _DWORD v14[4]; // [rsp+40h] [rbp-38h] BYREF
  DWORD pcbData; // [rsp+80h] [rbp+8h] BYREF
  int pvData; // [rsp+88h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v3 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( *((_QWORD *)this + 11) )
  {
    v4 = 0;
  }
  else
  {
    if ( *((_BYTE *)this + 97) )
    {
      v13 = -1;
      if ( GetTickCount() >= *((_DWORD *)this + 32) )
        v13 = (GetTickCount() - *((_DWORD *)this + 32)) / 0x3E8;
      v14[0] = 16;
      v14[2] = v13;
      v14[1] = 1;
      WinSqmAddToStreamEx(*(_QWORD *)&g_SqmSession.Data1, 6396LL, 1LL, v14, 0);
    }
    *((_BYTE *)this + 96) = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"DisableProtectedAudioDG",
            0x18u,
            0LL,
            &pvData,
            &pcbData)
      && pvData )
    {
      v3 = 0;
    }
    v4 = CAudioDGProcess::PrepareToWaitForADGStartup(this);
    if ( v4 >= 0 )
    {
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        Template_q(v7, &EVT_AUDIOSRV_LAUNCH_AUDIODG, *((unsigned int *)this + 26));
      v4 = CAudioDGProcess::LaunchADGProcess(this, v3);
      if ( v4 >= 0 )
      {
        v4 = CAudioDGProcess::WaitForADGStartup(this);
        if ( v4 >= 0 )
          goto LABEL_42;
      }
      if ( v4 == -2147024319 )
      {
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
        OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"Launch of AudioDG.EXE as a protected process failed with STATUS_INVALID_IMAGE_HASH\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"This usually means that there is a problem with PEAUTH, because an unexpected \n");
        OutputDebugStringW(L" DLL was added to the audiodg.exe process\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L" To find the offending binary, please do the following:\n");
        OutputDebugStringW(L" \t1. Start Event Viewer (type eventvwr from command line\n");
        OutputDebugStringW(L" \t2. Navigate to Applications and Services Log/Microsoft/Windows/CodeIntegrity/Operational node\n");
        OutputDebugStringW(L" \t3. Check the error level events with ID 3002; you'll see the offending binary path.\n");
        OutputDebugStringW(L" The event text should read as: Code Integrity is unable to verify the image integrity of the file ...\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"To get the build to boot, audiodg is being restarted outside of the protected \n");
        OutputDebugStringW(L" environment, audio will continue to function, but playback of protected \n");
        OutputDebugStringW(L" content will be disabled \n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L" For more information, please see:\n");
        OutputDebugStringW(L"    http://dmd/wmpg/mf/cp/PMP/Lists/Protected%20Environment%20FAQ/Flat.aspx\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"********************************************************************************\n");
      }
      if ( !v3
        || (v4 = CAudioDGProcess::ResetAfterWaitingForADGStartup(this), v4 >= 0)
        && (v4 = CAudioDGProcess::LaunchADGProcess(this, 0), v4 >= 0)
        && (v4 = CAudioDGProcess::WaitForADGStartup(this), v4 >= 0) )
      {
        if ( v4 >= 0 )
        {
LABEL_42:
          if ( *((_QWORD *)this + 11) )
          {
            v8 = ThreadPool;
            v9 = *(struct _TP_WAIT *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), void *))(*(_QWORD *)ThreadPool + 80LL);
            v10 = v9 == CAudioThreadPool::CreateWait
                ? CAudioThreadPool::CreateWait(
                    ThreadPool,
                    (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int))CAudioDGProcess::OnADGProcessTerminatedHandler,
                    this)
                : v9(
                    ThreadPool,
                    (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int))CAudioDGProcess::OnADGProcessTerminatedHandler,
                    this);
            *((_QWORD *)this + 14) = v10;
            if ( v10 )
            {
              v11 = (void *)*((_QWORD *)this + 11);
              v12 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WAIT *, void *, struct _FILETIME *))(*(_QWORD *)v8 + 88LL);
              if ( v12 == CAudioThreadPool::SetWait )
                CAudioThreadPool::SetWait(v8, v10, v11, 0LL);
              else
                v12(v8, v10, v11, 0LL);
            }
          }
        }
      }
    }
  }
  LeaveCriticalSection(v1);
  if ( v4 < 0 )
  {
    if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
      Template_q(v5, &EVT_AUDIOSRV_FAIL_AUDIODG_FAILED_STARTUP, (unsigned int)v4);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
        (unsigned int)v4);
    }
  }
  return (unsigned int)v4;
}
