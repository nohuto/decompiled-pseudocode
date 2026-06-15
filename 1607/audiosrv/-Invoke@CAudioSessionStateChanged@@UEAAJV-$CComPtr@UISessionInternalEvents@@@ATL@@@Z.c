/*
 * XREFs of ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180010FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000EBF0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x18000EF70 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionStateChanged::Invoke(__int64 a1, CServerAudioSessionControl **a2)
{
  CServerAudioSessionControl *v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  struct IAudioSessionInfo *v6; // rdx
  __int64 (__fastcall *v7)(CAudioSessionManager *, __int64 (__fastcall ***)(CPerEndpointVolumeAudioSession *, const struct _GUID *, void **), enum _AudioSessionState, unsigned int); // rax
  unsigned int v8; // eax
  unsigned int v9; // edi
  volatile signed __int32 *v10; // rcx
  void (*v11)(void); // rax
  volatile signed __int32 *v12; // rbx
  void (__fastcall *v14)(CServerAudioSessionControl *); // rax
  CServerAudioSessionControl *v15; // rcx

  v3 = *a2;
  v4 = *(unsigned int *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(struct IAudioSessionInfo **)(a1 + 8);
  v7 = *(__int64 (__fastcall **)(CAudioSessionManager *, __int64 (__fastcall ***)(CPerEndpointVolumeAudioSession *, const struct _GUID *, void **), enum _AudioSessionState, unsigned int))(*(_QWORD *)v3 + 56LL);
  if ( (char *)v7 == (char *)CServerAudioSessionControl::OnStateChanged )
  {
    v8 = CServerAudioSessionControl::OnStateChanged(v3, v6, (enum _AudioSessionState)v5, (enum _AudioSessionState)v4);
  }
  else if ( v7 == CAudioSessionManager::OnStateChanged )
  {
    v8 = CAudioSessionManager::OnStateChanged(
           v3,
           (__int64 (__fastcall ***)(CPerEndpointVolumeAudioSession *, const struct _GUID *, void **))v6,
           (enum _AudioSessionState)v5,
           v4);
  }
  else
  {
    v8 = v7(
           v3,
           (__int64 (__fastcall ***)(CPerEndpointVolumeAudioSession *, const struct _GUID *, void **))v6,
           (enum _AudioSessionState)v5,
           v4);
  }
  v9 = v8;
  v10 = (volatile signed __int32 *)*a2;
  if ( *a2 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
    if ( (char *)v11 == (char *)CServerAudioSessionControl::Release )
    {
      v12 = v10 + 2;
      if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) == 1 )
      {
        v14 = *(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v12 + 32LL);
        v15 = (CServerAudioSessionControl *)(v10 + 2);
        if ( v14 == CServerAudioSessionControl::FinalRelease )
          CServerAudioSessionControl::FinalRelease(v15);
        else
          v14(v15);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
      }
    }
    else if ( (char *)v11 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release((CAudioSessionManager *)v10);
    }
    else
    {
      v11();
    }
  }
  return v9;
}
