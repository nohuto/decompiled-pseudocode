/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x180009908
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180009330 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$Make@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@5678@@Z @ 0x18000FFBC (--$Make@V-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // r14d
  int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  HRESULT v17; // eax
  HSTRING v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v33; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v34; // [rsp+30h] [rbp-41h] BYREF
  HSTRING v35; // [rsp+38h] [rbp-39h] BYREF
  __int64 v36; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v38[3]; // [rsp+50h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-9h] BYREF
  HSTRING string; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v38[1] = -2LL;
  *a3 = 0LL;
  v5 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::permission>(v38);
  v6 = v38[0];
  if ( !v38[0] )
  {
    v8 = -2147024882;
    v9 = 2147942414LL;
    v10 = 178LL;
    goto LABEL_44;
  }
  v5 = v38[0];
  v38[2] = v38[0];
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v37);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 181LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v9);
    goto LABEL_45;
  }
  v11 = 0;
  if ( !v37 )
  {
LABEL_40:
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, a3);
    v8 = v31;
    if ( v31 >= 0 )
    {
      v8 = 0;
      goto LABEL_45;
    }
    v9 = (unsigned int)v31;
    v10 = 199LL;
    goto LABEL_44;
  }
  while ( 1 )
  {
    v36 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v11, &v36);
    v8 = v12;
    if ( v12 < 0 )
      break;
    v35 = 0LL;
    v13 = v36;
    WindowsDeleteString(0LL);
    v35 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v13 + 48LL))(v13, &v35);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_36;
    }
    v34 = 0LL;
    v15 = v36;
    WindowsDeleteString(0LL);
    v34 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 64LL))(v15, &v34);
    v8 = v16;
    if ( v16 < 0 )
      goto LABEL_33;
    v33 = 0LL;
    string = 0LL;
    v17 = WindowsCreateStringReference(
            L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
            0x4Du,
            &hstringHeader,
            &string);
    if ( v17 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v16);
LABEL_34:
      WindowsDeleteString(v34);
      v34 = 0LL;
LABEL_36:
      WindowsDeleteString(v35);
      v35 = 0LL;
      goto LABEL_38;
    }
    v18 = string;
    v19 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v33 = 0LL;
    v8 = RoActivateInstance(v18, v38);
    if ( v8 < 0
      || (*(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
       || *(_QWORD *)GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        ? (v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v38[0])(
                  v38[0],
                  &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e,
                  &v33),
           (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38[0] + 16LL))(v38[0]),
           v20 = v33)
        : (v20 = v38[0], v33 = v38[0]),
          v8 < 0) )
    {
      v27 = (unsigned int)v8;
      v28 = 192LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v27);
      v29 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      goto LABEL_34;
    }
    v21 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v20 + 56LL))(v20, v35);
    v8 = v21;
    if ( v21 < 0 )
    {
      v27 = (unsigned int)v21;
      v28 = 193LL;
      goto LABEL_30;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v33 + 104LL))(v33, v34);
    v8 = v22;
    if ( v22 < 0 )
    {
      v27 = (unsigned int)v22;
      v28 = 194LL;
      goto LABEL_30;
    }
    v23 = v33;
    v33 = 0LL;
    v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104LL))(v6, v23);
    v8 = v24;
    if ( v24 < 0 )
    {
      v27 = (unsigned int)v24;
      v28 = 196LL;
      goto LABEL_30;
    }
    v25 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    WindowsDeleteString(v34);
    v34 = 0LL;
    WindowsDeleteString(v35);
    v35 = 0LL;
    v26 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    if ( ++v11 >= v37 )
      goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v12);
LABEL_38:
  v30 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
LABEL_45:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v8;
}
