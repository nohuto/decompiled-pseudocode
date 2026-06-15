/*
 * XREFs of ?RetryGetSaDeviceForExclusive@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BC88
 * Callers:
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 *     ?RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BE3C (-RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001A5D4 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qqP @ 0x18008DC3C (WPP_SF_qqP.c)
 */

__int64 __fastcall CVADServer::RetryGetSaDeviceForExclusive(
        CVADServer *this,
        const unsigned __int16 *a2,
        __int64 a3,
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
  unsigned int v13; // r12d
  __int64 v16; // rdi
  int v17; // ebx
  __int64 v18; // rax
  __int64 v21; // [rsp+28h] [rbp-80h]
  struct IAudioDeviceGraph *v22; // [rsp+50h] [rbp-58h] BYREF
  __int128 v23; // [rsp+60h] [rbp-48h] BYREF
  __int128 v24; // [rsp+70h] [rbp-38h] BYREF

  v22 = 0LL;
  v13 = a3;
  v16 = 5LL;
  do
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qqP(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), a2, a3, this, a6, v16);
    }
    v17 = CAudioSessionManager::Disconnect((__int64)a6, 5u, 1);
    if ( v17 < 0 )
      continue;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x51u,
        (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        this);
    }
    v23 = (__int128)*a10;
    v18 = *(_QWORD *)a7;
    v24 = (__int128)*a9;
    LODWORD(v21) = a8;
    v17 = (*(__int64 (__fastcall **)(struct ISaProvider *, const unsigned __int16 *, _QWORD, _QWORD, const struct tWAVEFORMATEX *, __int64, __int128 *, __int128 *, unsigned int, struct IAudioDeviceGraph **))(v18 + 24))(
            a7,
            a2,
            v13,
            a4,
            a5,
            v21,
            &v24,
            &v23,
            a11,
            &v22);
    if ( v17 >= 0 )
      break;
    Sleep(0xAu);
  }
  while ( v16-- );
  *a12 = v22;
  return (unsigned int)v17;
}
