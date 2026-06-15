/*
 * XREFs of ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180029220
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x18000E7F0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x18000EDC0 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnGroupingParamChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180010270 (-OnGroupingParamChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionGroupingParamChanged::Invoke(_QWORD *a1, CAudioSessionManager **a2)
{
  CAudioSessionManager *v3; // r10
  struct _GUID *v4; // r9
  struct IAudioSessionInfo *v5; // rdx
  __int64 (__fastcall *v6)(CServerAudioSessionControl *, struct IAudioSessionInfo *, struct _GUID *, struct _GUID *); // rax
  unsigned int v7; // ebx
  CAudioSessionManager *v8; // rcx
  void (*v9)(void); // rax
  unsigned int v11; // eax
  struct _GUID v12; // [rsp+40h] [rbp-18h] BYREF

  v12 = *(struct _GUID *)a1[2];
  v3 = *a2;
  v4 = (struct _GUID *)a1[3];
  v5 = (struct IAudioSessionInfo *)a1[1];
  v6 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, struct IAudioSessionInfo *, struct _GUID *, struct _GUID *))(*(_QWORD *)v3 + 64LL);
  if ( (char *)v6 == (char *)CAudioSessionManager::OnGroupingParamChanged )
  {
    v11 = CAudioSessionManager::OnGroupingParamChanged(v3, v5, &v12, v4);
  }
  else if ( v6 == CServerAudioSessionControl::OnGroupingParamChanged )
  {
    v11 = CServerAudioSessionControl::OnGroupingParamChanged(v3, v5, &v12, v4);
  }
  else
  {
    v11 = v6(v3, v5, &v12, v4);
  }
  v7 = v11;
  v8 = *a2;
  if ( *a2 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v8);
    }
    else if ( (char *)v9 == (char *)CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v8);
    }
    else
    {
      v9();
    }
  }
  return v7;
}
