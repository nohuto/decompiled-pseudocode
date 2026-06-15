/*
 * XREFs of ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012FC0
 * Callers:
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x18000F100 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000E110 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x18000F410 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::AddSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  __int64 (__fastcall *v4)(CAudioSessionManager *); // rax
  CAudioSessionManager *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 117LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, a2);
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
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 624), &v6);
  return 0LL;
}
