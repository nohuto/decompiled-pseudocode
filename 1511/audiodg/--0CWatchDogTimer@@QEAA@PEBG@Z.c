/*
 * XREFs of ??0CWatchDogTimer@@QEAA@PEBG@Z @ 0x1400029EC
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005F50 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 * Callees:
 *     <none>
 */

CWatchDogTimer *__fastcall CWatchDogTimer::CWatchDogTimer(CWatchDogTimer *this, unsigned __int16 *a2)
{
  *(_QWORD *)this = 0LL;
  if ( g_AudioDgWatchDogTimerInMs >= 0x3E8 )
    CreateTimerQueueTimer((PHANDLE)this, 0LL, CWatchDogTimer::TimerCallback, a2, g_AudioDgWatchDogTimerInMs, 0, 0x20u);
  return this;
}
