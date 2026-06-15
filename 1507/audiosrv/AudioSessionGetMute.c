/*
 * XREFs of AudioSessionGetMute @ 0x180031AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180018410 (-GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionGetMute(CServerAudioSessionControl **a1, int *a2)
{
  __int64 (__fastcall *v2)(CServerAudioSessionControl *, int *); // rdi
  int Mute; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, int *))(*(_QWORD *)*a1 + 296LL);
  if ( v2 == CServerAudioSessionControl::GetMute )
    Mute = CServerAudioSessionControl::GetMute(*a1, a2);
  else
    Mute = v2(*a1, a2);
  v4 = Mute;
  if ( Mute < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x49u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      Mute);
  }
  return v4;
}
