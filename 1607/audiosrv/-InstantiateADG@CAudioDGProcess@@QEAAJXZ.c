/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180017550
 * Callers:
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017320 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z @ 0x1800160E0 (-SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z.c)
 *     ?CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z @ 0x180016100 (-CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x180017464 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18001789C (-PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     Template_q @ 0x180029FA4 (Template_q.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180084C90 (-ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  int v2; // ebx
  bool v4; // si
  __int64 v5; // rcx
  int v6; // eax
  CAudioThreadPool *v7; // rbx
  PTP_WAIT (__fastcall *v8)(CAudioThreadPool *, void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT, TP_WAIT_RESULT), void *); // rax
  PTP_WAIT Wait; // rax
  struct _TP_WAIT *v10; // rdx
  void *v11; // r8
  void (__fastcall *v12)(CAudioThreadPool *, struct _TP_WAIT *, void *, struct _FILETIME *); // rax
  DWORD v13; // ebx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v16; // [rsp+48h] [rbp-59h] BYREF
  int pvData; // [rsp+4Ch] [rbp-55h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-49h] BYREF
  char v20; // [rsp+60h] [rbp-41h]
  _DWORD v21[4]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v22; // [rsp+78h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp+7h] BYREF
  int *p_pvData; // [rsp+B8h] [rbp+17h]
  __int64 v26; // [rsp+C0h] [rbp+1Fh]
  int *v27; // [rsp+C8h] [rbp+27h]
  __int64 v28; // [rsp+D0h] [rbp+2Fh]

  v22 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v20 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 11) )
  {
    v2 = 0;
    v16 = 0;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 97) )
  {
    v13 = -1;
    if ( GetTickCount() >= *((_DWORD *)this + 32) )
      v13 = (GetTickCount() - *((_DWORD *)this + 32)) / 0x3E8;
    v21[0] = 16;
    v21[2] = v13;
    v21[1] = 1;
    WinSqmAddToStreamEx(*(_QWORD *)&g_SqmSession.Data1, 6396LL, 1LL, v21, 0);
  }
  *((_BYTE *)this + 96) = 0;
  v4 = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableProtectedAudioDG",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    v4 = pvData != 0;
  v2 = CAudioDGProcess::PrepareToWaitForADGStartup(this);
  v16 = v2;
  if ( v2 < 0 )
    goto LABEL_34;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_q(v5, &EVT_AUDIOSRV_LAUNCH_AUDIODG, *((unsigned int *)this + 26));
  v6 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v4);
  v2 = v6;
  v16 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -2147024319 )
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
      v2 = v16;
    }
    if ( v4 )
    {
      v2 = CAudioDGProcess::ResetAfterWaitingForADGStartup(this);
      v16 = v2;
      if ( v2 >= 0 )
      {
        v2 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, 0);
        v16 = v2;
        if ( v2 >= 0 )
          goto LABEL_13;
      }
    }
    else if ( v2 >= 0 )
    {
      goto LABEL_13;
    }
LABEL_34:
    if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
    {
      Template_q(v5, &EVT_AUDIOSRV_FAIL_AUDIODG_FAILED_STARTUP, (unsigned int)v2);
      v2 = v16;
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
        (unsigned int)v2);
      v2 = v16;
    }
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::InstantiateADG");
      pvData = 788;
      p_pvData = &pvData;
      v26 = 4LL;
      v27 = &v16;
      v28 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v14, v15, 5u, &pData);
      v2 = v16;
    }
    goto LABEL_3;
  }
LABEL_13:
  if ( *((_QWORD *)this + 11) )
  {
    v7 = ThreadPool;
    v8 = *(PTP_WAIT (__fastcall **)(CAudioThreadPool *, void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT, TP_WAIT_RESULT), void *))(*(_QWORD *)ThreadPool + 80LL);
    if ( v8 == CAudioThreadPool::CreateWait )
      Wait = CAudioThreadPool::CreateWait(
               ThreadPool,
               (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT, TP_WAIT_RESULT))CAudioDGProcess::OnADGProcessTerminatedHandler,
               this);
    else
      Wait = v8(
               ThreadPool,
               (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT, TP_WAIT_RESULT))CAudioDGProcess::OnADGProcessTerminatedHandler,
               this);
    v10 = Wait;
    *((_QWORD *)this + 14) = Wait;
    if ( Wait )
    {
      v11 = (void *)*((_QWORD *)this + 11);
      v12 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WAIT *, void *, struct _FILETIME *))(*(_QWORD *)v7 + 88LL);
      if ( v12 == CAudioThreadPool::SetWait )
        CAudioThreadPool::SetWait(v7, v10, v11, 0LL);
      else
        v12(v7, v10, v11, 0LL);
    }
    v2 = v16;
  }
  if ( v2 < 0 )
    goto LABEL_34;
LABEL_3:
  if ( v20 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v20 = 0;
  }
  return (unsigned int)v2;
}
