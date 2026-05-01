/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180013D3C
 * Callers:
 *     ?remove_Shown@CActionCenterExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180011F60 (-remove_Shown@CActionCenterExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_Hidden@CActionCenterExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180012000 (-remove_Hidden@CActionCenterExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@$$T@Z @ 0x180014FE4 (--$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVAct.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180015434 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800182A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180018580 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180018608 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  Microsoft::WRL::Details::EventTargetArray *v6; // rbx
  char v7; // r12
  __int64 v8; // r15
  struct IUnknown **v9; // r14
  void **v10; // r13
  __int64 v11; // rcx
  Microsoft::WRL::Details::EventTargetArray *v12; // rax
  PSRWLOCK v14; // [rsp+70h] [rbp+48h] BYREF
  struct IUnknown *v15; // [rsp+78h] [rbp+50h]
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+58h] BYREF
  __int64 v17; // [rsp+88h] [rbp+60h] BYREF

  v15 = a2;
  v3 = 0LL;
  wil::srwlock::lock_exclusive(a1 + 2, &SRWLock);
  v4 = *a1;
  if ( !*a1 )
  {
    v5 = 0;
LABEL_9:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v5;
  }
  v6 = 0LL;
  v7 = 0;
  v8 = ((__int64)(*(_QWORD *)(v4 + 24) - *(_QWORD *)(v4 + 16)) >> 3) - 1;
  v14 = 0LL;
  v17 = v8;
  if ( v8 )
  {
    v5 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           &v14,
           &v17);
    if ( v5 < 0 )
    {
      if ( v14 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v14);
      goto LABEL_9;
    }
    v6 = (Microsoft::WRL::Details::EventTargetArray *)v14;
    v9 = *(struct IUnknown ***)(*a1 + 16);
    v10 = *(void ***)(*a1 + 32);
    if ( v9 == *(struct IUnknown ***)(*a1 + 24) )
      goto LABEL_25;
    do
    {
      if ( v7 || v15 != *v9 )
      {
        if ( !v8 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v6, *v9, *v10++);
        --v8;
      }
      else
      {
        v7 = 1;
      }
      ++v9;
    }
    while ( v9 != *(struct IUnknown ***)(*a1 + 24) );
    if ( !v7 )
    {
LABEL_25:
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
      goto LABEL_27;
    }
LABEL_19:
    wil::srwlock::lock_exclusive(a1 + 1, &v14);
    if ( &v17 != a1 )
    {
      v3 = *a1;
      *a1 = 0LL;
    }
    v11 = *a1;
    v12 = v6;
    v6 = 0LL;
    *a1 = (__int64)v12;
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
    if ( !v14 )
      goto LABEL_27;
    ReleaseSRWLockExclusive(v14);
    goto LABEL_25;
  }
  if ( **(struct IUnknown ***)(v4 + 16) == v15 )
    goto LABEL_19;
LABEL_27:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v5 = 0;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  return (unsigned int)v5;
}
