/*
 * XREFs of ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180038800
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800157B0 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180016F90 (-OnVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?OnVolumeChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x18001B660 (-OnVolumeChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionVolumeChanged::Invoke(
        __int64 a1,
        CServerAudioSessionControl **a2,
        __int64 a3,
        __int64 a4)
{
  CServerAudioSessionControl *v5; // rdi
  float v6; // xmm6_4
  struct IAudioSessionInfo *v7; // r14
  __int64 (__fastcall *v8)(CServerAudioSessionControl *, struct IAudioSessionInfo *, __int64, __int64, _QWORD); // rbx
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 (__fastcall *v11)(CAudioSessionManager *); // rdi

  v5 = *a2;
  v6 = *(float *)(a1 + 16);
  v7 = *(struct IAudioSessionInfo **)(a1 + 8);
  v8 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, struct IAudioSessionInfo *, __int64, __int64, _QWORD))(*(_QWORD *)*a2 + 40LL);
  if ( (char *)v8 == (char *)CServerAudioSessionControl::OnVolumeChanged )
  {
    v9 = CServerAudioSessionControl::OnVolumeChanged(v5, v7, v6, *(_BYTE *)(a1 + 20), *(struct _GUID **)(a1 + 24));
  }
  else if ( (char *)v8 == (char *)CAudioSessionManager::OnVolumeChanged )
  {
    v9 = CAudioSessionManager::OnVolumeChanged(v5, v7, v6);
  }
  else
  {
    LOBYTE(a4) = *(_BYTE *)(a1 + 20);
    if ( (char *)v8 == (char *)CWindowsPolicyManager::OnVolumeChanged )
      v9 = CWindowsPolicyManager::OnVolumeChanged(v5, v7, v6, a4, *(const struct _GUID **)(a1 + 24));
    else
      v9 = v8(v5, v7, a3, a4, *(_QWORD *)(a1 + 24));
  }
  v10 = v9;
  if ( *a2 )
  {
    v11 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)*a2 + 16LL);
    if ( v11 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(*a2);
    }
    else if ( v11 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(*a2);
    }
    else
    {
      v11(*a2);
    }
  }
  return v10;
}
