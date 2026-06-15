/*
 * XREFs of ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018F60
 * Callers:
 *     <none>
 * Callees:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180018990 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnStreamDestroy@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180021890 (-OnStreamDestroy@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamDestroy::Invoke(__int64 a1, CWindowsPolicyManager **a2)
{
  __int64 v3; // rax
  struct IAudioStreamInfo *v4; // rbp
  CWindowsPolicyManager *v5; // rsi
  __int64 (__fastcall *v6)(CWindowsPolicyManager *__hidden, struct IAudioSessionInfo *, struct IAudioStreamInfo *); // rdi
  unsigned int v7; // eax
  unsigned int v8; // esi
  volatile signed __int32 *v9; // rbx
  __int64 (__fastcall *v10)(CServerAudioSessionControl *); // rdi
  CServerAudioSessionControl *v11; // rdi
  void (__fastcall *v13)(CServerAudioSessionControl *); // rbx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    v4 = (struct IAudioStreamInfo *)(v3 + 8);
  else
    v4 = 0LL;
  v5 = *a2;
  v6 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, struct IAudioSessionInfo *, struct IAudioStreamInfo *))(*(_QWORD *)*a2 + 96LL);
  if ( v6 == CWindowsPolicyManager::OnStreamDestroy )
    v7 = CWindowsPolicyManager::OnStreamDestroy(v5, *(struct IAudioSessionInfo **)(a1 + 8), v4);
  else
    v7 = v6(v5, *(struct IAudioSessionInfo **)(a1 + 8), v4);
  v8 = v7;
  v9 = (volatile signed __int32 *)*a2;
  if ( v9 )
  {
    v10 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v9 + 16LL);
    if ( v10 == CServerAudioSessionControl::Release )
    {
      v11 = (CServerAudioSessionControl *)(v9 + 2);
      if ( _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF) == 1 )
      {
        v13 = *(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v11 + 32LL);
        if ( v13 == CServerAudioSessionControl::FinalRelease )
          CServerAudioSessionControl::FinalRelease(v11);
        else
          v13(v11);
        (*(void (__fastcall **)(CServerAudioSessionControl *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
      }
    }
    else if ( (char *)v10 == (char *)CAudioSessionManager::Release )
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
