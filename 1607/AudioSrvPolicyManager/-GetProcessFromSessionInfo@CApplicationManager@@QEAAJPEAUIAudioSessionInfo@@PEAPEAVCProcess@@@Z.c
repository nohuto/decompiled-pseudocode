/*
 * XREFs of ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x180012670
 * Callers:
 *     ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180017E90 (-OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001F9EC (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180020248 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetProcessFromSessionInfo(
        CApplicationManager *this,
        struct IAudioSessionInfo *a2,
        struct CProcess **a3)
{
  struct IAudioSessionInfo *v4; // r9
  int v5; // ebx
  CApplicationManager *v6; // rcx
  __int64 v7; // r8
  CApplicationManager *v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  struct CProcess *v11; // [rsp+68h] [rbp+38h] BYREF

  v9 = this;
  v4 = a2;
  if ( a2 )
  {
    v5 = 0;
    if ( !a3 )
      v5 = -2147467261;
  }
  else
  {
    v5 = -2147024809;
  }
  v6 = 0LL;
  v9 = 0LL;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *, CApplicationManager **))(*(_QWORD *)a2 + 24LL))(a2, &v9);
    v6 = v9;
  }
  v7 = 0LL;
  v10 = 0LL;
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(CApplicationManager *, GUID *, __int64 *, struct IAudioSessionInfo *, __int64))v6)(
           v6,
           &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
           &v10,
           v4,
           -2LL);
    v6 = v9;
    v7 = v10;
  }
  v11 = 0LL;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct CProcess **))(*(_QWORD *)v7 + 24LL))(v7, &v11);
    v6 = v9;
    v7 = v10;
    if ( v5 >= 0 )
      *a3 = v11;
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = v9;
  }
  if ( v6 )
    (*(void (__fastcall **)(CApplicationManager *, struct IAudioSessionInfo *, __int64, struct IAudioSessionInfo *))(*(_QWORD *)v6 + 16LL))(
      v6,
      a2,
      v7,
      v4);
  return (unsigned int)v5;
}
