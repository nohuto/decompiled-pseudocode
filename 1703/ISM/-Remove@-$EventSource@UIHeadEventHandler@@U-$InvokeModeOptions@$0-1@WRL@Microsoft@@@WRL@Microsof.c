/*
 * XREFs of ?Remove@?$EventSource@UIHeadEventHandler@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180056760
 * Callers:
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z @ 0x180056634 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_08be2bc79a39130fd3ef2ebb38aa7c02__IHeadEventHandler_ @ 0x180057458 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_08be2bc79a39130fd3ef2ebb38aa7c02__IHea.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180056318 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180056E38 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<IHeadEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v4; // rdi
  _QWORD *Ptr; // rax
  int v6; // ebx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // r12
  bool v9; // cl
  struct IUnknown ***v10; // rax
  struct IUnknown **v11; // r13
  void **v12; // r15
  volatile signed __int32 *v13; // rax
  volatile signed __int32 *v14; // rcx
  void **v16; // [rsp+20h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-10h]
  PSRWLOCK v19; // [rsp+38h] [rbp-8h] BYREF
  char v20; // [rsp+80h] [rbp+40h]
  Microsoft::WRL::Details::EventTargetArray *v21; // [rsp+90h] [rbp+50h] BYREF
  __int64 v22; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0LL;
  wil::srwlock::lock_exclusive(a1 + 2, &SRWLock);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v6 = 0;
LABEL_10:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v6;
  }
  v7 = 0LL;
  v8 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) - 1;
  v21 = 0LL;
  v22 = v8;
  v20 = 0;
  if ( v8 )
  {
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           &v21,
           &v22);
    if ( v6 < 0 )
    {
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v21 + 24LL))(
            v21,
            1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      goto LABEL_10;
    }
    v10 = (struct IUnknown ***)a1->Ptr;
    v7 = (volatile signed __int32 *)v21;
    v11 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    v16 = (void **)*((_QWORD *)a1->Ptr + 4);
    if ( v11 == v10[3] )
      goto LABEL_30;
    v12 = v16;
    v9 = 0;
    do
    {
      if ( v9 || a2 != *v11 )
      {
        if ( !v8 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail((Microsoft::WRL::Details::EventTargetArray *)v7, *v11, *v12);
        v9 = v20;
        ++v12;
        v22 = --v8;
      }
      else
      {
        v9 = 1;
        v20 = 1;
      }
      ++v11;
    }
    while ( v11 != *((struct IUnknown ***)a1->Ptr + 3) );
  }
  else
  {
    v9 = *(_QWORD *)Ptr[2] == (_QWORD)a2;
  }
  if ( v9 )
  {
    wil::srwlock::lock_exclusive(a1 + 1, &v19);
    v16 = 0LL;
    if ( &v16 != (void ***)a1 )
    {
      v4 = (volatile signed __int32 *)a1->Ptr;
      a1->Ptr = 0LL;
      v16 = (void **)v4;
    }
    v14 = v7;
    v7 = 0LL;
    v18 = (volatile signed __int32 *)a1->Ptr;
    v13 = v18;
    v21 = 0LL;
    a1->Ptr = (PVOID)v14;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v7 = (volatile signed __int32 *)v21;
    }
    if ( !v19 )
      goto LABEL_34;
    ReleaseSRWLockExclusive(v19);
  }
LABEL_30:
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
LABEL_34:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = 0;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v6;
}
