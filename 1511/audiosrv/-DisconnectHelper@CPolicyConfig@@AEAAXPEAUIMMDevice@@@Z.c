/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z @ 0x180082048
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800024FC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180005B00 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPolicyConfig::DisconnectHelper(CPolicyConfig *this, struct IMMDevice *a2)
{
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v4; // rbx
  __int64 (__fastcall *v5)(CAudioSessionManager *); // rsi
  __int64 (__fastcall *v6)(volatile signed __int32 *); // rdi
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  CAudioSessionManager *v8; // [rsp+60h] [rbp+30h] BYREF
  struct CAudioSessionManagerProvider *v9; // [rsp+68h] [rbp+38h] BYREF

  pv = this;
  v9 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v9);
  v4 = v9;
  if ( AudioSessionManagerProvider >= 0 )
  {
    v8 = 0LL;
    pv = 0LL;
    if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv) >= 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x28u,
          (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
          (const wchar_t *)pv);
      }
      if ( !(*(unsigned int (__fastcall **)(struct CAudioSessionManagerProvider *, LPVOID, CAudioSessionManager **))(*(_QWORD *)v4 + 40LL))(
              v4,
              pv,
              &v8) )
        CAudioSessionManager::Disconnect((__int64)v8, 2u, 1);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v8 )
    {
      v5 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v8 + 16LL);
      if ( v5 == CAudioSessionManager::Release )
        CAudioSessionManager::Release(v8);
      else
        v5(v8);
    }
  }
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v6 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v4);
    else
      v6((volatile signed __int32 *)v4);
  }
}
