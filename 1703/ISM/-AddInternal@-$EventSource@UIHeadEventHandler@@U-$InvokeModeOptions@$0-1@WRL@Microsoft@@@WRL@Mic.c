/*
 * XREFs of ?AddInternal@?$EventSource@UIHeadEventHandler@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIHeadEventHandler@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180056B30
 * Callers:
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x1800565A0 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationTo.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180056210 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180056318 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<IHeadEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  unsigned __int64 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v9; // edi
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  _QWORD *Ptr; // rax
  void **v12; // r12
  struct IUnknown **i; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rax
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+20h] [rbp-20h]
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 *v19; // [rsp+30h] [rbp-10h]
  PSRWLOCK v20; // [rsp+38h] [rbp-8h] BYREF
  volatile signed __int32 *v23; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0LL;
  wil::srwlock::lock_exclusive(a1 + 2, &SRWLock);
  if ( a1->Ptr )
    v6 = ((__int64)(*((_QWORD *)a1->Ptr + 3) - *((_QWORD *)a1->Ptr + 2)) >> 3) + 1;
  else
    v6 = 1LL;
  v17 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_21:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v9;
  }
  v10 = Microsoft::WRL::Details::ModuleBase::module_;
  v7[3] = 1;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( v10 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  *(_QWORD *)v8 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v9 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
         (Microsoft::WRL::Details::EventTargetArray *)v8,
         v6);
  if ( v9 >= 0 )
  {
    _InterlockedIncrement(v8 + 3);
    v17 = (Microsoft::WRL::Details::EventTargetArray *)v8;
    if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v9 = 0;
  }
  else if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( v9 < 0 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    goto LABEL_21;
  }
  Ptr = a1->Ptr;
  if ( a1->Ptr )
  {
    v12 = (void **)Ptr[4];
    for ( i = (struct IUnknown **)Ptr[2]; i != (struct IUnknown **)Ptr[3]; ++i )
    {
      Microsoft::WRL::Details::EventTargetArray::AddTail(v17, *i, *v12);
      Ptr = a1->Ptr;
      ++v12;
    }
  }
  *a4 = a2;
  Microsoft::WRL::Details::EventTargetArray::AddTail(v17, a2, a3);
  wil::srwlock::lock_exclusive(a1 + 1, &v20);
  v14 = 0LL;
  v23 = 0LL;
  if ( &v23 != (volatile signed __int32 **)a1 )
  {
    v14 = (volatile signed __int32 *)a1->Ptr;
    a1->Ptr = 0LL;
    v23 = v14;
  }
  v19 = (volatile signed __int32 *)a1->Ptr;
  v15 = v19;
  a1->Ptr = v17;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v14 = v23;
  }
  if ( v20 )
    ReleaseSRWLockExclusive(v20);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v9 = 0;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 24LL))(v23, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v9;
}
