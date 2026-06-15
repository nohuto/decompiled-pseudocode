/*
 * XREFs of ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000D930
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x18000E7F0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x18000E860 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800102B0 (-OnVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionVolumeChanged::Invoke(
        __int64 a1,
        CServerAudioSessionControl **a2,
        __int64 a3,
        __int64 a4)
{
  CServerAudioSessionControl *v5; // r8
  struct IAudioSessionInfo *v6; // rdx
  __int64 (__fastcall *v7)(CServerAudioSessionControl *__hidden, struct IAudioSessionInfo *, float, bool, const struct _GUID *); // rax
  float v8; // xmm2_4
  unsigned int v9; // eax
  unsigned int v10; // ebx
  CServerAudioSessionControl *v11; // rcx
  void (*v12)(void); // rax
  struct _GUID *v14; // [rsp+20h] [rbp-28h]

  v5 = *a2;
  LOBYTE(a4) = *(_BYTE *)(a1 + 20);
  v6 = *(struct IAudioSessionInfo **)(a1 + 8);
  v7 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden, struct IAudioSessionInfo *, float, bool, const struct _GUID *))(*(_QWORD *)v5 + 40LL);
  v14 = *(struct _GUID **)(a1 + 24);
  v8 = *(float *)(a1 + 16);
  if ( v7 == CServerAudioSessionControl::OnVolumeChanged )
  {
    v9 = CServerAudioSessionControl::OnVolumeChanged(v5, v6, v8, a4, v14);
  }
  else if ( v7 == CAudioSessionManager::OnVolumeChanged )
  {
    v9 = CAudioSessionManager::OnVolumeChanged(v5, v6, v8, a4, v14);
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(CServerAudioSessionControl *, struct IAudioSessionInfo *, CServerAudioSessionControl *, __int64))v7)(
           v5,
           v6,
           v5,
           a4);
  }
  v10 = v9;
  v11 = *a2;
  if ( *a2 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    if ( (char *)v12 == (char *)CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v11);
    }
    else if ( (char *)v12 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v11);
    }
    else
    {
      v12();
    }
  }
  return v10;
}
