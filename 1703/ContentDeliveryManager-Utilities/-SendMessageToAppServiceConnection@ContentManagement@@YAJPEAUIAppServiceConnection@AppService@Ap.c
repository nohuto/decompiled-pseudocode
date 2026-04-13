/*
 * XREFs of ?SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIPropertySet@Collections@Foundation@5@@Z @ 0x180027A58
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800292B4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002D14 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180033C50 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@Applic.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::SendMessageToAppServiceConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdi
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v12; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char *v14; // [rsp+60h] [rbp+20h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  v3 = (*(__int64 (__fastcall **)(ContentManagement *, struct Windows::ApplicationModel::AppService::IAppServiceConnection *, __int64 *))(*(_QWORD *)this + 88LL))(
         this,
         a2,
         &v16);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xDF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_14;
  }
  v15 = 0LL;
  v5 = v16;
  v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *>>(v16);
  if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v15), v4 < 0) )
  {
    v7 = (unsigned int)v4;
    v8 = 227LL;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v15 + 56LL))(v15, &v14);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 229LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v7);
    goto LABEL_12;
  }
  if ( (_DWORD)v14 )
  {
    LODWORD(v12) = (_DWORD)v14;
    v4 = -2147023269;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xE7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)0x8007065BLL,
      (__int64)"AppServiceResponseStatus: %d",
      v12,
      -2LL);
  }
  else
  {
    v4 = 0;
  }
LABEL_12:
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_14:
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v4;
}
