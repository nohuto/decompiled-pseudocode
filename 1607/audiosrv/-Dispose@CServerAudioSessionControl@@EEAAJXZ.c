/*
 * XREFs of ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x18000EFD0
 * Callers:
 *     AudioSessionDestroy @ 0x18000D9F0 (AudioSessionDestroy.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x18000EF70 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012F30 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180013940 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_qqS @ 0x180061808 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::Dispose(CServerAudioSessionControl *this)
{
  CAudioSession *v2; // rcx
  int (*v3)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  CAudioSession *v4; // rcx
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(CAudioSession *__hidden, bool); // rax
  int v7; // r8d
  CAudioSession *v8; // rcx
  void (*v9)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
  }
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = (CAudioSession *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v2 + 184LL);
    if ( v3 == CAudioSession::DeleteSessionNotification )
      CAudioSession::DeleteSessionNotification(v2, this);
    else
      ((void (__fastcall *)(CAudioSession *, CServerAudioSessionControl *))v3)(v2, this);
    v4 = (CAudioSession *)*((_QWORD *)this + 9);
    v5 = *((unsigned __int8 *)this + 84);
    v6 = *(__int64 (__fastcall **)(CAudioSession *__hidden, bool))(*(_QWORD *)v4 + 280LL);
    if ( v6 == CAudioSession::RemoveClientReference )
      CAudioSession::RemoveClientReference(v4, v5);
    else
      v6(v4, v5);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 15, v7, (_DWORD)this, *((_QWORD *)this + 9), 0LL);
    }
    v8 = (CAudioSession *)*((_QWORD *)this + 9);
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)CAudioSession::Release )
      CAudioSession::Release(v8);
    else
      v9();
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids);
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
