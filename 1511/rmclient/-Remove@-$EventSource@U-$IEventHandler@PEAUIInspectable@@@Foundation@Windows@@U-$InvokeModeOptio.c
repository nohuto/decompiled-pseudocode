/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000E390
 * Callers:
 *     ??$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_38e201a94f1ead6275cfb8116ae5177e_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000CD34 (--$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000E920 (-remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000E940 (-remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180001F80 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000209C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18000BFF4 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000CF88 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v3; // rbx
  _QWORD *Ptr; // rcx
  int v5; // edi
  char v6; // r15
  __int64 v7; // r14
  RTL_SRWLOCK *v8; // r14
  struct IUnknown **v9; // rdi
  void **v10; // r12
  PSRWLOCK v12[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v13; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v14; // [rsp+78h] [rbp+48h]
  volatile signed __int32 *v15; // [rsp+80h] [rbp+50h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+58h] BYREF

  v14 = a2;
  v3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 2, &SRWLock);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v5 = 0;
LABEL_9:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v5;
  }
  v6 = 0;
  v7 = Ptr[3] - Ptr[2];
  v13 = 0LL;
  v8 = (RTL_SRWLOCK *)((v7 >> 3) - 1);
  v12[0] = v8;
  if ( v8 )
  {
    v5 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           (volatile signed __int32 **)&v13,
           (unsigned __int64 *)v12);
    if ( v5 < 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v13);
      goto LABEL_9;
    }
    v9 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    v10 = (void **)*((_QWORD *)a1->Ptr + 4);
    if ( v9 == *((struct IUnknown ***)a1->Ptr + 3) )
      goto LABEL_22;
    do
    {
      if ( v6 || v14 != *v9 )
      {
        if ( !v8 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *v9, *v10++);
        v8 = (RTL_SRWLOCK *)((char *)v8 - 1);
      }
      else
      {
        v6 = 1;
      }
      ++v9;
    }
    while ( v9 != *((struct IUnknown ***)a1->Ptr + 3) );
    if ( !v6 )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( *(struct IUnknown **)Ptr[2] == v14 )
  {
LABEL_19:
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 1, v12);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v15, (char *)a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v13);
    if ( v12[0] )
      ReleaseSRWLockExclusive(v12[0]);
    v3 = v15;
LABEL_22:
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v13);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v5 = 0;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  return (unsigned int)v5;
}
