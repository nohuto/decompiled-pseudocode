/*
 * XREFs of ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x18001B3C0
 * Callers:
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001B184 (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002BF00 (-OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002C604 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180010BA0 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetImplementation@CProcess@@UEAAJPEAPEAV1@@Z @ 0x1800110F0 (-GetImplementation@CProcess@@UEAAJPEAPEAV1@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetProcessFromSessionInfo(
        CApplicationManager *this,
        struct IAudioSessionInfo *a2,
        struct CProcess **a3)
{
  int v4; // edi
  __int64 (__fastcall *v5)(CAudioSession *, struct IAudioProcess **); // rdi
  int Process; // eax
  CProcess *v7; // rbx
  __int64 (__fastcall *v8)(CProcess *, struct CProcess **); // rdi
  int v9; // eax
  CApplicationManager *v11; // [rsp+50h] [rbp+8h] BYREF
  struct IAudioProcess *v12; // [rsp+58h] [rbp+10h] BYREF
  struct CProcess *v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = this;
  v4 = 0;
  if ( a2 )
  {
    if ( !a3 )
      v4 = -2147467261;
  }
  else
  {
    v4 = -2147024809;
  }
  v12 = 0LL;
  if ( v4 >= 0 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(*(_QWORD *)a2 + 24LL);
    if ( v5 == CAudioSession::GetProcess )
      Process = CAudioSession::GetProcess(a2, &v12);
    else
      Process = v5(a2, &v12);
    v4 = Process;
  }
  v7 = 0LL;
  v11 = 0LL;
  if ( v4 >= 0 )
  {
    v4 = (**(__int64 (__fastcall ***)(struct IAudioProcess *, GUID *, CApplicationManager **))v12)(
           v12,
           &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
           &v11);
    v7 = v11;
  }
  v13 = 0LL;
  if ( v4 >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(CProcess *, struct CProcess **))(*(_QWORD *)v7 + 24LL);
    v9 = v8 == CProcess::GetImplementation ? CProcess::GetImplementation(v7, &v13) : v8(v7, &v13);
    v4 = v9;
    v7 = v11;
    if ( v9 >= 0 )
      *a3 = v13;
  }
  if ( v7 )
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v12 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v4;
}
