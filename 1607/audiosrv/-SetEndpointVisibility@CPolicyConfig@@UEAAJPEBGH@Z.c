/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18006F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18000182C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B6C0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002B750 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibility(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  HRESULT v4; // edi
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int AudioSessionManagerProvider; // eax
  int *v9; // rbx
  __int64 (__fastcall *v10)(int *); // rax
  void (*v11)(void); // rax
  unsigned int v12; // [rsp+30h] [rbp-39h] BYREF
  CAudioSessionManager *v13; // [rsp+38h] [rbp-31h] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-21h] BYREF
  struct CAudioSessionManagerProvider *v16; // [rsp+50h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  unsigned int *v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]

  ppv = 0LL;
  v14 = 0LL;
  v12 = a3;
  if ( !a2 )
  {
    v4 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetEndpointVisibility", 3934, v4);
    goto LABEL_4;
  }
  if ( dword_1800CA040 > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    v21 = 0;
    v19 = &v12;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A81D8, v6, v7, 4u, &pData);
  }
  v4 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_cc08e979_3b54_451c_8ac3_ba2809744615,
         &ppv);
  if ( v4 < 0 )
    goto LABEL_3;
  v4 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v14);
  if ( v4 < 0 )
    goto LABEL_3;
  v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 56LL))(ppv, v14, v12);
  if ( v4 < 0 )
    goto LABEL_3;
  if ( !v12 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
        a2);
    }
    v13 = 0LL;
    v16 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v16);
    v9 = (int *)v16;
    if ( AudioSessionManagerProvider >= 0
      && !(*(unsigned int (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v16 + 40LL))(
            v16,
            a2,
            &v13) )
    {
      CAudioSessionManager::Disconnect((__int64)v13, 0, 1);
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
        (__int64)v13);
    }
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v9 + 16LL);
      if ( v10 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v9);
      else
        v10(v9);
    }
    if ( v13 )
    {
      v11 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
      if ( (char *)v11 == (char *)CAudioSessionManager::Release )
        CAudioSessionManager::Release(v13);
      else
        v11();
    }
  }
LABEL_4:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v4;
}
