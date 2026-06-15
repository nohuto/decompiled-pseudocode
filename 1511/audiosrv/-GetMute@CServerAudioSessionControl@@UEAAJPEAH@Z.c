/*
 * XREFs of ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180015A10
 * Callers:
 *     AudioSessionGetMute @ 0x180039890 (AudioSessionGetMute.c)
 * Callees:
 *     ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x1800285E0 (-GetMute@CAudioSession@@UEAAJPEAH@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetMute(CServerAudioSessionControl *this, int *a2)
{
  __int64 (__fastcall *v2)(CAudioSession *__hidden, int *); // rdi

  v2 = *(__int64 (__fastcall **)(CAudioSession *__hidden, int *))(**((_QWORD **)this + 9) + 320LL);
  if ( v2 == CAudioSession::GetMute )
    return CAudioSession::GetMute(*((CAudioSession **)this + 9), a2);
  else
    return v2(*((CAudioSession **)this + 9), a2);
}
