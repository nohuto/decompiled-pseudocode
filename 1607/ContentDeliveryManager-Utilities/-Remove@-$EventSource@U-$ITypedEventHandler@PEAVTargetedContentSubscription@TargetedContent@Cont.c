/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800427E8
 * Callers:
 *     ?remove_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJUEventRegistrationToken@@@Z @ 0x1800402E0 (-remove_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJUEventRegistrati.c)
 *     ??$InvokeDelegates@V_lambda_eef752076538a26ed334291b1ebf7b16_@@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_eef752076538a26ed334291b1ebf7b16_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800449DC (--$InvokeDelegates@V_lambda_eef752076538a26ed334291b1ebf7b16_@@U-$ITypedEventHandler@PEAVTargete.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C720 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180043D78 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180048984 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<ContentManagement::TargetedContent::TargetedContentSubscription *,ContentManagement::TargetedContent::TargetedContentUpdatedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v3; // rdi
  _QWORD *Ptr; // rcx
  int v5; // ebx
  Microsoft::WRL::Details::EventTargetArray *v6; // rbx
  char v7; // r12
  __int64 v8; // r15
  struct IUnknown **v9; // r14
  void **v10; // r13
  volatile signed __int32 *v11; // rcx
  Microsoft::WRL::Details::EventTargetArray *v12; // rax
  PSRWLOCK v14; // [rsp+70h] [rbp+48h] BYREF
  struct IUnknown *v15; // [rsp+78h] [rbp+50h]
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+58h] BYREF
  __int64 v17; // [rsp+88h] [rbp+60h] BYREF

  v15 = a2;
  v3 = 0LL;
  wil::srwlock::lock_exclusive(a1 + 2, &SRWLock);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v5 = 0;
LABEL_9:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v5;
  }
  v6 = 0LL;
  v7 = 0;
  v8 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) - 1;
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
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v14);
      goto LABEL_9;
    }
    v6 = (Microsoft::WRL::Details::EventTargetArray *)v14;
    v9 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    v10 = (void **)*((_QWORD *)a1->Ptr + 4);
    if ( v9 == *((struct IUnknown ***)a1->Ptr + 3) )
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
    while ( v9 != *((struct IUnknown ***)a1->Ptr + 3) );
    if ( !v7 )
    {
LABEL_25:
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6);
      goto LABEL_27;
    }
LABEL_19:
    wil::srwlock::lock_exclusive(a1 + 1, &v14);
    if ( &v17 != (__int64 *)a1 )
    {
      v3 = (volatile signed __int32 *)a1->Ptr;
      a1->Ptr = 0LL;
    }
    v11 = (volatile signed __int32 *)a1->Ptr;
    v12 = v6;
    v6 = 0LL;
    a1->Ptr = v12;
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
    if ( !v14 )
      goto LABEL_27;
    ReleaseSRWLockExclusive(v14);
    goto LABEL_25;
  }
  if ( *(struct IUnknown **)Ptr[2] == v15 )
    goto LABEL_19;
LABEL_27:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v5 = 0;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  return (unsigned int)v5;
}
