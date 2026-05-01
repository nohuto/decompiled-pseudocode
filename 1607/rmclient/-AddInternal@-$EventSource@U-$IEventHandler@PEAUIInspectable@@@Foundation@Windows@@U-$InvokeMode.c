/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800029B0
 * Callers:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180002900 (-Add@-$GitEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001B00 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002F30 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000451C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  _QWORD *Ptr; // rcx
  volatile int *v10; // rdx
  int v11; // ebx
  _QWORD *v12; // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // rcx
  volatile int *v16; // rdx
  __int64 v17; // rdi
  Microsoft::WRL::Details::EventTargetArray *v18; // rcx
  struct IUnknown **v20; // rbp
  void **v21; // r13
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v4 = a1 + 2;
  *a4 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v22 = 0LL;
  if ( Ptr )
    v23 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v23 = 1LL;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v22,
          &v23);
  if ( v11 < 0 )
  {
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v22,
        v10);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v11;
  }
  else
  {
    v12 = a1->Ptr;
    v13 = v22;
    if ( a1->Ptr )
    {
      v20 = (struct IUnknown **)v12[2];
      v21 = (void **)v12[4];
      if ( v20 != (struct IUnknown **)v12[3] )
      {
        do
          Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *v20++, *v21++);
        while ( v20 != *((struct IUnknown ***)a1->Ptr + 3) );
      }
    }
    *a4 = a2;
    v14 = (__int64 *)*((_QWORD *)v13 + 3);
    if ( *v14 != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v15 = *v14;
      *v14 = a2;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    *(_QWORD *)(*((_QWORD *)v13 + 4) + 8 * ((__int64)(*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) >> 3)) = a3;
    *((_QWORD *)v13 + 3) += 8LL;
    AcquireSRWLockExclusive(a1 + 1);
    v17 = 0LL;
    if ( &v22 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v17 = (__int64)a1->Ptr;
      a1->Ptr = 0LL;
    }
    v18 = (Microsoft::WRL::Details::EventTargetArray *)a1->Ptr;
    a1->Ptr = v13;
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v18,
        v16);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        v17,
        v16);
    return 0LL;
  }
}
