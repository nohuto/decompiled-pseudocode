/*
 * XREFs of AudioServerGetAudioSession @ 0x180031970
 * Callers:
 *     <none>
 * Callees:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180016210 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetAudioSession(CVADServer *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v4)(CVADServer *, struct IUnknown **); // rdi
  int AudioSession; // eax
  unsigned int v6; // ebx
  struct IUnknown *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall **)(CVADServer *, struct IUnknown **))(v2 + 32);
  if ( v4 == CVADServer::get_AudioSession )
    AudioSession = CVADServer::get_AudioSession(a1, &v8);
  else
    AudioSession = v4(a1, &v8);
  v6 = AudioSession;
  if ( !AudioSession )
    *a2 = v8;
  if ( AudioSession < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x55u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      AudioSession);
  }
  return v6;
}
