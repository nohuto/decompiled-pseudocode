/*
 * XREFs of AudioServerGetAudioSession @ 0x180039280
 * Callers:
 *     <none>
 * Callees:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180024AB0 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetAudioSession(CVADServer *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v4)(CVADServer *, struct CServerAudioSessionControl **); // rdi
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
  if ( AudioSession < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      78LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)AudioSession);
  }
  return v6;
}
