/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18006AD08
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18000182C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B6C0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002B750 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPolicyConfig::DisconnectHelper(struct IMMDevice *a1)
{
  int AudioSessionManagerProvider; // eax
  int *v3; // rbx
  __int64 (__fastcall *v4)(CAudioSessionManager *); // rax
  __int64 (__fastcall *v5)(int *); // rax
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF
  CAudioSessionManager *v7; // [rsp+60h] [rbp+30h] BYREF
  struct CAudioSessionManagerProvider *v8; // [rsp+68h] [rbp+38h] BYREF

  v8 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v8);
  v3 = (int *)v8;
  if ( AudioSessionManagerProvider >= 0 )
  {
    v7 = 0LL;
    pv = 0LL;
    if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv) >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x11u,
          (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
          (const wchar_t *)pv);
      }
      if ( !(*(unsigned int (__fastcall **)(int *, LPVOID, CAudioSessionManager **))(*(_QWORD *)v3 + 40LL))(v3, pv, &v7) )
        CAudioSessionManager::Disconnect((__int64)v7, 2u, 1);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v7 )
    {
      v4 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v7 + 16LL);
      if ( v4 == CAudioSessionManager::Release )
        CAudioSessionManager::Release(v7);
      else
        v4(v7);
    }
  }
  if ( v3 )
  {
    v5 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v3 + 16LL);
    if ( v5 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v3);
    else
      v5(v3);
  }
}
