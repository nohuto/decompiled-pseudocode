/*
 * XREFs of ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180090028
 * Callers:
 *     ?ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008FB80 (-ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAX.c)
 * Callees:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180012E10 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180038B98 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180087164 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008B80C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x18008E940 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 *     ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800906D0 (-SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointChar.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180090EC0 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CAudioResourceManager::RevertToSaDevicesWithDefaultSettings(
        CAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  int AliasedEndpointCharacteristics; // edi
  __int64 v4; // rbx
  struct CEndpointCharacteristics *v5; // rsi
  char v6; // r13
  int v7; // r12d
  TraceLoggingHProvider v8; // rcx
  struct tWAVEFORMATEX *v9; // rdi
  __int64 *i; // rbx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  const struct tWAVEFORMATEX *v15; // rax
  __int64 v16; // r14
  __int64 (__fastcall *v17)(volatile signed __int32 *); // rbx
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v19[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *v21; // [rsp+80h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-80h] BYREF
  void *v23[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-68h]
  struct tWAVEFORMATEX *v25; // [rsp+A8h] [rbp-60h] BYREF
  CEndpointCharacteristics *v26; // [rsp+B0h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct _GUID v28; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-30h]
  struct _GUID v30; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v31; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v32[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v33[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v34[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v35[16]; // [rsp+138h] [rbp+30h] BYREF

  v29 = -2LL;
  v26 = 0LL;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                     a2,
                                     &v26);
  v4 = 0LL;
  v18 = 0LL;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v18);
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                       g_DeviceGraphStore,
                                       a2,
                                       &v18);
    v4 = v18;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, a2);
    v4 = v18;
  }
  v5 = v26;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v4 + 88LL))(v4, lpCriticalSection);
    do
    {
      v6 = 1;
      *(_OWORD *)v23 = 0LL;
      v24 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v18 + 72LL))(v18, v23);
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Cu,
          (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
          ((char *)v23[1] - (char *)v23[0]) >> 3);
      }
      if ( v7 >= 0 )
      {
        v9 = 0LL;
        v25 = 0LL;
        v19[0] = 0;
        v20 = 0LL;
        for ( i = (__int64 *)v23[0]; i != v23[1]; ++i )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i)
            && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
          {
            v21 = 0LL;
            pv = 0LL;
            v31 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v35);
            v30 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v32);
            v28 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v34);
            v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
            v12 = DeriveDeviceGraphFormatsForStream(
                    v5,
                    0,
                    (struct _GUID *)v11,
                    AUDCLNT_SHAREMODE_SHARED,
                    &v28,
                    &v30,
                    &v31,
                    0LL,
                    &v21,
                    (struct tWAVEFORMATEX **)&pv,
                    &v25);
            v9 = v25;
            if ( v12 >= 0 )
            {
              v28 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v33);
              v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
              if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, v13, v9, &v28, v19, 0LL, 0LL, 0LL) >= 0 )
              {
                v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
                if ( v14 != (int)((double)(int)v19[0] * 10000000.0 / (double)(int)v9->nSamplesPerSec + 0.5)
                  || (v15 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                      !(unsigned int)CompareWaveFormat(v9, v15)) )
                {
                  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 160LL))(*i);
                  if ( GetTickCount64() - v16 >= 0x2700 )
                  {
                    v6 = 0;
                    Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v20, i);
                    CoTaskMemFree(pv);
                    CoTaskMemFree(v21);
                    if ( v20 )
                    {
                      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v23);
                      v7 = CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice(
                             &v20,
                             v5,
                             v18,
                             v9,
                             (unsigned int)(int)((double)(int)v19[0] * 10000000.0 / (double)(int)v9->nSamplesPerSec + 0.5),
                             &v20);
                    }
                    break;
                  }
                }
              }
            }
            CoTaskMemFree(pv);
            CoTaskMemFree(v21);
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
        CoTaskMemFree(v9);
      }
      if ( v23[0] )
      {
        std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(
          (__int64)v8,
          (__int64 *)v23[0],
          (__int64 *)v23[1]);
        operator delete(v23[0]);
      }
    }
    while ( v7 >= 0 && !v6 );
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
  }
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v18);
  if ( v5 )
  {
    v17 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL);
    if ( v17 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
    else
      v17((volatile signed __int32 *)v5);
  }
}
