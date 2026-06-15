/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18006A060
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180069A40 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18006A060 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001A5D4 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18006A060 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x1800A83D8 (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rsi
  CEndpointCharacteristicsCache *v3; // rcx
  unsigned int i; // esi
  volatile int *v5; // rdx
  unsigned int (__fastcall *v6)(__int64, volatile int *); // rdi
  int AudioSessionManagerProvider; // eax
  struct _GUID *v8; // rdx
  struct CAudioSessionManagerProvider *v9; // rbx
  CAudioSessionManager *v10; // rdi
  __int64 (__fastcall *v11)(CAudioSessionManager *); // rsi
  __int64 (__fastcall *v12)(CAudioSessionManager *); // rsi
  __int64 (__fastcall *v13)(__int64, volatile int *); // rdi
  LPVOID pv; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+28h] [rbp-50h]
  unsigned int v16; // [rsp+2Ch] [rbp-4Ch] BYREF
  struct CAudioSessionManagerProvider *v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v18; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *String1; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v22[4]; // [rsp+58h] [rbp-20h] BYREF
  CAudioSessionManager *v25; // [rsp+B0h] [rbp+38h] BYREF
  int v26; // [rsp+B8h] [rbp+40h] BYREF

  v22[1] = -2LL;
  v2 = a2;
  v15 = 0;
  v22[0] = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  LODWORD(pv) = 0;
  v26 = 0;
  v16 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         v22) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v22[0] + 48LL))(v22[0], &v26) >= 0
    && v26 == 1 )
  {
    goto LABEL_22;
  }
  LOBYTE(v25) = 0;
  if ( GetAliasedEndpointId(v2, &v18, (int *)&pv) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v18,
         &v21) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 48LL))(v21, &v26) >= 0 )
  {
    LOBYTE(v25) = v26 == 1;
  }
  if ( (_DWORD)pv )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           2LL,
           14LL,
           &v19) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v16) < 0 )
    {
      goto LABEL_58;
    }
    for ( i = 0; i < v16; ++i )
    {
      v17 = 0LL;
      pv = 0LL;
      String1 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct CAudioSessionManagerProvider **))(*(_QWORD *)v19 + 32LL))(
             v19,
             i,
             &v17) >= 0
        && (*(int (__fastcall **)(struct CAudioSessionManagerProvider *, LPVOID *))(*(_QWORD *)v17 + 40LL))(v17, &pv) >= 0
        && GetAliasedEndpointId((const unsigned __int16 *)pv, &String1, 0LL) >= 0
        && !_wcsicmp(String1, a2) )
      {
        CAudioSrv::ProcessDeviceInternal(this, (const unsigned __int16 *)pv);
      }
      CoTaskMemFree(String1);
      String1 = 0LL;
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v2 = a2;
  }
  if ( (_BYTE)v25 )
  {
LABEL_22:
    v25 = 0LL;
    CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v3, v2, &v25);
    if ( v25 )
    {
      v6 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v25 + 16LL);
      if ( v6 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
          (__int64)v25,
          v5);
      else
        ((void (__fastcall *)(CAudioSessionManager *))v6)(v25);
    }
    goto LABEL_58;
  }
  v17 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v17);
  v8 = &WPP_GLOBAL_Control;
  v9 = v17;
  if ( AudioSessionManagerProvider < 0 )
  {
LABEL_49:
    if ( !v9 )
      goto LABEL_53;
    goto LABEL_50;
  }
  v25 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      54LL,
      &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      v2);
  }
  v15 = (*(__int64 (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v9 + 32LL))(
          v9,
          v2,
          &v25);
  if ( v15 < 0 )
  {
    v10 = v25;
    if ( v25 )
    {
      v11 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v25 + 16LL);
      goto LABEL_34;
    }
    goto LABEL_50;
  }
  v15 = CAudioSessionManager::Disconnect((__int64)v25, 0, 1);
  if ( v15 >= 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x37u,
        (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
        v25);
    }
    if ( v25 )
    {
      v12 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v25 + 16LL);
      if ( v12 == CAudioSessionManager::Release )
        CAudioSessionManager::Release(v25);
      else
        v12(v25);
    }
    goto LABEL_49;
  }
  v10 = v25;
  if ( v25 )
  {
    v11 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v25 + 16LL);
LABEL_34:
    if ( v11 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v10);
    else
      v11(v10);
  }
LABEL_50:
  v13 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v9 + 16LL);
  if ( v13 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
    ATL::CComObject<CAudioSessionManagerProvider>::Release((__int64)v9, (volatile int *)v8);
  else
    ((void (__fastcall *)(struct CAudioSessionManagerProvider *))v13)(v9);
LABEL_53:
  if ( v15 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x38u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      v15);
  }
LABEL_58:
  CoTaskMemFree(v18);
  v18 = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
}
