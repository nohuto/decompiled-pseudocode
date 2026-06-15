/*
 * XREFs of ?RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BE3C
 * Callers:
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180004450 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x18007F48C (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BC88 (-RetryGetSaDeviceForExclusive@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEA.c)
 */

__int64 __fastcall CVADServer::RetryGetSaDeviceForPackagedApp(
        CVADServer *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        const struct tWAVEFORMATEX *a5,
        struct CAudioSessionManager *a6,
        struct ISaProvider *a7,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a8,
        struct _GUID *a9,
        struct _GUID *a10,
        unsigned int a11,
        struct IAudioDeviceGraph **a12)
{
  unsigned int SaDeviceForExclusive; // edi
  int ExclusiveModeAudioSession; // eax
  _QWORD *v18; // r14
  struct IAudioProcess *Process; // rsi
  __int64 v20; // rax
  struct IAudioDeviceGraph *v22[2]; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID v23; // [rsp+78h] [rbp-19h] BYREF
  struct _GUID v24; // [rsp+88h] [rbp-9h] BYREF

  *(_QWORD *)&v23.Data1 = 0LL;
  v22[0] = 0LL;
  SaDeviceForExclusive = -2005139389;
  ExclusiveModeAudioSession = CAudioSessionManager::FindExclusiveModeAudioSession(a6, (struct CAudioSession **)&v23);
  v18 = *(_QWORD **)&v23.Data1;
  if ( ExclusiveModeAudioSession < 0 )
  {
    if ( a3 == 1 )
    {
      v24 = *a10;
      v23 = *a9;
      SaDeviceForExclusive = CVADServer::RetryGetSaDeviceForExclusive(
                               this,
                               a2,
                               1LL,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               &v23,
                               &v24,
                               a11,
                               v22);
    }
  }
  else
  {
    Process = CAudioSession::GetProcess(*(CAudioSession **)&v23.Data1);
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 88LL))(Process)
      && !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 96LL))(Process) )
    {
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 152LL))(Process);
      (*(void (__fastcall **)(_QWORD *, __int64))(v18[2] + 40LL))(v18 + 2, 0xFFFFFFFFLL);
      v23 = *a10;
      v20 = *(_QWORD *)a7;
      v24 = *a9;
      SaDeviceForExclusive = (*(__int64 (__fastcall **)(struct ISaProvider *, const unsigned __int16 *, _QWORD, _QWORD, const struct tWAVEFORMATEX *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct _GUID *, struct _GUID *, unsigned int, struct IAudioDeviceGraph **))(v20 + 24))(
                               a7,
                               a2,
                               a3,
                               a4,
                               a5,
                               a8,
                               &v24,
                               &v23,
                               a11,
                               v22);
    }
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 16LL))(Process);
  }
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  *a12 = v22[0];
  return SaDeviceForExclusive;
}
