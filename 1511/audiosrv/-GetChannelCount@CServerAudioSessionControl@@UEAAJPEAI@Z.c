/*
 * XREFs of ?GetChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z @ 0x180077C60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetChannelCount(CServerAudioSessionControl *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      40,
      (unsigned int)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0,
      0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 336LL))(
           *((_QWORD *)this + 9),
           a2);
}
