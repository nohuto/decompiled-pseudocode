/*
 * XREFs of AudioSessionGetVolume @ 0x180031A40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180018500 (-GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x47u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      Volume);
  }
  return v4;
}
