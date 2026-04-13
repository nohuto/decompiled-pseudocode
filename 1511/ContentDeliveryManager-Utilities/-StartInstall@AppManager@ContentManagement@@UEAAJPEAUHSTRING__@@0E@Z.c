/*
 * XREFs of ?StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0E@Z @ 0x180003560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180002640 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180005184 (--$ActivateInstance@V-$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800055E8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Previe.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::AppManager::StartInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4)
{
  HRESULT v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rsi
  char v17; // [rsp+28h] [rbp-59h]
  char v18; // [rsp+30h] [rbp-51h]
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-19h] BYREF
  __int64 v20; // [rsp+70h] [rbp-11h] BYREF
  __int64 v21; // [rsp+78h] [rbp-9h] BYREF
  _QWORD v22[2]; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v22[1] = -2LL;
  v19 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
         0x47u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>>(
         string,
         &v19);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v20 = 0LL;
    v9 = (**v19)(v19, &GUID_57b15f7a_3367_48f6_bb71_bacba1331a6e, &v20);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v21 = 0LL;
      v18 = 0;
      v17 = a4;
      v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, _QWORD, char, char, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v20 + 72LL))(
              v20,
              a2,
              0LL,
              0LL,
              v17,
              v18,
              0LL,
              0LL,
              0LL,
              0LL,
              &v21);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v22[0] = 0LL;
        v11 = v21;
        v8 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>(v21);
        if ( v8 < 0 || (v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 64LL))(v11, v22), v8 < 0) )
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            85LL,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v8);
        else
          v8 = 0;
        v12 = v22[0];
        if ( v22[0] )
        {
          v22[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      else
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          82LL,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v10);
      }
      v13 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        69LL,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v9);
    }
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      66LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7);
  }
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
  }
  return (unsigned int)v8;
}
