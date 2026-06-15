/*
 * XREFs of AudioSessionGetVolume @ 0x1800396F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180015B00 (-GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionGetVolume(CServerAudioSessionControl **a1, float *a2)
{
  __int64 (__fastcall *v2)(CServerAudioSessionControl *, float *); // rdi
  int Volume; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, float *))(*(_QWORD *)*a1 + 280LL);
  if ( v2 == CServerAudioSessionControl::GetVolume )
    Volume = CServerAudioSessionControl::GetVolume(*a1, a2);
  else
    Volume = v2(*a1, a2);
  v4 = Volume;
  if ( Volume < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x47u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      Volume);
  }
  return v4;
}
