/*
 * XREFs of ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012F30
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x18000EFD0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000E2C0 (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x18000F410 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::DeleteSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  __int64 (__fastcall *v4)(CAudioSessionManager *); // rax
  CServerAudioSessionControl *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 118LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, a2);
  }
  v6 = a2;
  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)a2 + 8LL);
    if ( v4 == CAudioSessionManager::AddRef )
      CAudioSessionManager::AddRef(a2);
    else
      v4(a2);
  }
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface((LPCRITICAL_SECTION)((char *)this + 624), &v6);
  return 0LL;
}
