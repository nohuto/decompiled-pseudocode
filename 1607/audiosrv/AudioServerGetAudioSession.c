/*
 * XREFs of AudioServerGetAudioSession @ 0x180028F80
 * Callers:
 *     <none>
 * Callees:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x18000BED0 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAudioSession(CVADServer *a1, struct CServerAudioSessionControl **a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v4)(CVADServer *, struct CServerAudioSessionControl **); // rax
  int AudioSession; // eax
  unsigned int v6; // ebx
  struct CServerAudioSessionControl *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall **)(CVADServer *, struct CServerAudioSessionControl **))(v2 + 32);
  if ( v4 == CVADServer::get_AudioSession )
    AudioSession = CVADServer::get_AudioSession(a1, &v8);
  else
    AudioSession = v4(a1, &v8);
  v6 = AudioSession;
  if ( !AudioSession )
    *a2 = v8;
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 2861, AudioSession);
  return v6;
}
