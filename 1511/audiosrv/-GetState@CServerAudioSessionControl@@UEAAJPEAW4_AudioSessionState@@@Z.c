/*
 * XREFs of ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180015D40
 * Callers:
 *     AudioSessionGetState @ 0x180039220 (AudioSessionGetState.c)
 * Callees:
 *     ?GetState@CAudioSession@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180026580 (-GetState@CAudioSession@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetState(CServerAudioSessionControl *this, enum _AudioSessionState *a2)
{
  __int64 (__fastcall *v2)(CAudioSession *__hidden, enum _AudioSessionState *); // rdi

  v2 = *(__int64 (__fastcall **)(CAudioSession *__hidden, enum _AudioSessionState *))(**((_QWORD **)this + 9) + 96LL);
  if ( v2 == CAudioSession::GetState )
    return CAudioSession::GetState(*((CAudioSession **)this + 9), a2);
  else
    return v2(*((CAudioSession **)this + 9), a2);
}
