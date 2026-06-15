/*
 * XREFs of ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180092E00
 * Callers:
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180092768 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180004D54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002AF40 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180042510 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180091030 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_07193abe57ae9f87925f6a38d9da1073_@@@std@@YA?AV_lambda_07193abe57ae9f87925f6a38d9da1073_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800915C8 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_1493bc94177afcc1968c335a030ba490_@@@std@@YA?AV_lambda_1493bc94177afcc1968c335a030ba490_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180091668 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_180091668.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_4949fb3b75727052a4e52faab9c7ec1c_@@@std@@YA?AV_lambda_4949fb3b75727052a4e52faab9c7ec1c_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180091780 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_180091780.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice(
        __int64 a1,
        struct CEndpointCharacteristics *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 *v9; // r15
  int v10; // r14d
  __int64 v11; // rcx
  __int64 *v12; // rdx
  LPVOID *v13; // rbx
  __int64 v14; // rdi
  _DWORD *v15; // rsi
  struct tWAVEFORMATEX *v16; // rax
  int v17; // r15d
  int v18; // edi
  void *v19; // rbx
  struct _GUID v21; // [rsp+58h] [rbp-39h] BYREF
  struct SaDeviceParams *v22; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID v23; // [rsp+78h] [rbp-19h] BYREF
  __int64 v24; // [rsp+88h] [rbp-9h]
  struct _GUID *v25[2]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  _QWORD *v27; // [rsp+E8h] [rbp+57h] BYREF
  void *v28; // [rsp+F8h] [rbp+67h] BYREF

  v27 = (_QWORD *)a1;
  v24 = -2LL;
  v9 = a6;
  LODWORD(v27) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a6 + 168LL))(*a6);
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, struct _GUID **))(*(_QWORD *)a3 + 80LL))(a3, *v9, v25);
  v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x28u,
      (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      ((char *)v25[1] - (char *)v25[0]) >> 3);
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v12 = (__int64 *)v25[0];
  if ( ((char *)v25[1] - (char *)v25[0]) >> 3 )
  {
    v28 = 0LL;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*v9 + 104LL))(*v9, &v28);
      v12 = (__int64 *)v25[0];
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    v13 = 0LL;
    v22 = 0LL;
    if ( v10 >= 0 )
    {
      v14 = *v12;
      v15 = v28;
      v23 = (struct _GUID)*((_OWORD *)v28 + 4);
      v21 = (struct _GUID)*((_OWORD *)v28 + 3);
      v16 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
      v10 = DeriveSaDeviceParametersForStream(
              a2,
              AUDCLNT_SHAREMODE_SHARED,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v15[2],
              &v21,
              &v23,
              a4,
              v16,
              a5,
              &v22);
      if ( v10 >= 0 )
      {
        *(_QWORD *)&v21.Data1 = *v9;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v21);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_4949fb3b75727052a4e52faab9c7ec1c_>(
          (__int64 *)&v23,
          (__int64)v25[0],
          (__int64)v25[1],
          (__int64 *)&v21);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v23);
      }
      v13 = (LPVOID *)v22;
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v11 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v11 + 28) & 0x100) != 0
      && *(_BYTE *)(v11 + 25) >= 4u )
    {
      WPP_SF_(*(_QWORD *)(v11 + 16), 0x2Au, (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids);
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v9);
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    a6 = 0LL;
    if ( v10 < 0 )
    {
      v17 = (int)v27;
    }
    else
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&a6);
      v17 = (int)v27;
      v10 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, LPVOID *, __int64, _DWORD, _QWORD, _DWORD, __int64 **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              v13,
              2LL,
              0,
              0LL,
              (_DWORD)v27,
              &a6);
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v11 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v11 + 28) & 0x100) != 0
      && *(_BYTE *)(v11 + 25) >= 4u )
    {
      WPP_SF_D(*(_QWORD *)(v11 + 16), 0x2Bu, (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids, v10);
    }
    if ( v10 < 0 )
    {
      v27 = 0LL;
      v18 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, void *, __int64, _DWORD, _QWORD, int, _QWORD **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              v28,
              2LL,
              0,
              0LL,
              v17,
              &v27);
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x2Eu,
          (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
          v18);
      }
      if ( v18 >= 0 )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
          &v21,
          (__int64)v27);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_07193abe57ae9f87925f6a38d9da1073_>(
          &v23,
          (__int64)v25[0],
          (__int64)v25[1],
          (__int64 *)&v21);
        if ( *(_QWORD *)&v23.Data1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v23.Data1 + 16LL))(*(_QWORD *)&v23.Data1);
      }
      if ( v27 )
        (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
    }
    else
    {
      v27 = a6;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v27);
      std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_1493bc94177afcc1968c335a030ba490_>(
        (__int64 *)&v23,
        (__int64)v25[0],
        (__int64)v25[1],
        (__int64 *)&v27);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v23);
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x2Du,
          (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids);
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&a6);
    if ( v13 )
    {
      CoTaskMemFree(v13[3]);
      v13[3] = 0LL;
      CoTaskMemFree(v13[2]);
      v13[2] = 0LL;
      CoTaskMemFree(*v13);
      *v13 = 0LL;
      operator delete(v13);
    }
    v19 = v28;
    if ( v28 )
    {
      CoTaskMemFree(*((LPVOID *)v28 + 3));
      *((_QWORD *)v19 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v19 + 2));
      *((_QWORD *)v19 + 2) = 0LL;
      CoTaskMemFree(*(LPVOID *)v19);
      *(_QWORD *)v19 = 0LL;
      operator delete(v19);
    }
    v12 = (__int64 *)v25[0];
  }
  if ( v12 )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v11, v12, (__int64 *)v25[1]);
    operator delete(v25[0]);
  }
  return (unsigned int)v10;
}
