/*
 * XREFs of ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000BBC0
 * Callers:
 *     ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z @ 0x18000AF20 (-GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180013E00 (--$ActivateInstance@V-$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001A628 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppData@Internal@InstallControl@Prev.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::AppManager::GetEntitlementInternal(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        unsigned __int8 a5,
        struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData **a6)
{
  HRESULT v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v23[2]; // [rsp+48h] [rbp-29h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *v24; // [rsp+50h] [rbp-21h] BYREF
  __int64 v25; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+4Fh]

  v26[1] = -2LL;
  v26[0] = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
         0x47u,
         &hstringHeader,
         &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>>(
          string,
          v26);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xDB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_25;
  }
  v25 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v26[0])(
          v26[0],
          &GUID_57b15f7a_3367_48f6_bb71_bacba1331a6e,
          &v25);
  v11 = v12;
  if ( v12 >= 0 )
  {
    *(_QWORD *)v23 = 0LL;
    if ( WindowsGetStringLen(a3) )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING, unsigned __int8, int *))(*(_QWORD *)v25 + 64LL))(
              v25,
              a2,
              a3,
              a4,
              a5,
              v23);
      v11 = v14;
      if ( v14 < 0 )
      {
        v15 = 232LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v15,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v14);
LABEL_21:
        v18 = *(_QWORD *)v23;
        if ( *(_QWORD *)v23 )
        {
          *(_QWORD *)v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_23;
      }
    }
    else
    {
      LOBYTE(v13) = a5;
      v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, int *))(*(_QWORD *)v25 + 56LL))(
              v25,
              a2,
              0LL,
              v13,
              v23);
      v11 = v14;
      if ( v14 < 0 )
      {
        v15 = 240LL;
        goto LABEL_12;
      }
    }
    v24 = 0LL;
    v16 = *(_QWORD *)v23;
    v11 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>>(*(_QWORD *)v23);
    if ( v11 < 0
      || (v11 = (*(__int64 (__fastcall **)(__int64, struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData **))(*(_QWORD *)v16 + 64LL))(
                  v16,
                  &v24),
          v11 < 0) )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xF4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v11);
      v17 = v24;
    }
    else
    {
      v17 = v24;
      if ( v24 )
      {
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *))(*(_QWORD *)v24 + 8LL))(v24);
        v17 = v24;
      }
      *a6 = v17;
      v11 = 0;
    }
    if ( v17 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xDE,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v12);
LABEL_23:
  v19 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_25:
  v20 = v26[0];
  if ( v26[0] )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v11;
}
