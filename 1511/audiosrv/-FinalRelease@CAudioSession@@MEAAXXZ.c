/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180027990
 * Callers:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 * Callees:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800299A0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  int (*v1)(CProcess *__hidden, struct IAudioSessionInfo *); // rsi

  v1 = *(int (**)(CProcess *__hidden, struct IAudioSessionInfo *))(**((_QWORD **)this + 104) + 32LL);
  if ( v1 == CProcess::UnregisterSession )
    CProcess::UnregisterSession(*((CProcess **)this + 104), (CAudioSession *)((char *)this - 32));
  else
    ((void (__fastcall *)(_QWORD, char *))v1)(*((_QWORD *)this + 104), (char *)this - 32);
}
