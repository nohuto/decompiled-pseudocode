/*
 * XREFs of ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180018A00
 * Callers:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180018990 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     AudioSessionDestroy @ 0x180031510 (AudioSessionDestroy.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18000E720 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18000F0D0 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_qqS @ 0x18007EB20 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::Dispose(CServerAudioSessionControl *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(CAudioSession *, struct ISessionInternalEvents *); // rsi
  __int64 v4; // rdx
  CAudioSession *v5; // rdi
  __int64 (__fastcall *v6)(CAudioSession *, char); // rsi
  int v7; // r8d
  CAudioSession *v8; // rdi
  __int64 (__fastcall *v9)(CAudioSession *); // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      15LL,
      &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0LL);
  }
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v2 + 184LL);
    if ( v3 == CAudioSession::DeleteSessionNotification )
      CAudioSession::DeleteSessionNotification(*((CAudioSession **)this + 9), this);
    else
      v3(*((CAudioSession **)this + 9), this);
    v5 = (CAudioSession *)*((_QWORD *)this + 9);
    v6 = *(__int64 (__fastcall **)(CAudioSession *, char))(*(_QWORD *)v5 + 280LL);
    if ( v6 == CAudioSession::RemoveClientReference )
    {
      CAudioSession::RemoveClientReference(v5, *((_BYTE *)this + 84));
    }
    else
    {
      LOBYTE(v4) = *((_BYTE *)this + 84);
      v6(*((CAudioSession **)this + 9), v4);
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qqS(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        16,
        v7,
        (_DWORD)this,
        *((_QWORD *)this + 9),
        0LL);
    }
    v8 = (CAudioSession *)*((_QWORD *)this + 9);
    v9 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioSession::Release )
      CAudioSession::Release(v8);
    else
      v9(*((CAudioSession **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x11u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids);
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
