/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x18000FDB0
 * Callers:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 * Callees:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180011BD0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  __int64 (__fastcall *v1)(CProcess *__hidden, struct IAudioSessionInfo *); // rsi

  v1 = *(__int64 (__fastcall **)(CProcess *__hidden, struct IAudioSessionInfo *))(**((_QWORD **)this + 85) + 32LL);
  if ( v1 == CProcess::UnregisterSession )
    CProcess::UnregisterSession(*((CProcess **)this + 85), (CAudioSession *)((char *)this - 32));
  else
    v1(*((CProcess **)this + 85), (CAudioSession *)((char *)this - 32));
}
