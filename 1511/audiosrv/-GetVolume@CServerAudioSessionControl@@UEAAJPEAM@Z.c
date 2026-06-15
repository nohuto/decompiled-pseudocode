/*
 * XREFs of ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180015B00
 * Callers:
 *     AudioSessionGetVolume @ 0x1800396F0 (AudioSessionGetVolume.c)
 * Callees:
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180028760 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetVolume(CServerAudioSessionControl *this, float *a2)
{
  CAudioSession *v4; // rbx
  __int64 (__fastcall *v5)(CAudioSession *__hidden, float *); // rdi

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33,
      (unsigned int)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0,
      0LL);
  }
  v4 = (CAudioSession *)*((_QWORD *)this + 9);
  v5 = *(__int64 (__fastcall **)(CAudioSession *__hidden, float *))(*(_QWORD *)v4 + 304LL);
  if ( v5 == CAudioSession::GetVolume )
    return CAudioSession::GetVolume(v4, a2);
  else
    return v5(v4, a2);
}
