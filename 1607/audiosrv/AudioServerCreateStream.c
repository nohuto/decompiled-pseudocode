/*
 * XREFs of AudioServerCreateStream @ 0x180006340
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x1800061E0 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x180050D5C (--1CWatchdogTimer@@QEAA@XZ.c)
 */

__int64 __fastcall AudioServerCreateStream(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v11; // rax
  RPC_STATUS ThreadLogonSessionStringSid; // ebx
  DWORD DueTime; // ebx
  HLOCAL v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64, __int64, __int64, HLOCAL, __int64); // rax
  RPC_STATUS Stream; // eax
  HLOCAL hMem; // [rsp+50h] [rbp-58h] BYREF
  void *phNewTimer[2]; // [rsp+58h] [rbp-50h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp-40h]
  const wchar_t *v21; // [rsp+70h] [rbp-38h]
  __int64 v22; // [rsp+B0h] [rbp+8h] BYREF

  hMem = 0LL;
  v11 = *(_QWORD *)g_PolicyManager;
  v22 = 0LL;
  ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(v11 + 32))(
                                  g_PolicyManager,
                                  0LL,
                                  &v22);
  if ( ThreadLogonSessionStringSid >= 0 )
  {
    ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v22 + 144LL))(
                                    v22,
                                    a2 != 0,
                                    a6);
    if ( ThreadLogonSessionStringSid >= 0 )
    {
      DueTime = g_AudioSrvWatchDogTimerInMs;
      phNewTimer[1] = &dword_1800CA040;
      phNewTimer[0] = 0LL;
      CurrentThreadId = GetCurrentThreadId();
      v21 = L"AudioServerCreateStream";
      if ( DueTime >= 0x3E8 )
        CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, DueTime, 0, 0x20u);
      ThreadLogonSessionStringSid = RpcImpersonateClient(0LL);
      if ( ThreadLogonSessionStringSid )
      {
        CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)phNewTimer);
      }
      else
      {
        ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)&hMem);
        RpcRevertToSelf();
        v14 = hMem;
        if ( ThreadLogonSessionStringSid < 0 )
        {
          CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)phNewTimer);
        }
        else
        {
          v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, HLOCAL, __int64))(*(_QWORD *)a1 + 48LL);
          if ( (char *)v15 == (char *)CVADServer::CreateStream )
            Stream = CVADServer::CreateStream(a1, v22, a2, a3, a4, a5, hMem, a7);
          else
            Stream = v15(a1, v22, a2, a3, a4, a5, hMem, a7);
          ThreadLogonSessionStringSid = Stream;
          if ( phNewTimer[0] )
            DeleteTimerQueueTimer(0LL, phNewTimer[0], (HANDLE)0xFFFFFFFFFFFFFFFFLL);
        }
        if ( v14 )
          LocalFree(v14);
      }
    }
  }
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v22 = 0LL;
  }
  if ( ThreadLogonSessionStringSid < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerCreateStream", 0xC0Eu, ThreadLogonSessionStringSid);
  return (unsigned int)ThreadLogonSessionStringSid;
}
