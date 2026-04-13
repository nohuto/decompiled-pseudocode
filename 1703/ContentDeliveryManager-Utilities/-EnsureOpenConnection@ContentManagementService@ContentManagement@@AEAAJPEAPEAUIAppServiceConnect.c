/*
 * XREFs of ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180029C4C
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800292B4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180027B90 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     _anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64___lambda_d4e16ff8e34da2edeeacc718f45dd8b6___ @ 0x18003256C (_anonymous_namespace_--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Applic.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::EnsureOpenConnection(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  PVOID Ptr; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v5; // rax
  struct Windows::ApplicationModel::AppService::IAppServiceConnection **v6; // rdx
  PVOID v7; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v8; // rax
  int v9; // eax
  int v10; // esi
  PVOID v11; // rbx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  PVOID v17; // rcx
  PVOID v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v23; // [rsp+78h] [rbp+20h] BYREF

  Ptr = this[12].Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  v5 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[12].Ptr;
  *a2 = v5;
  if ( v5 )
    return 0LL;
  wil::srwlock::lock_exclusive(this + 11, &SRWLock);
  v7 = this[12].Ptr;
  if ( v7 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[12].Ptr;
  *a2 = v8;
  if ( v8 )
  {
LABEL_24:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  v20 = 0LL;
  v9 = ContentManagement::OpenAndValidateConnection((ContentManagement *)&v20, v6);
  v10 = v9;
  v11 = v20;
  if ( v9 >= 0 )
  {
    v23 = this;
    v14 = (_QWORD *)anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64___lambda_d4e16ff8e34da2edeeacc718f45dd8b6___(
                      &v21,
                      &v23);
    v10 = (*(__int64 (__fastcall **)(PVOID, _QWORD, RTL_SRWLOCK *))(*(_QWORD *)v11 + 112LL))(v11, *v14, this + 13);
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v10 < 0 )
    {
      v12 = (unsigned int)v10;
      v13 = 553LL;
      goto LABEL_13;
    }
    if ( this[12].Ptr != v11 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 8LL))(v11);
      v17 = this[12].Ptr;
      this[12].Ptr = v11;
      if ( v17 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = this[12].Ptr;
    if ( v18 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v18 + 8LL))(v18);
    *a2 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[12].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_24;
  }
  v12 = (unsigned int)v9;
  v13 = 540LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)v12);
  if ( v11 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 16LL))(v11);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v10;
}
