/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180024AB0
 * Callers:
 *     AudioServerGetAudioSession @ 0x180039280 (AudioServerGetAudioSession.c)
 * Callees:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180016FD0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  unsigned int v2; // esi
  struct CServerAudioSessionControl **v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  _BOOL8 v7; // r8
  struct CAudioSession *v8; // r15
  unsigned int v9; // r12d
  CAudioSessionManager *v10; // rbx
  __int64 (__fastcall *v11)(CAudioSessionManager *, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **); // rsi
  unsigned int AudioSessionControl; // eax
  struct CServerAudioSessionControl *v13; // rdi
  TraceLoggingHProvider v14; // rcx

  v2 = 0;
  if ( !*((_DWORD *)this + 50) )
    return 2290679809LL;
  v5 = (struct CServerAudioSessionControl **)((char *)this + 160);
  if ( *((_QWORD *)this + 20) )
    goto LABEL_12;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*v5 )
  {
    v8 = (struct CAudioSession *)*((_QWORD *)this + 21);
    v9 = *((_DWORD *)this + 16);
    v10 = (CAudioSessionManager *)*((_QWORD *)this + 19);
    v11 = *(__int64 (__fastcall **)(CAudioSessionManager *, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **))(*(_QWORD *)v10 + 104LL);
    if ( v11 == CAudioSessionManager::GetAudioSessionControl )
    {
      AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(v10, v9, 1, v8, v5);
    }
    else
    {
      LOBYTE(v7) = 1;
      AudioSessionControl = v11(v10, v9, v7, v8, v5);
    }
    v2 = AudioSessionControl;
  }
  LeaveCriticalSection(v6);
  if ( !v2 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, *v5);
    }
LABEL_12:
    *a2 = *v5;
    v13 = *v5;
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v13 + 8LL))(v13);
    _InterlockedIncrement((volatile signed __int32 *)v13 + 6);
    goto LABEL_13;
  }
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
  {
    goto LABEL_14;
  }
  WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v2);
LABEL_13:
  v14 = WPP_GLOBAL_Control;
LABEL_14:
  if ( (v2 & 0x80000000) != 0
    && v14 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v14 + 7) & 0x100) != 0
    && *((_BYTE *)v14 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v14 + 2), 34LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v2);
  }
  return v2;
}
