/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_c477df94ac86060bf495915fe4bf8a5d__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180057630
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_08be2bc79a39130fd3ef2ebb38aa7c02__IHeadEventHandler_ @ 0x180057458 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_08be2bc79a39130fd3ef2ebb38aa7c02__IHea.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void wistd::_Func_impl_wistd::_Callable_obj__lambda_c477df94ac86060bf495915fe4bf8a5d__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  RTL_SRWLOCK *v1; // rdi
  volatile signed __int32 *Ptr; // rbx
  __int128 v3; // [rsp+20h] [rbp-69h]
  __int128 v4; // [rsp+30h] [rbp-59h]
  __int128 v5; // [rsp+40h] [rbp-49h]
  __int128 v6; // [rsp+50h] [rbp-39h]
  __int128 v7; // [rsp+60h] [rbp-29h]
  __int128 v8; // [rsp+70h] [rbp-19h]
  __int128 v9; // [rsp+80h] [rbp-9h]
  __int128 v10; // [rsp+90h] [rbp+7h]
  _OWORD v11[4]; // [rsp+A0h] [rbp+17h] BYREF
  PSRWLOCK SRWLock; // [rsp+F8h] [rbp+6Fh] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)MPCHeadUpdateListener::s_instance + 96));
  v1 = (RTL_SRWLOCK *)MPCHeadUpdateListener::s_instance;
  v7 = *((_OWORD *)MPCHeadUpdateListener::s_instance + 2);
  v3 = v7;
  v8 = *((_OWORD *)MPCHeadUpdateListener::s_instance + 3);
  v4 = v8;
  v9 = *((_OWORD *)MPCHeadUpdateListener::s_instance + 4);
  v5 = v9;
  v10 = *((_OWORD *)MPCHeadUpdateListener::s_instance + 5);
  v6 = v10;
  if ( v0 )
  {
    LeaveCriticalSection(v0);
    v1 = (RTL_SRWLOCK *)MPCHeadUpdateListener::s_instance;
  }
  Ptr = 0LL;
  wil::srwlock::lock_exclusive(v1 + 1, &SRWLock);
  if ( v1->Ptr )
  {
    Ptr = (volatile signed __int32 *)v1->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)v1->Ptr + 3);
    v6 = v10;
    v5 = v9;
    v4 = v8;
    v3 = v7;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr )
  {
    v11[0] = v3;
    v11[1] = v4;
    v11[2] = v5;
    v11[3] = v6;
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_08be2bc79a39130fd3ef2ebb38aa7c02__IHeadEventHandler_(
      v11,
      (__int64)Ptr,
      v1);
    if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
