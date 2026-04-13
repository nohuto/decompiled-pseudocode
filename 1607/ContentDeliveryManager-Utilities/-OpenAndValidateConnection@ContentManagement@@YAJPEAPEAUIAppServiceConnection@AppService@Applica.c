/*
 * XREFs of ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18001F0E0
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180020834 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002C2C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180029AF4 (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18002DFC4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::OpenAndValidateConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  char *v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  char *v21; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v22[1] = -2LL;
  v22[0] = L"microsoft-contentdeliverymanager";
  *(_QWORD *)this = 0LL;
  v19 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.ApplicationModel.AppService.AppServiceConnection",
         0x38u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceConnection>>(
         string,
         &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 217LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_21;
  }
  v6 = v19;
  v7 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, v22);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, *v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 218LL;
    goto LABEL_9;
  }
  v8 = v19;
  v9 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, off_180068EC0);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, *v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 219LL;
    goto LABEL_9;
  }
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 80LL))(v19, &v20);
  v4 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 222LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v11);
    goto LABEL_19;
  }
  v13 = v20;
  v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>>(v20);
  if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v13 + 64LL))(v13, &v21), v4 < 0) )
  {
    v11 = (unsigned int)v4;
    v12 = 224LL;
    goto LABEL_18;
  }
  if ( (_DWORD)v21 )
  {
    LODWORD(v18) = (_DWORD)v21;
    v4 = -2147483629;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xE2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)0x80000013LL,
      (__int64)"AppServiceConnectionStatus: %d",
      v18);
  }
  else
  {
    v14 = v19;
    v19 = 0LL;
    *(_QWORD *)this = v14;
    v4 = 0;
  }
LABEL_19:
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_21:
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v4;
}
