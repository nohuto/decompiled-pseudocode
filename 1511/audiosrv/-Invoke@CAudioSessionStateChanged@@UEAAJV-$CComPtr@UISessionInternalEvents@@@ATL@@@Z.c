/*
 * XREFs of ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800141D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015BA0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180015F90 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016A50 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001B540 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionStateChanged::Invoke(__int64 a1, CServerAudioSessionControl **a2)
{
  CServerAudioSessionControl *v3; // rsi
  enum _AudioSessionState v4; // ebp
  enum _AudioSessionState v5; // r14d
  __int64 (__fastcall *v6)(CServerAudioSessionControl *__hidden, struct IAudioSessionInfo *, enum _AudioSessionState, enum _AudioSessionState); // rdi
  unsigned int v7; // eax
  unsigned int v8; // esi
  volatile signed __int32 *v9; // rbx
  unsigned int (__fastcall *v10)(CServerAudioSessionControl *__hidden); // rdi
  CServerAudioSessionControl *v11; // rdi
  void (__fastcall *v13)(CServerAudioSessionControl *__hidden); // rbx

  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden, struct IAudioSessionInfo *, enum _AudioSessionState, enum _AudioSessionState))(*(_QWORD *)*a2 + 56LL);
  if ( v6 == CServerAudioSessionControl::OnStateChanged )
  {
    v7 = CServerAudioSessionControl::OnStateChanged(v3, *(struct IAudioSessionInfo **)(a1 + 8), v5, v4);
  }
  else if ( v6 == CWindowsPolicyManager::OnStateChanged )
  {
    v7 = CWindowsPolicyManager::OnStateChanged(v3, *(struct IAudioSessionInfo **)(a1 + 8), v5, v4);
  }
  else if ( v6 == CAudioSessionManager::OnStateChanged )
  {
    v7 = CAudioSessionManager::OnStateChanged(v3, *(struct IAudioSessionInfo **)(a1 + 8), v5, v4);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(CServerAudioSessionControl *, _QWORD, _QWORD, _QWORD, __int64))v6)(
           v3,
           *(_QWORD *)(a1 + 8),
           (unsigned int)v5,
           (unsigned int)v4,
           -2LL);
  }
  v8 = v7;
  v9 = (volatile signed __int32 *)*a2;
  if ( v9 )
  {
    v10 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v9 + 16LL);
    if ( v10 == CServerAudioSessionControl::Release )
    {
      v11 = (CServerAudioSessionControl *)(v9 + 2);
      if ( _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF) == 1 )
      {
        v13 = *(void (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v11 + 32LL);
        if ( v13 == CServerAudioSessionControl::FinalRelease )
          CServerAudioSessionControl::FinalRelease(v11);
        else
          v13(v11);
        (*(void (__fastcall **)(CServerAudioSessionControl *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
      }
    }
    else if ( v10 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release((CAudioSessionManager *)v9);
    }
    else
    {
      v10((CServerAudioSessionControl *)v9);
    }
  }
  return v8;
}
