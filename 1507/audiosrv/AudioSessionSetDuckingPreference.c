/*
 * XREFs of AudioSessionSetDuckingPreference @ 0x1800326A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x180018580 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionSetDuckingPreference(CAudioSession ***a1, unsigned __int8 a2)
{
  __int64 (__fastcall *v2)(CAudioSession **, int); // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v2 = (__int64 (__fastcall *)(CAudioSession **, int))*((_QWORD *)**a1 + 34);
  if ( v2 == CServerAudioSessionControl::SetDuckingPreference )
    v3 = CServerAudioSessionControl::SetDuckingPreference(*a1, a2);
  else
    v3 = v2(*a1, a2);
  v4 = v3;
  if ( v3 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x58u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      v3);
  }
  return v4;
}
