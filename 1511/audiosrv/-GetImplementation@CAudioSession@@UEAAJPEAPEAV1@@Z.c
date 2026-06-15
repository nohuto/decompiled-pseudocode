/*
 * XREFs of ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x1800288F0
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016A50 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSession::GetImplementation(CAudioSession *this, struct CAudioSession **a2)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( a2 )
  {
    *a2 = (CAudioSession *)((char *)this - 8);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 8LL))((char *)this - 8);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
