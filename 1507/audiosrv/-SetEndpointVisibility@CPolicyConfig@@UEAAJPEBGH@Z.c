/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180088B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001A5D4 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibility(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  HRESULT v6; // esi
  int AudioSessionManagerProvider; // eax
  volatile int *v8; // rdx
  struct CAudioSessionManagerProvider *v9; // rbx
  __int64 (__fastcall *v10)(__int64, volatile int *); // rdi
  __int64 (__fastcall *v11)(CAudioSessionManager *); // rdi
  LPVOID ppv; // [rsp+30h] [rbp-10h] BYREF
  struct CAudioSessionManagerProvider *v14; // [rsp+38h] [rbp-8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF
  CAudioSessionManager *v16; // [rsp+88h] [rbp+48h] BYREF

  ppv = 0LL;
  v3 = 0LL;
  v15 = 0LL;
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
             &v15);
      if ( v6 >= 0 )
      {
        if ( !a3 )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_S(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x42u,
              (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
              a2);
          }
          v16 = 0LL;
          v14 = 0LL;
          AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v14);
          v9 = v14;
          if ( AudioSessionManagerProvider >= 0
            && !(*(unsigned int (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v14 + 40LL))(
                  v14,
                  a2,
                  &v16) )
          {
            CAudioSessionManager::Disconnect((__int64)v16, 0, 1);
          }
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x43u,
              (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
              v16);
          }
          if ( v9 )
          {
            v10 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v9 + 16LL);
            if ( v10 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
              ATL::CComObject<CAudioSessionManagerProvider>::Release((__int64)v9, v8);
            else
              ((void (__fastcall *)(struct CAudioSessionManagerProvider *))v10)(v9);
          }
          if ( v16 )
          {
            v11 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v16 + 16LL);
            if ( v11 == CAudioSessionManager::Release )
              CAudioSessionManager::Release(v16);
            else
              v11(v16);
          }
        }
        v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 56LL))(ppv, v15, a3);
        if ( v6 >= 0 )
          goto LABEL_31;
      }
    }
    v3 = v15;
  }
  else
  {
    v6 = -2147467261;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x44u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v6);
LABEL_31:
    v3 = v15;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v6;
}
