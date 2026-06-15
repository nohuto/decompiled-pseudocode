/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180078130
 * Callers:
 *     ?ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180078930 (-ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180024740 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180024F6C (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002545C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180070904 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@0@Z @ 0x1800723DC (-_Destroy@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceP.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180076E4C (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180078E68 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180079628 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  char v5; // r12
  int v6; // r15d
  CAudioSession *v7; // rcx
  void *v8; // rdi
  __int64 *i; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rsi
  const struct tWAVEFORMATEX *v14; // rsi
  const struct tWAVEFORMATEX *v15; // rax
  __int64 v16; // rsi
  void *v17; // rsi
  struct CEndpointCharacteristics *v18; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // eax
  int v20; // eax
  struct tWAVEFORMATEX *v21; // rsi
  struct CEndpointCharacteristics *v22; // r14
  int v23; // eax
  __int64 v24; // rax
  const struct tWAVEFORMATEX *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rsi
  void *v28; // rcx
  const void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  void *v32; // rbx
  __int64 v33; // rcx
  void (*v34)(void); // rax
  void *v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-70h] BYREF
  struct CEndpointCharacteristics *v40; // [rsp+98h] [rbp-68h] BYREF
  void *v41; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v43; // [rsp+B0h] [rbp-50h] BYREF
  void *v44[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-38h]
  struct tWAVEFORMATEX *v46; // [rsp+D0h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+D8h] [rbp-28h] BYREF
  struct _GUID v48; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v49; // [rsp+100h] [rbp+0h] BYREF
  char v50[16]; // [rsp+110h] [rbp+10h] BYREF
  char v51[16]; // [rsp+120h] [rbp+20h] BYREF
  char v52[16]; // [rsp+130h] [rbp+30h] BYREF
  char v53[16]; // [rsp+140h] [rbp+40h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v40 = 0LL;
  v3 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         &v40);
  v4 = 0LL;
  v36 = 0LL;
  if ( v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v36);
    v3 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
           g_DeviceGraphStore,
           a2,
           &v36);
    v4 = v36;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, a2);
    v4 = v36;
  }
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v4 + 88LL))(v4, lpCriticalSection);
    while ( 1 )
    {
      v5 = 1;
      *(_OWORD *)v44 = 0LL;
      v45 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v36 + 72LL))(v36, v44);
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x25u,
          (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
          ((char *)v44[1] - (char *)v44[0]) >> 3);
      }
      if ( v6 >= 0 )
        break;
LABEL_47:
      if ( v44[0] )
      {
        std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Destroy((__int64)v7, (__int64 *)v44[0], (__int64 *)v44[1]);
        std::_Deallocate((_QWORD *)v44[0], (signed __int64)(v45 - (unsigned __int64)v44[0]) >> 3, 8uLL);
      }
      if ( v6 < 0 || v5 )
      {
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        goto LABEL_53;
      }
    }
    v39 = 0LL;
    v8 = 0LL;
    v41 = 0LL;
    for ( i = (__int64 *)v44[0]; ; ++i )
    {
      if ( i == v44[1] )
      {
LABEL_46:
        CoTaskMemFree(v8);
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v39);
        goto LABEL_47;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
        && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i) )
        {
          v37 = 0LL;
          v38 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v36 + 80LL))(v36, *i, &v37) < 0 )
            goto LABEL_27;
          v11 = *(__int64 **)&v37.Data1;
          if ( (__int64)(*(_QWORD *)v37.Data4 - *(_QWORD *)&v37.Data1) >> 3 == 1 )
          {
            v35 = 0LL;
            if ( (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)*i + 104LL))(*i, &v35) >= 0 )
            {
              v12 = **(_QWORD **)&v37.Data1;
              v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
              if ( v13 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12)
                || (v14 = (const struct tWAVEFORMATEX *)*((_QWORD *)v35 + 3),
                    v15 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v37.Data1
                                                                                          + 40LL))(**(_QWORD **)&v37.Data1),
                    !(unsigned int)CompareWaveFormat(v15, v14)) )
              {
                v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                if ( GetTickCount64() - v16 >= 0x2700 )
                {
                  v5 = 0;
                  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v39, i);
                  v27 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i) + 16);
                  v6 = CTCoAllocPolicy::Alloc(v28, 1, v27 + 18, &v41);
                  v8 = v41;
                  if ( v6 >= 0 )
                  {
                    v29 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i);
                    memcpy_0(v8, v29, v27 + 18);
                  }
                  v31 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v37.Data1 + 24LL))(**(_QWORD **)&v37.Data1);
                  v32 = v35;
                  if ( v35 )
                  {
                    CoTaskMemFree(*((LPVOID *)v35 + 3));
                    *((_QWORD *)v32 + 3) = 0LL;
                    CoTaskMemFree(*((LPVOID *)v32 + 2));
                    *((_QWORD *)v32 + 2) = 0LL;
                    CoTaskMemFree(*(LPVOID *)v32);
                    *(_QWORD *)v32 = 0LL;
                    operator delete(v32, (const struct std::nothrow_t *)0x68);
                  }
                  v35 = 0LL;
                  if ( *(_QWORD *)&v37.Data1 )
                  {
                    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(
                      v30,
                      *(__int64 **)&v37.Data1,
                      *(__int64 **)v37.Data4);
                    std::_Deallocate(*(_QWORD **)&v37.Data1, (v38 - *(_QWORD *)&v37.Data1) >> 3, 8uLL);
                  }
                  goto LABEL_44;
                }
              }
            }
            v17 = v35;
            if ( v35 )
            {
              CoTaskMemFree(*((LPVOID *)v35 + 3));
              *((_QWORD *)v17 + 3) = 0LL;
              CoTaskMemFree(*((LPVOID *)v17 + 2));
              *((_QWORD *)v17 + 2) = 0LL;
              CoTaskMemFree(*(LPVOID *)v17);
              *(_QWORD *)v17 = 0LL;
              operator delete(v17, (const struct std::nothrow_t *)0x68);
            }
LABEL_27:
            v11 = *(__int64 **)&v37.Data1;
          }
          if ( v11 )
          {
            std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v10, v11, *(__int64 **)v37.Data4);
            std::_Deallocate(*(_QWORD **)&v37.Data1, (v38 - *(_QWORD *)&v37.Data1) >> 3, 8uLL);
          }
          continue;
        }
        LODWORD(v35) = 0;
        v46 = 0LL;
        v43 = 0LL;
        pv = 0LL;
        v48 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v50);
        v49 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v51);
        v37 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v52);
        v18 = v40;
        v19 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
        v20 = DeriveDeviceGraphFormatsForStream(
                v18,
                0,
                v19,
                AUDCLNT_SHAREMODE_SHARED,
                &v37,
                &v49,
                &v48,
                0LL,
                &v43,
                (struct tWAVEFORMATEX **)&pv,
                &v46);
        v21 = v46;
        if ( v20 >= 0 )
        {
          v37 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v53);
          v22 = v40;
          v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
          if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                      (__int64)v22,
                      v23,
                      v21,
                      &v37,
                      0,
                      &v35,
                      0LL,
                      0LL,
                      0LL) >= 0 )
          {
            v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
            if ( v24 != (int)((double)(int)v35 * 10000000.0 / (double)(int)v21->nSamplesPerSec + 0.5)
              || (v25 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v21, v25)) )
            {
              v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
              if ( GetTickCount64() - v26 >= 0x2700 )
              {
                v5 = 0;
                Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v39, i);
                CoTaskMemFree(0LL);
                v8 = v21;
                v41 = v21;
                v31 = (unsigned int)(int)((double)(int)v35 * 10000000.0 / (double)(int)v21->nSamplesPerSec + 0.5);
                CoTaskMemFree(pv);
                CoTaskMemFree(v43);
                CoTaskMemFree(0LL);
LABEL_44:
                if ( v39 )
                {
                  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v44);
                  v6 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v33, v40, v36, v8, v31, &v39);
                }
                goto LABEL_46;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v43);
        CoTaskMemFree(v21);
      }
    }
  }
LABEL_53:
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v36);
  if ( v40 )
  {
    v34 = *(void (**)(void))(*(_QWORD *)v40 + 16LL);
    if ( (char *)v34 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v40);
    else
      v34();
  }
}
