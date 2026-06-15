/*
 * XREFs of ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018B40
 * Callers:
 *     <none>
 * Callees:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180015F90 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001B4A0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamStateChanged::Invoke(__int64 a1, volatile signed __int32 **a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // r12
  __int64 (__fastcall *v9)(volatile signed __int32 *, __int64, _QWORD, _QWORD, __int64); // rsi
  unsigned int v10; // eax
  unsigned int v11; // esi
  volatile signed __int32 *v12; // rbx
  __int64 (__fastcall *v13)(CAudioSessionManager *); // rdi
  CServerAudioSessionControl *v14; // rdi
  void (__fastcall *v16)(CServerAudioSessionControl *); // rbx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = v3 + 8;
  else
    v4 = 0LL;
  v5 = *a2;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(__int64 (__fastcall **)(volatile signed __int32 *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 80LL);
  if ( (char *)v9 == (char *)CWindowsPolicyManager::OnStreamStateChanged )
    v10 = CWindowsPolicyManager::OnStreamStateChanged(v5, v8, v7, v6, v4);
  else
    v10 = v9(v5, v8, v7, v6, v4);
  v11 = v10;
  v12 = *a2;
  if ( v12 )
  {
    v13 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v12 + 16LL);
    if ( v13 == CServerAudioSessionControl::Release )
    {
      v14 = (CServerAudioSessionControl *)(v12 + 2);
      if ( _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF) == 1 )
      {
        v16 = *(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v14 + 32LL);
        if ( v16 == CServerAudioSessionControl::FinalRelease )
          CServerAudioSessionControl::FinalRelease(v14);
        else
          v16(v14);
        (*(void (__fastcall **)(CServerAudioSessionControl *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
      }
    }
    else if ( v13 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release((CAudioSessionManager *)v12);
    }
    else
    {
      v13((CAudioSessionManager *)v12);
    }
  }
  return v11;
}
