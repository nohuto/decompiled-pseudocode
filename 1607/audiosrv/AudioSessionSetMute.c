/*
 * XREFs of AudioSessionSetMute @ 0x180029A50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z @ 0x18000EA60 (-SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionSetMute(CServerAudioSessionControl **a1, __int64 a2, const struct _GUID *a3)
{
  CServerAudioSessionControl *v3; // rcx
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *a1;
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 304LL);
  if ( (char *)v4 == (char *)CServerAudioSessionControl::SetMute )
    v5 = CServerAudioSessionControl::SetMute(v3, a2, a3);
  else
    v5 = v4();
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetMute", 2070, v5);
  return v6;
}
