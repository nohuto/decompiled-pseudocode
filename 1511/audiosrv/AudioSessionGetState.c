/*
 * XREFs of AudioSessionGetState @ 0x180039220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180015D40 (-GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionGetState(CServerAudioSessionControl **a1, enum _AudioSessionState *a2)
{
  __int64 (__fastcall *v2)(CServerAudioSessionControl *, enum _AudioSessionState *); // rdi
  int State; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, enum _AudioSessionState *))(*(_QWORD *)*a1 + 144LL);
  if ( v2 == CServerAudioSessionControl::GetState )
    State = CServerAudioSessionControl::GetState(*a1, a2);
  else
    State = v2(*a1, a2);
  v4 = State;
  if ( State < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      63LL,
      &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      (unsigned int)State);
  }
  return v4;
}
