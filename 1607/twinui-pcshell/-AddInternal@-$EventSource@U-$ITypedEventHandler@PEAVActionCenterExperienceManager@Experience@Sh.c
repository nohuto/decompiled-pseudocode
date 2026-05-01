/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180014918
 * Callers:
 *     ?add_Shown@CActionCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180011F00 (-add_Shown@CActionCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVActionCenterExperie.c)
 *     ?add_Hidden@CActionCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180011FA0 (-add_Hidden@CActionCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVActionCenterExperi.c)
 * Callees:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180015F00 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800182A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180018580 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180018608 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        char *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  unsigned __int64 v8; // rbp
  Microsoft::WRL::Details::EventTargetArray *v9; // rdi
  signed __int32 *v10; // rax
  signed __int32 *v11; // rbx
  int v12; // ebp
  bool v13; // zf
  signed __int32 v14; // eax
  _QWORD *v15; // rax
  void **v16; // r14
  struct IUnknown **i; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  PSRWLOCK v21; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+28h] [rbp-40h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v24; // [rsp+88h] [rbp+20h]

  *a4 = 0LL;
  wil::srwlock::lock_exclusive(a1 + 16, &SRWLock);
  if ( *(_QWORD *)a1 )
    v8 = ((__int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - *(_QWORD *)(*(_QWORD *)a1 + 16LL)) >> 3) + 1;
  else
    v8 = 1LL;
  v9 = 0LL;
  v24 = 0LL;
  v10 = (signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
LABEL_17:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v12;
  }
  v13 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  v10[3] = 1;
  *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( !v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v9 = v24;
  }
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 4) = 0LL;
  *(_QWORD *)v10 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v12 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
          (Microsoft::WRL::Details::EventTargetArray *)v10,
          v8);
  if ( v12 >= 0 )
  {
    do
      v14 = v11[3];
    while ( v14 != 0x7FFFFFFF && v14 != _InterlockedCompareExchange(v11 + 3, v14 + 1, v14) );
    v9 = (Microsoft::WRL::Details::EventTargetArray *)v11;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
    v12 = 0;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
  }
  if ( v12 < 0 )
  {
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
    goto LABEL_17;
  }
  v15 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v16 = (void **)v15[4];
    for ( i = (struct IUnknown **)v15[2]; i != (struct IUnknown **)v15[3]; ++i )
    {
      Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *i, *v16);
      v15 = *(_QWORD **)a1;
      ++v16;
    }
  }
  *a4 = a2;
  Microsoft::WRL::Details::EventTargetArray::AddTail(v9, a2, a3);
  wil::srwlock::lock_exclusive(a1 + 8, &v21);
  v18 = 0LL;
  if ( &v22 != a1 )
  {
    v18 = *(_QWORD *)a1;
    *(_QWORD *)a1 = 0LL;
  }
  v19 = *(_QWORD *)a1;
  *(_QWORD *)a1 = v9;
  if ( v19 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v19);
  if ( v21 )
    ReleaseSRWLockExclusive(v21);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v12 = 0;
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
  return (unsigned int)v12;
}
