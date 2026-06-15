/*
 * XREFs of ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800906D0
 * Callers:
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180090028 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001AC4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E5B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180037F60 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??1?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ @ 0x180039564 (--1-$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18003F6EC (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180087128 (--1-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamGroupPr.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_0a5ec0379b5292e6ae8299465eb2d31a_@@@std@@YA?AV_lambda_0a5ec0379b5292e6ae8299465eb2d31a_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008EE88 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_5e8dce2c070e4f08923b16093ddb4e17_@@@std@@YA?AV_lambda_5e8dce2c070e4f08923b16093ddb4e17_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008EF9C (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18008EF9C.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_d23c2bba33b47e6fe2bdf8624c4c437d_@@@std@@YA?AV_lambda_d23c2bba33b47e6fe2bdf8624c4c437d_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008F0B0 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18008F0B0.c)
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
  TraceLoggingHProvider v11; // rcx
  __int64 *v12; // rdi
  LPVOID *v13; // rbx
  __int64 v14; // rdi
  _DWORD *v15; // rsi
  struct tWAVEFORMATEX *Src; // rax
  int v17; // r15d
  int v18; // edi
  LPVOID *v19; // rbx
  struct _GUID v21; // [rsp+58h] [rbp-39h] BYREF
  struct SaDeviceParams *v22; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID v23; // [rsp+78h] [rbp-19h] BYREF
  __int64 v24; // [rsp+88h] [rbp-9h]
  __int128 v25; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  _QWORD *v27; // [rsp+E8h] [rbp+57h] BYREF
  void *v28; // [rsp+F8h] [rbp+67h] BYREF

  v27 = (_QWORD *)a1;
  v24 = -2LL;
  v9 = a6;
  LODWORD(v27) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a6 + 168LL))(*a6);
  v25 = 0LL;
  v26 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 80LL))(a3, *v9, &v25);
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
      (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 3);
    v11 = WPP_GLOBAL_Control;
  }
  v12 = (__int64 *)v25;
  if ( (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 3 )
  {
    v28 = 0LL;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*v9 + 104LL))(*v9, &v28);
      v12 = (__int64 *)v25;
      v11 = WPP_GLOBAL_Control;
    }
    v13 = 0LL;
    v22 = 0LL;
    if ( v10 >= 0 )
    {
      v14 = *v12;
      v15 = v28;
      v23 = (struct _GUID)*((_OWORD *)v28 + 4);
      v21 = (struct _GUID)*((_OWORD *)v28 + 3);
      Src = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
      v10 = DeriveSaDeviceParametersForStream(
              a2,
              AUDCLNT_SHAREMODE_SHARED,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v15[2],
              &v21,
              &v23,
              a4,
              Src,
              a5,
              &v22);
      if ( v10 >= 0 )
      {
        *(_QWORD *)&v21.Data1 = *v9;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v21);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_5e8dce2c070e4f08923b16093ddb4e17_>(
          (__int64 *)&v23,
          v25,
          *((__int64 *)&v25 + 1),
          (__int64 *)&v21);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v23);
      }
      v13 = (LPVOID *)v22;
      v11 = WPP_GLOBAL_Control;
    }
    if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v11 + 7) & 0x100) != 0
      && *((_BYTE *)v11 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v11 + 2), 0x2Fu, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids);
      v11 = WPP_GLOBAL_Control;
    }
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v9);
      v11 = WPP_GLOBAL_Control;
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
      v11 = WPP_GLOBAL_Control;
    }
    if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v11 + 7) & 0x100) != 0
      && *((_BYTE *)v11 + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)v11 + 2), 0x30u, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, v10);
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
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x33u,
          (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
          v18);
      }
      if ( v18 >= 0 )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
          &v21,
          (__int64)v27);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_0a5ec0379b5292e6ae8299465eb2d31a_>(
          &v23,
          v25,
          *((__int64 *)&v25 + 1),
          (__int64 *)&v21);
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v23);
      }
      if ( v27 )
        (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
    }
    else
    {
      v27 = a6;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v27);
      std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_d23c2bba33b47e6fe2bdf8624c4c437d_>(
        (__int64 *)&v23,
        v25,
        *((__int64 *)&v25 + 1),
        (__int64 *)&v27);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v23);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids);
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&a6);
    if ( v13 )
    {
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v13 + 3);
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v13 + 2);
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v13);
      operator delete(v13);
    }
    v19 = (LPVOID *)v28;
    if ( v28 )
    {
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)v28 + 3);
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v19 + 2);
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v19);
      operator delete(v19);
    }
  }
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(&v25);
  return (unsigned int)v10;
}
