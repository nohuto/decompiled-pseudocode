/*
 * XREFs of ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18000E048
 * Callers:
 *     ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180010310 (-EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnect.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000256C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800025A0 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180018ABC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001AE9C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::OpenAndValidateConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  int v3; // esi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  _QWORD *v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  char *v20; // [rsp+30h] [rbp-21h]
  __int64 v21; // [rsp+38h] [rbp-19h] BYREF
  __int64 v22; // [rsp+40h] [rbp-11h] BYREF
  __int64 v23; // [rsp+48h] [rbp-9h] BYREF
  char *v24; // [rsp+50h] [rbp-1h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp+7h] BYREF
  HSTRING string; // [rsp+68h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v25[1] = -2LL;
  v25[0] = L"microsoft-contentdeliverymanager";
  *(_QWORD *)this = 0LL;
  v21 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.ApplicationModel.AppService.AppServiceConnection",
         0x38u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v21 = 0LL;
  v3 = RoActivateInstance(string, &v23);
  if ( v3 < 0
    || (*(_QWORD *)&GUID_9dd474a2_871f_4d52_89a9_9e090531bd27.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_9dd474a2_871f_4d52_89a9_9e090531bd27.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
                v23,
                &GUID_9dd474a2_871f_4d52_89a9_9e090531bd27,
                &v21),
         (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23),
         v4 = v21)
      : (v4 = v23, v21 = v23),
        v3 < 0) )
  {
    v7 = (unsigned int)v3;
    v8 = 185LL;
    goto LABEL_25;
  }
  v5 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, v25);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, *v5);
  v3 = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 186LL;
LABEL_25:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v8,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v7);
    goto LABEL_26;
  }
  v9 = v21;
  v10 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, &off_180031358);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 72LL))(v9, *v10);
  v3 = v11;
  if ( v11 < 0 )
  {
    v7 = (unsigned int)v11;
    v8 = 187LL;
    goto LABEL_25;
  }
  v22 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 80LL))(v21, &v22);
  v3 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 190LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v14,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v13);
    goto LABEL_22;
  }
  v15 = v22;
  v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>>(v22);
  if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v15 + 64LL))(v15, &v24), v3 < 0) )
  {
    v13 = (unsigned int)v3;
    v14 = 192LL;
    goto LABEL_21;
  }
  if ( (_DWORD)v24 )
  {
    LODWORD(v20) = (_DWORD)v24;
    v3 = -2147483629;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xC2,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)0x80000013LL,
      (__int64)"AppServiceConnectionStatus: %d",
      v20);
  }
  else
  {
    v16 = v21;
    v21 = 0LL;
    *(_QWORD *)this = v16;
    v3 = 0;
  }
LABEL_22:
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_26:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v3;
}
