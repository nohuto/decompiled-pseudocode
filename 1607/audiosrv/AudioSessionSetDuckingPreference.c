/*
 * XREFs of AudioSessionSetDuckingPreference @ 0x18002A010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x18000EBD0 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionSetDuckingPreference(CAudioSession ***a1, unsigned __int8 a2)
{
  CAudioSession **v2; // rcx
  __int64 (*v3)(void); // rax
  int v4; // eax
  unsigned int v5; // ebx

  v2 = *a1;
  v3 = (__int64 (*)(void))*((_QWORD *)*v2 + 34);
  if ( (char *)v3 == (char *)CServerAudioSessionControl::SetDuckingPreference )
    v4 = CServerAudioSessionControl::SetDuckingPreference(v2, a2);
  else
    v4 = v3();
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetDuckingPreference", 2449, v4);
  return v5;
}
