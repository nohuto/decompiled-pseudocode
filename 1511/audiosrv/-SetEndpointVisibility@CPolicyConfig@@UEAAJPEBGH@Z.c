/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180085620
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800024FC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180005B00 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibility(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  HRESULT v6; // esi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v8; // rbx
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rdi
  __int64 (__fastcall *v10)(CAudioSessionManager *); // rdi
  LPVOID ppv; // [rsp+30h] [rbp-10h] BYREF
  struct CAudioSessionManagerProvider *v13; // [rsp+38h] [rbp-8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  CAudioSessionManager *v15; // [rsp+88h] [rbp+48h] BYREF

  ppv = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v6 = CoCreateInstance(
           &GUID_06cca63e_9941_441b_b004_39f999ada412,
           0LL,
           0x17u,
           &GUID_8079001f_4cbb_4eb9_85df_a7e5eb250e7d,
           &ppv);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                  + 40LL))(
             *(_QWORD *)&g_DeviceEnumerator,
             a2,
             &v14);
      if ( v6 >= 0 )
      {
        if ( !a3 )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x41u,
              (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
              a2);
          }
          v15 = 0LL;
          v13 = 0LL;
          AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v13);
          v8 = v13;
          if ( AudioSessionManagerProvider >= 0
            && !(*(unsigned int (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v13 + 40LL))(
                  v13,
                  a2,
                  &v15) )
          {
            CAudioSessionManager::Disconnect((__int64)v15, 0, 1);
          }
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x42u,
              (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
              (__int64)v15);
          }
          if ( v8 )
          {
            v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL);
            if ( v9 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
              ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v8);
            else
              v9((volatile signed __int32 *)v8);
          }
          if ( v15 )
          {
            v10 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v15 + 16LL);
            if ( v10 == CAudioSessionManager::Release )
              CAudioSessionManager::Release(v15);
            else
              v10(v15);
          }
        }
        v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 56LL))(ppv, v14, a3);
        if ( v6 >= 0 )
          goto LABEL_31;
      }
    }
    v3 = v14;
  }
  else
  {
    v6 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x43u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v6);
LABEL_31:
    v3 = v14;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v6;
}
