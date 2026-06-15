/*
 * XREFs of AudioSessionSetVolume @ 0x18003A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180015A60 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionSetVolume(CServerAudioSessionControl **a1, __int64 a2, const struct _GUID *a3)
{
  float v3; // xmm1_4
  __int64 (__fastcall *v4)(CServerAudioSessionControl *, float, const struct _GUID *); // rdi
  int v5; // eax
  unsigned int v6; // ebx

  v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, float, const struct _GUID *))(*(_QWORD *)*a1 + 288LL);
  if ( v4 == CServerAudioSessionControl::SetVolume )
    v5 = CServerAudioSessionControl::SetVolume(*a1, v3, a3);
  else
    v5 = ((__int64 (__fastcall *)(CServerAudioSessionControl *, __int64, const struct _GUID *))v4)(*a1, a2, a3);
  v6 = v5;
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x48u, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, v5);
  }
  return v6;
}
