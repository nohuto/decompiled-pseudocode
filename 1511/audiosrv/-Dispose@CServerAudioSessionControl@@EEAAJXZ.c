/*
 * XREFs of ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180016000
 * Callers:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180015F90 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18002558C (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     AudioSessionDestroy @ 0x180038C20 (AudioSessionDestroy.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180025970 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180026320 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_qqS @ 0x180079D40 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::Dispose(CServerAudioSessionControl *this)
{
  CAudioSession *v2; // rdi
  int (*v3)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rsi
  char v4; // si
  __int64 (__fastcall *v5)(CAudioSession *__hidden, bool); // rbp
  int v6; // r8d
  CAudioSession *v7; // rdi
  unsigned int (__fastcall *v8)(CAudioSession *__hidden); // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
  }
  v11 = 0;
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
    v4 = *((_BYTE *)this + 84);
    v5 = *(__int64 (__fastcall **)(CAudioSession *__hidden, bool))(**((_QWORD **)this + 9) + 280LL);
    if ( v5 == CAudioSession::RemoveClientReference )
      CAudioSession::RemoveClientReference(*((CAudioSession **)this + 9), v4);
    else
      v5(*((CAudioSession **)this + 9), v4);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 16, v6, (_DWORD)this, *((_QWORD *)this + 9), 0LL);
    }
    v7 = (CAudioSession *)*((_QWORD *)this + 9);
    v8 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v7 + 16LL);
    if ( v8 == CAudioSession::Release )
      CAudioSession::Release(v7);
    else
      v8(*((CAudioSession **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
