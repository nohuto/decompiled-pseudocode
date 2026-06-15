/*
 * XREFs of ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180018740
 * Callers:
 *     AudioSessionGetState @ 0x1800319E0 (AudioSessionGetState.c)
 * Callees:
 *     ?GetState@CAudioSession@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x18000F330 (-GetState@CAudioSession@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetState(CServerAudioSessionControl *this, enum _AudioSessionState *a2)
{
  __int64 (__fastcall *v2)(enum _AudioSessionState *, enum _AudioSessionState *); // rdi

  v2 = *(__int64 (__fastcall **)(enum _AudioSessionState *, enum _AudioSessionState *))(**((_QWORD **)this + 9) + 96LL);
  if ( v2 == CAudioSession::GetState )
    return CAudioSession::GetState(*((enum _AudioSessionState **)this + 9), a2);
  else
    return v2(*((enum _AudioSessionState **)this + 9), a2);
}
