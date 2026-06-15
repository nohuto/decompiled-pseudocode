/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180078E68
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180078130 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001D78 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x1800257B8 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800342A0 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180076E4C (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_940937c22359e6b81aa86f3db89c0704_@@@std@@YA?AV_lambda_940937c22359e6b81aa86f3db89c0704_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180077730 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_180077730.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@@std@@YA?AV_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180077884 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_180077884.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_f2963b5c83cb5d3ebda59818f6b56d22_@@@std@@YA?AV_lambda_f2963b5c83cb5d3ebda59818f6b56d22_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800778FC (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_1800778FC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct CEndpointCharacteristics *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        __int64 a5,
        void *a6)
{
  __int64 *v9; // rsi
  int v10; // r12d
  int v11; // edi
  CAudioSession *v12; // rcx
  __int64 *v13; // rdx
  LPVOID *v14; // rbx
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  struct tWAVEFORMATEX *v17; // rax
  int v18; // esi
  void *v19; // rbx
  struct SaDeviceParams *v21; // [rsp+58h] [rbp-39h] BYREF
  struct _GUID v22; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID v23; // [rsp+78h] [rbp-19h] BYREF
  __int64 v24; // [rsp+88h] [rbp-9h]
  void *v25[2]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  __int64 v27; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+67h] BYREF

  v27 = a1;
  v24 = -2LL;
  v9 = (__int64 *)a6;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a6 + 184LL))(*(_QWORD *)a6);
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a3 + 80LL))(a3, *v9, v25);
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x26u,
      (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
      ((char *)v25[1] - (char *)v25[0]) >> 3);
    v12 = WPP_GLOBAL_Control;
  }
  v13 = (__int64 *)v25[0];
  if ( ((char *)v25[1] - (char *)v25[0]) >> 3 )
  {
    a6 = 0LL;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*v9 + 104LL))(*v9, &a6);
      v13 = (__int64 *)v25[0];
      v12 = WPP_GLOBAL_Control;
    }
    v14 = 0LL;
    v21 = 0LL;
    if ( v11 >= 0 )
    {
      v15 = *v13;
      v16 = a6;
      v23 = (struct _GUID)*((_OWORD *)a6 + 4);
      v22 = (struct _GUID)*((_OWORD *)a6 + 3);
      v17 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
      v11 = DeriveSaDeviceParametersForStream(
              a2,
              AUDCLNT_SHAREMODE_SHARED,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v16[2],
              0,
              &v22,
              &v23,
              a4,
              v17,
              a5,
              &v21);
      if ( v11 >= 0 )
      {
        v28 = *v9;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v28);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_940937c22359e6b81aa86f3db89c0704_>(
          (__int64 *)&v22,
          (_QWORD *)v25[0],
          (_QWORD *)v25[1],
          &v28);
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease((__int64 *)&v22);
      }
      v12 = WPP_GLOBAL_Control;
      v14 = (LPVOID *)v21;
    }
    if ( v12 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v12 + 7) & 0x100) != 0
      && *((_BYTE *)v12 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v12 + 2), 0x28u, (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids);
      v12 = WPP_GLOBAL_Control;
    }
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(v9);
      v12 = WPP_GLOBAL_Control;
    }
    v27 = 0LL;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v27);
      v11 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, LPVOID *, __int64, _DWORD, _QWORD, int, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              v14,
              2LL,
              0,
              0LL,
              v10,
              &v27);
      v12 = WPP_GLOBAL_Control;
    }
    if ( v12 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v12 + 7) & 0x100) != 0
      && *((_BYTE *)v12 + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)v12 + 2), 0x29u, (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, v11);
    }
    if ( v11 < 0 )
    {
      v28 = 0LL;
      v18 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, void *, __int64, _DWORD, _QWORD, int, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              a6,
              2LL,
              0,
              0LL,
              v10,
              &v28);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Cu,
          (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
          v18);
      }
      if ( v18 >= 0 )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v22, v28);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_d964c332b7dd59d7dbb035aa7db56ce6_>(
          &v23,
          (_QWORD *)v25[0],
          (_QWORD *)v25[1],
          (__int64 *)&v22);
        if ( *(_QWORD *)&v23.Data1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v23.Data1 + 16LL))(*(_QWORD *)&v23.Data1);
      }
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    else
    {
      v28 = v27;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v28);
      std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_f2963b5c83cb5d3ebda59818f6b56d22_>(
        (__int64 *)&v22,
        (__int64)v25[0],
        (__int64)v25[1],
        &v28);
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease((__int64 *)&v22);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids);
      }
    }
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v27);
    if ( v14 )
    {
      CoTaskMemFree(v14[3]);
      v14[3] = 0LL;
      CoTaskMemFree(v14[2]);
      v14[2] = 0LL;
      CoTaskMemFree(*v14);
      *v14 = 0LL;
      operator delete(v14, (const struct std::nothrow_t *)0x68);
    }
    v19 = a6;
    if ( a6 )
    {
      CoTaskMemFree(*((LPVOID *)a6 + 3));
      *((_QWORD *)v19 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v19 + 2));
      *((_QWORD *)v19 + 2) = 0LL;
      CoTaskMemFree(*(LPVOID *)v19);
      *(_QWORD *)v19 = 0LL;
      operator delete(v19, (const struct std::nothrow_t *)0x68);
    }
    v13 = (__int64 *)v25[0];
  }
  if ( v13 )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy((__int64)v12, v13, (__int64 *)v25[1]);
    std::_Deallocate((_QWORD *)v25[0], (signed __int64)(v26 - (unsigned __int64)v25[0]) >> 3, 8uLL);
  }
  return (unsigned int)v11;
}
