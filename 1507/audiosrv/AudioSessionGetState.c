/*
 * XREFs of AudioSessionGetState @ 0x1800319E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180018740 (-GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Fu,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      State);
  }
  return v4;
}
