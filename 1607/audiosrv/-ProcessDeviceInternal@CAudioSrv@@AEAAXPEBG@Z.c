/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180052F70
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180052AF0 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180052F70 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18000182C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
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
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180052F70 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x180088944 (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  CAudioSrv *v5; // rsi
  void (*v6)(void); // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int AudioSessionManagerProvider; // eax
  int *v10; // rbx
  CAudioSessionManager *v11; // rcx
  void (*v12)(void); // rax
  void (*v13)(void); // rax
  bool v14; // [rsp+38h] [rbp-59h]
  struct CAudioSessionManagerProvider *v15; // [rsp+40h] [rbp-51h] BYREF
  int v16; // [rsp+48h] [rbp-49h] BYREF
  LPCWSTR pwsz; // [rsp+50h] [rbp-41h] BYREF
  CAudioSessionManager *v18; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-29h] BYREF
  unsigned __int16 *v21; // [rsp+70h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v24[2]; // [rsp+88h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp+27h] BYREF

  v24[1] = -2LL;
  v15 = this;
  v3 = 0;
  v4 = 0;
  LODWORD(v18) = 0;
  v24[0] = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  LODWORD(pwsz) = 0;
  v16 = 0;
  v19 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         v24) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v24[0] + 48LL))(v24[0], &v16) >= 0
    && v16 == 1 )
  {
    goto LABEL_23;
  }
  v14 = 0;
  if ( GetAliasedEndpointId(a2, &v21, (int *)&pwsz) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v21,
         &v23) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 48LL))(v23, &v16) >= 0 )
  {
    v14 = v16 == 1;
  }
  if ( (_DWORD)pwsz )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           2LL,
           14LL,
           &v22) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v19) < 0 )
    {
      goto LABEL_58;
    }
    if ( v19 )
    {
      v5 = v15;
      do
      {
        v15 = 0LL;
        pwsz = 0LL;
        pv = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, struct CAudioSessionManagerProvider **))(*(_QWORD *)v22 + 32LL))(
               v22,
               v3,
               &v15) >= 0
          && (*(int (__fastcall **)(struct CAudioSessionManagerProvider *, LPCWSTR *))(*(_QWORD *)v15 + 40LL))(
               v15,
               &pwsz) >= 0
          && GetAliasedEndpointId(pwsz, (unsigned __int16 **)&pv, 0LL) >= 0
          && !(unsigned int)_o__wcsicmp(pv, a2) )
        {
          CAudioSrv::ProcessDeviceInternal(v5, pwsz);
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        CoTaskMemFree((LPVOID)pwsz);
        pwsz = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v15 + 16LL))(v15);
        ++v3;
      }
      while ( v3 < v19 );
      v4 = (int)v18;
    }
  }
  if ( v14 )
  {
LABEL_23:
    v15 = 0LL;
    (*(void (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, struct CAudioSessionManagerProvider **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
      g_pEndpointCharacteristicsCache,
      a2,
      &v15);
    if ( v15 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v15);
      else
        v6();
    }
    goto LABEL_58;
  }
  if ( dword_1800CA040 > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A7D04, v7, v8, 3u, &pData);
  }
  v15 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v15);
  v10 = (int *)v15;
  if ( AudioSessionManagerProvider < 0 )
  {
LABEL_52:
    if ( !v10 )
      goto LABEL_56;
    goto LABEL_53;
  }
  v18 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, a2);
  }
  v4 = (*(__int64 (__fastcall **)(int *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v10 + 32LL))(
         v10,
         a2,
         &v18);
  if ( v4 < 0 )
  {
    v11 = v18;
    if ( v18 )
    {
      v12 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
      goto LABEL_37;
    }
    goto LABEL_53;
  }
  v4 = CAudioSessionManager::Disconnect((__int64)v18, 0, 1);
  if ( v4 >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        (__int64)&WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids,
        (__int64)v18);
    }
    if ( v18 )
    {
      v13 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
      if ( (char *)v13 == (char *)CAudioSessionManager::Release )
        CAudioSessionManager::Release(v18);
      else
        v13();
    }
    goto LABEL_52;
  }
  v11 = v18;
  if ( v18 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
LABEL_37:
    if ( (char *)v12 == (char *)CAudioSessionManager::Release )
      CAudioSessionManager::Release(v11);
    else
      v12();
  }
LABEL_53:
  if ( *(__int64 (__fastcall **)(int *))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
    ATL::CComObject<CAudioSessionManagerProvider>::Release(v10);
  else
    (*(void (__fastcall **)(int *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_56:
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessDeviceInternal", 1870, v4);
LABEL_58:
  CoTaskMemFree(v21);
  v21 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
}
