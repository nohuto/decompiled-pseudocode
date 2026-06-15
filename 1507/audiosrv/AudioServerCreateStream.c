/*
 * XREFs of AudioServerCreateStream @ 0x18002F590
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18002F720 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAudioProcess@@@Z @ 0x18002F880 (-RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAu.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??1CWatchDogTimer@@QEAA@XZ @ 0x1800680D0 (--1CWatchDogTimer@@QEAA@XZ.c)
 */

__int64 __fastcall AudioServerCreateStream(
        void *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct _GUID *a5,
        unsigned int a6,
        struct SYSTEM_AUDIO_STREAM *a7)
{
  int v11; // eax
  struct IAudioProcess *v12; // rsi
  RPC_STATUS ThreadLogonSessionStringSid; // edi
  HLOCAL v14; // rbx
  __int64 (__fastcall *v15)(__int64, struct IAudioProcess *, unsigned int, __int64, __int64, struct _GUID *, unsigned __int16 *, struct SYSTEM_AUDIO_STREAM *); // rdi
  RPC_STATUS Stream; // eax
  HLOCAL hMem; // [rsp+40h] [rbp-38h] BYREF
  void *phNewTimer; // [rsp+80h] [rbp+8h] BYREF

  hMem = 0LL;
  phNewTimer = 0LL;
  v11 = RpcAudioDataFlowAccessCheck(
          a1,
          (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(a2 != 0),
          a6,
          (struct IAudioProcess **)&phNewTimer);
  v12 = (struct IAudioProcess *)phNewTimer;
  ThreadLogonSessionStringSid = v11;
  if ( v11 >= 0 )
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
      v14 = hMem;
      if ( ThreadLogonSessionStringSid < 0 )
      {
        CWatchDogTimer::~CWatchDogTimer((CWatchDogTimer *)&phNewTimer);
      }
      else
      {
        v15 = *(__int64 (__fastcall **)(__int64, struct IAudioProcess *, unsigned int, __int64, __int64, struct _GUID *, unsigned __int16 *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)a1 + 48LL);
        if ( v15 == CVADServer::CreateStream )
          Stream = CVADServer::CreateStream((__int64)a1, v12, a2, a3, a4, a5, (unsigned __int16 *)hMem, a7);
        else
          Stream = v15((__int64)a1, v12, a2, a3, a4, a5, (unsigned __int16 *)hMem, a7);
        ThreadLogonSessionStringSid = Stream;
        if ( phNewTimer )
          DeleteTimerQueueTimer(0LL, phNewTimer, 0LL);
      }
      if ( v14 )
        LocalFree(v14);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( ThreadLogonSessionStringSid < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      88LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)ThreadLogonSessionStringSid);
  }
  return (unsigned int)ThreadLogonSessionStringSid;
}
