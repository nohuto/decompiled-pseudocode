/*
 * XREFs of ?MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z @ 0x180075178
 * Callers:
 *     ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007B904 (-RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_BOOL8 __fastcall CAudioSession::MatchesParameters(
        CAudioSession *this,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *lpsz)
{
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  GUID pclsid; // [rsp+30h] [rbp-48h] BYREF

  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 104LL))(*((_QWORD *)this + 108)) )
    return 0LL;
  if ( a3 )
  {
    v9 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 64LL))(*((_QWORD *)this + 108));
    if ( !v9 || CompareStringOrdinal(a3, -1, v9, -1, 1) != 2 )
      return 0LL;
  }
  if ( a4 )
  {
    v10 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 56LL))(*((_QWORD *)this + 108));
    if ( CompareStringOrdinal(a4, -1, v10, -1, 1) != 2 )
      return 0LL;
  }
  if ( !lpsz )
    return 1LL;
  if ( CLSIDFromString(lpsz, &pclsid) < 0 )
    return 0LL;
  v11 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&DEVINTERFACE_AUDIO_RENDER.Data1;
  if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&DEVINTERFACE_AUDIO_RENDER.Data1 )
    v11 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)DEVINTERFACE_AUDIO_RENDER.Data4;
  if ( !v11 )
    return 1LL;
  v12 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&DEVINTERFACE_AUDIO_CAPTURE.Data1;
  if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&DEVINTERFACE_AUDIO_CAPTURE.Data1 )
    v12 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)DEVINTERFACE_AUDIO_CAPTURE.Data4;
  return !v12;
}
