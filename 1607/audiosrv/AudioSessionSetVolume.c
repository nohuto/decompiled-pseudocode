/*
 * XREFs of AudioSessionSetVolume @ 0x180029C90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x18000EAD0 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionSetVolume(CServerAudioSessionControl **a1, float a2, const struct _GUID *a3)
{
  CServerAudioSessionControl *v3; // rcx
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *a1;
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 288LL);
  if ( (char *)v4 == (char *)CServerAudioSessionControl::SetVolume )
    v5 = CServerAudioSessionControl::SetVolume(v3, a2, a3);
  else
    v5 = v4();
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetVolume", 2018, v5);
  return v6;
}
