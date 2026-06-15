/*
 * XREFs of AudioSessionSetMute @ 0x180039EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z @ 0x1800159B0 (-SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionSetMute(CServerAudioSessionControl **a1, unsigned int a2, const struct _GUID *a3)
{
  __int64 (__fastcall *v3)(CServerAudioSessionControl *, unsigned int, const struct _GUID *); // rdi
  int v4; // eax
  unsigned int v5; // ebx

  v3 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, unsigned int, const struct _GUID *))(*(_QWORD *)*a1
                                                                                                  + 304LL);
  if ( v3 == CServerAudioSessionControl::SetMute )
    v4 = CServerAudioSessionControl::SetMute(*a1, a2, a3);
  else
    v4 = v3(*a1, a2, a3);
  v5 = v4;
  if ( v4 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x4Au, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, v4);
  }
  return v5;
}
