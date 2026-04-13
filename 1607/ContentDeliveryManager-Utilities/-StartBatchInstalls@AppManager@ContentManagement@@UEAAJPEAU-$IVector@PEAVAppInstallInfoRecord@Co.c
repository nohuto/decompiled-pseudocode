/*
 * XREFs of ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180009330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@Z @ 0x180008CCC (-ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@.c)
 *     ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x180009908 (-ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVector@PEAVAppInstallInfoRecord.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180009D14 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000E6E4 (--$ActivateInstance@V-$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180013E90 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVInstallAppInfo@Int.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::StartBatchInstalls(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ebx
  HRESULT v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v27; // rcx
  char v28; // [rsp+28h] [rbp-49h]
  char v29; // [rsp+30h] [rbp-41h]
  __int64 v30; // [rsp+58h] [rbp-19h] BYREF
  __int64 v31; // [rsp+60h] [rbp-11h] BYREF
  __int64 v32; // [rsp+68h] [rbp-9h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-1h] BYREF
  _QWORD v34[2]; // [rsp+78h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+17h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v34[1] = -2LL;
  *a3 = 0LL;
  wil::details::ReportUsageToService(
    0x68C9CDu,
    (union wil::details::FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetFeaturePropertyCache'::`2'::data,
    2u);
  v34[0] = 0LL;
  v6 = ContentManagement::AppManager::ConvertToStoreRecords(v5, a2, v34);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
LABEL_35:
    v27 = v34[0];
    if ( v34[0] )
    {
      v34[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return (unsigned int)v7;
  }
  v33 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
         0x47u,
         &hstringHeader,
         &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>>(
         string,
         &v33);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
LABEL_33:
    v26 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v26)[2])(v26);
    }
    goto LABEL_35;
  }
  v32 = 0LL;
  v10 = (**v33)(v33, &GUID_b527c122_ff18_462f_9ce6_1b3c6ad37793, &v32);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10);
LABEL_31:
    v25 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_33;
  }
  v31 = 0LL;
  v29 = 0;
  v28 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, char, _QWORD, __int64 *))(*(_QWORD *)v32 + 72LL))(
          v32,
          v34[0],
          0LL,
          0LL,
          v28,
          v29,
          0LL,
          &v31);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v11);
LABEL_29:
    v24 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_31;
  }
  v30 = 0LL;
  v12 = v31;
  v7 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>>(v31);
  if ( v7 < 0 || (v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 64LL))(v12, &v30), v7 < 0) )
  {
    v15 = (unsigned int)v7;
    v16 = 127LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v15);
    v23 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_29;
  }
  v14 = ContentManagement::AppManager::ConvertFromStoreRecords(v13, v30, a3);
  v7 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v16 = 129LL;
    goto LABEL_27;
  }
  v17 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
  }
  v21 = v34[0];
  if ( v34[0] )
  {
    v34[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
