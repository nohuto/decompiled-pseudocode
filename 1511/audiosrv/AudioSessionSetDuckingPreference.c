/*
 * XREFs of AudioSessionSetDuckingPreference @ 0x18003A550
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x180015B80 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x58u, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, v3);
  }
  return v4;
}
