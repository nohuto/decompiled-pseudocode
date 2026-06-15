/*
 * XREFs of ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180092768
 * Callers:
 *     ?ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800922C0 (-ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAX.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030F90 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180066460 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180089DE4 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008ECDC (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180091030 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 *     ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180092E00 (-SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointChar.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180093630 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
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
  __int64 v8; // rcx
  struct tWAVEFORMATEX *v9; // rdi
  __int64 *i; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // eax
  int v12; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // eax
  __int64 v14; // rax
  const struct tWAVEFORMATEX *v15; // rax
  __int64 v16; // r14
  volatile int *v17; // rdx
  unsigned int (__fastcall *v18)(__int64, volatile int *); // rbx
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v20[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *v22; // [rsp+80h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-80h] BYREF
  void *v24[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-68h]
  struct tWAVEFORMATEX *v26; // [rsp+A8h] [rbp-60h] BYREF
  CEndpointCharacteristics *v27; // [rsp+B0h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct _GUID v29; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-30h]
  struct _GUID v31; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v32; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v33[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v34[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v35[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v36[16]; // [rsp+138h] [rbp+30h] BYREF

  v30 = -2LL;
  v27 = 0LL;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(this, a2, &v27);
  v4 = 0LL;
  v19 = 0LL;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v19);
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                       g_DeviceGraphStore,
                                       a2,
                                       &v19);
    v4 = v19;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x26u,
      (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      a2);
    v4 = v19;
  }
  v5 = v27;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v4 + 88LL))(v4, lpCriticalSection);
    do
    {
      v6 = 1;
      *(_OWORD *)v24 = 0LL;
      v25 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v19 + 72LL))(v19, v24);
      v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x27u,
          (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
          ((char *)v24[1] - (char *)v24[0]) >> 3);
      }
      if ( v7 >= 0 )
      {
        v9 = 0LL;
        v26 = 0LL;
        v20[0] = 0;
        v21 = 0LL;
        for ( i = (__int64 *)v24[0]; i != v24[1]; ++i )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i)
            && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
          {
            v22 = 0LL;
            pv = 0LL;
            v32 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v36);
            v31 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v33);
            v29 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v35);
            v11 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
            v12 = DeriveDeviceGraphFormatsForStream(
                    v5,
                    0,
                    v11,
                    AUDCLNT_SHAREMODE_SHARED,
                    &v29,
                    &v31,
                    &v32,
                    0LL,
                    &v22,
                    (struct tWAVEFORMATEX **)&pv,
                    &v26);
            v9 = v26;
            if ( v12 >= 0 )
            {
              v29 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v34);
              v13 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
              if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, v13, v9, &v29, v20, 0LL, 0LL, 0LL) >= 0 )
              {
                v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
                if ( v14 != (int)((double)(int)v20[0] * 10000000.0 / (double)(int)v9->nSamplesPerSec + 0.5)
                  || (v15 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                      !(unsigned int)CompareWaveFormat(v9, v15)) )
                {
                  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 160LL))(*i);
                  if ( (unsigned __int64)GetTickCount() - v16 >= 0x2700 )
                  {
                    v6 = 0;
                    Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v21, i);
                    CoTaskMemFree(pv);
                    CoTaskMemFree(v22);
                    if ( v21 )
                    {
                      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v24);
                      v7 = CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice(
                             &v21,
                             v5,
                             v19,
                             v9,
                             (unsigned int)(int)((double)(int)v20[0] * 10000000.0 / (double)(int)v9->nSamplesPerSec + 0.5),
                             &v21);
                    }
                    break;
                  }
                }
              }
            }
            CoTaskMemFree(pv);
            CoTaskMemFree(v22);
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v21);
        CoTaskMemFree(v9);
      }
      if ( v24[0] )
      {
        std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v8, (__int64 *)v24[0], (__int64 *)v24[1]);
        operator delete(v24[0]);
      }
    }
    while ( v7 >= 0 && !v6 );
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
  }
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v19);
  if ( v5 )
  {
    v18 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v5 + 16LL);
    if ( v18 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v5,
        v17);
    else
      ((void (__fastcall *)(struct CEndpointCharacteristics *))v18)(v5);
  }
}
