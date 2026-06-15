/*
 * XREFs of ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180031D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180018790 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnGroupingParamChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180019D30 (-OnGroupingParamChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnGroupingParamChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180021AB0 (-OnGroupingParamChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionGroupingParamChanged::Invoke(__int64 a1, CAudioSessionManager **a2)
{
  CAudioSessionManager *v3; // rdi
  __int64 (__fastcall *v4)(CServerAudioSessionControl *, struct IAudioSessionInfo *, struct _GUID *, struct _GUID *); // rbx
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 (__fastcall *v7)(CServerAudioSessionControl *); // rdi
  struct _GUID v9; // [rsp+30h] [rbp-28h] BYREF

  v9 = *(struct _GUID *)*(_QWORD *)(a1 + 16);
  v3 = *a2;
  v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, struct IAudioSessionInfo *, struct _GUID *, struct _GUID *))(*(_QWORD *)*a2 + 64LL);
  if ( (char *)v4 == (char *)CAudioSessionManager::OnGroupingParamChanged )
  {
    v5 = CAudioSessionManager::OnGroupingParamChanged(
           v3,
           *(struct IAudioSessionInfo **)(a1 + 8),
           &v9,
           *(const struct _GUID **)(a1 + 24));
  }
  else if ( (char *)v4 == (char *)CWindowsPolicyManager::OnGroupingParamChanged )
  {
    v5 = CWindowsPolicyManager::OnGroupingParamChanged(
           v3,
           *(struct IAudioSessionInfo **)(a1 + 8),
           &v9,
           *(const struct _GUID **)(a1 + 24));
  }
  else if ( v4 == CServerAudioSessionControl::OnGroupingParamChanged )
  {
    v5 = CServerAudioSessionControl::OnGroupingParamChanged(
           v3,
           *(struct IAudioSessionInfo **)(a1 + 8),
           &v9,
           *(struct _GUID **)(a1 + 24));
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(CAudioSessionManager *, _QWORD, struct _GUID *, _QWORD, __int64))v4)(
           v3,
           *(_QWORD *)(a1 + 8),
           &v9,
           *(_QWORD *)(a1 + 24),
           -2LL);
  }
  v6 = v5;
  if ( *a2 )
  {
    v7 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)*a2 + 16LL);
    if ( v7 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(*a2);
    }
    else if ( v7 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(*a2);
    }
    else
    {
      v7(*a2);
    }
  }
  return v6;
}
