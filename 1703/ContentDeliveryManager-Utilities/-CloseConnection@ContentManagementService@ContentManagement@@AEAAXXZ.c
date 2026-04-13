/*
 * XREFs of ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180029DF4
 * Callers:
 *     ??_GContentManagementService@ContentManagement@@UEAAPEAXI@Z @ 0x18001FA60 (--_GContentManagementService@ContentManagement@@UEAAPEAXI@Z.c)
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_d4e16ff8e34da2edeeacc718f45dd8b6__&___ptr64_2__1_::Invoke @ 0x1800338B0 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFla.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180022D3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContentManagement::ContentManagementService::CloseConnection(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx
  int v3; // eax
  PVOID v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 11, &SRWLock);
  Ptr = this[12].Ptr;
  if ( Ptr )
  {
    if ( this[13].Ptr )
    {
      v3 = (*(__int64 (__fastcall **)(PVOID, PVOID))(*(_QWORD *)Ptr + 120LL))(Ptr, this[13].Ptr);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x239,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v3);
      this[13].Ptr = 0LL;
    }
    v4 = this[12].Ptr;
    if ( v4 )
    {
      this[12].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
