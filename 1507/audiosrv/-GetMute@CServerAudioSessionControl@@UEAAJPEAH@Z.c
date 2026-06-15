/*
 * XREFs of ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180018410
 * Callers:
 *     AudioSessionGetMute @ 0x180031AA0 (AudioSessionGetMute.c)
 * Callees:
 *     ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x1800107E0 (-GetMute@CAudioSession@@UEAAJPEAH@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetMute(CServerAudioSessionControl *this, int *a2)
{
  __int64 (__fastcall *v2)(CAudioSession *, int *); // rdi

  v2 = *(__int64 (__fastcall **)(CAudioSession *, int *))(**((_QWORD **)this + 9) + 320LL);
  if ( v2 == CAudioSession::GetMute )
    return CAudioSession::GetMute(*((CAudioSession **)this + 9), a2);
  else
    return v2(*((CAudioSession **)this + 9), a2);
}
