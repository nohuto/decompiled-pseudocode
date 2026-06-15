/*
 * XREFs of AudioServerCreateStream @ 0x18002B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18001B9C0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@K@Z @ 0x1800299E0 (-RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@K@Z.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18002BAB0 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??1CWatchDogTimer@@QEAA@XZ @ 0x180066708 (--1CWatchDogTimer@@QEAA@XZ.c)
 */

__int64 __fastcall AudioServerCreateStream(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct _GUID *a5,
        unsigned int a6,
        struct SYSTEM_AUDIO_STREAM *a7)
{
  int (__fastcall *v11)(CWindowsPolicyManager *, void *, struct IAudioProcess **); // rdi
  int Process; // eax
  RPC_STATUS ThreadLogonSessionStringSid; // ebx
  __int64 (__fastcall *v14)(CProcess *, unsigned int, unsigned int); // rbp
  int v15; // eax
  HLOCAL v16; // rdi
  __int64 (__fastcall *v17)(__int64, struct IAudioProcess *, unsigned int, __int64, __int64, struct _GUID *, unsigned __int16 *, struct SYSTEM_AUDIO_STREAM *); // rbx
  RPC_STATUS Stream; // eax
  void *phNewTimer; // [rsp+40h] [rbp-38h] BYREF
  HLOCAL hMem; // [rsp+48h] [rbp-30h] BYREF
  CProcess *v22; // [rsp+80h] [rbp+8h] BYREF

  v11 = *(int (__fastcall **)(CWindowsPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                       + 32LL);
  hMem = 0LL;
  v22 = 0LL;
  if ( v11 == CWindowsPolicyManager::RpcGetProcess )
    Process = CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, 0LL, &v22);
  else
    Process = v11(g_PolicyManager, 0LL, &v22);
  ThreadLogonSessionStringSid = Process;
  if ( Process >= 0 )
  {
    v14 = *(__int64 (__fastcall **)(CProcess *, unsigned int, unsigned int))(*(_QWORD *)v22 + 136LL);
    v15 = v14 == CProcess::RpcCheckDataFlowAccess
        ? CProcess::RpcCheckDataFlowAccess(v22, a2 != 0, a6)
        : v14(v22, a2 != 0, a6);
    ThreadLogonSessionStringSid = v15;
    if ( v15 >= 0 )
    {
      phNewTimer = 0LL;
      if ( g_AudioSrvWatchDogTimerInMs >= 0x3E8 )
        CreateTimerQueueTimer(
          &phNewTimer,
          0LL,
          CWatchDogTimer::TimerCallback,
          L"AudioServerCreateStream",
          g_AudioSrvWatchDogTimerInMs,
          0,
          0x20u);
      ThreadLogonSessionStringSid = RpcImpersonateClient(0LL);
      if ( ThreadLogonSessionStringSid )
      {
        CWatchDogTimer::~CWatchDogTimer((CWatchDogTimer *)&phNewTimer);
      }
      else
      {
        ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)&hMem);
        RpcRevertToSelf();
        v16 = hMem;
        if ( ThreadLogonSessionStringSid < 0 )
        {
          CWatchDogTimer::~CWatchDogTimer((CWatchDogTimer *)&phNewTimer);
        }
        else
        {
          v17 = *(__int64 (__fastcall **)(__int64, struct IAudioProcess *, unsigned int, __int64, __int64, struct _GUID *, unsigned __int16 *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)a1 + 48LL);
          if ( v17 == CVADServer::CreateStream )
            Stream = CVADServer::CreateStream(a1, v22, a2, a3, a4, a5, (unsigned __int16 *)hMem, a7);
          else
            Stream = v17(a1, v22, a2, a3, a4, a5, (unsigned __int16 *)hMem, a7);
          ThreadLogonSessionStringSid = Stream;
          if ( phNewTimer )
            DeleteTimerQueueTimer(0LL, phNewTimer, 0LL);
        }
        if ( v16 )
          LocalFree(v16);
      }
    }
  }
  if ( v22 )
  {
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v22 + 16LL))(v22);
    v22 = 0LL;
  }
  if ( ThreadLogonSessionStringSid < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      81LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)ThreadLogonSessionStringSid);
  }
  return (unsigned int)ThreadLogonSessionStringSid;
}
