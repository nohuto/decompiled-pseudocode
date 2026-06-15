/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180068B9C
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800685A0 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180068B9C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800024FC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180005B00 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180068B9C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x1800A5DF0 (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rsi
  unsigned int i; // esi
  __int64 (__fastcall *v4)(volatile signed __int32 *); // rdi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v6; // rbx
  CAudioSessionManager *v7; // rdi
  __int64 (__fastcall *v8)(CAudioSessionManager *); // rsi
  __int64 (__fastcall *v9)(CAudioSessionManager *); // rsi
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rdi
  LPVOID pv; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+28h] [rbp-50h]
  unsigned int v13; // [rsp+2Ch] [rbp-4Ch] BYREF
  struct CAudioSessionManagerProvider *v14; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *String1; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v19[4]; // [rsp+58h] [rbp-20h] BYREF
  CAudioSessionManager *v22; // [rsp+B0h] [rbp+38h] BYREF
  int v23; // [rsp+B8h] [rbp+40h] BYREF

  v19[1] = -2LL;
  v2 = a2;
  v12 = 0;
  v19[0] = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  LODWORD(pv) = 0;
  v23 = 0;
  v13 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         v19) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v19[0] + 48LL))(v19[0], &v23) >= 0
    && v23 == 1 )
  {
    goto LABEL_22;
  }
  LOBYTE(v22) = 0;
  if ( GetAliasedEndpointId(v2, &v15, (int *)&pv) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v15,
         &v18) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v23) >= 0 )
  {
    LOBYTE(v22) = v23 == 1;
  }
  if ( (_DWORD)pv )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           2LL,
           14LL,
           &v16) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, &v13) < 0 )
    {
      goto LABEL_58;
    }
    for ( i = 0; i < v13; ++i )
    {
      v14 = 0LL;
      pv = 0LL;
      String1 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct CAudioSessionManagerProvider **))(*(_QWORD *)v16 + 32LL))(
             v16,
             i,
             &v14) >= 0
        && (*(int (__fastcall **)(struct CAudioSessionManagerProvider *, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &pv) >= 0
        && GetAliasedEndpointId((const unsigned __int16 *)pv, &String1, 0LL) >= 0
        && !_wcsicmp(String1, a2) )
      {
        CAudioSrv::ProcessDeviceInternal(this, (const unsigned __int16 *)pv);
      }
      CoTaskMemFree(String1);
      String1 = 0LL;
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v2 = a2;
  }
  if ( (_BYTE)v22 )
  {
LABEL_22:
    v22 = 0LL;
    CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
      (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
      v2,
      &v22);
    if ( v22 )
    {
      v4 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL);
      if ( v4 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v22);
      else
        v4((volatile signed __int32 *)v22);
    }
    goto LABEL_58;
  }
  v14 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v14);
  v6 = v14;
  if ( AudioSessionManagerProvider < 0 )
  {
LABEL_49:
    if ( !v6 )
      goto LABEL_53;
    goto LABEL_50;
  }
  v22 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v2);
  }
  v12 = (*(__int64 (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v6 + 32LL))(
          v6,
          v2,
          &v22);
  if ( v12 < 0 )
  {
    v7 = v22;
    if ( v22 )
    {
      v8 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v22 + 16LL);
      goto LABEL_34;
    }
    goto LABEL_50;
  }
  v12 = CAudioSessionManager::Disconnect((__int64)v22, 0, 1);
  if ( v12 >= 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x37u,
        (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
        (__int64)v22);
    }
    if ( v22 )
    {
      v9 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v22 + 16LL);
      if ( v9 == CAudioSessionManager::Release )
        CAudioSessionManager::Release(v22);
      else
        v9(v22);
    }
    goto LABEL_49;
  }
  v7 = v22;
  if ( v22 )
  {
    v8 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v22 + 16LL);
LABEL_34:
    if ( v8 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v7);
    else
      v8(v7);
  }
LABEL_50:
  v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL);
  if ( v10 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
    ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v6);
  else
    v10((volatile signed __int32 *)v6);
LABEL_53:
  if ( v12 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v12);
  }
LABEL_58:
  CoTaskMemFree(v15);
  v15 = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
}
