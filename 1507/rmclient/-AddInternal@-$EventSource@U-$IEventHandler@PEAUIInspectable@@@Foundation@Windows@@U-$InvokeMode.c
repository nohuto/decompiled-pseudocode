/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800060E0
 * Callers:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000630C (-Add@-$GitEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002C1C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005F14 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180006240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006280 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000B304 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  RTL_SRWLOCK *v4; // rbp
  _QWORD *Ptr; // rcx
  int v10; // ebx
  _QWORD *v11; // rax
  Microsoft::WRL::Details::EventTargetArray *v12; // rbx
  __int64 *v13; // r15
  struct IUnknown **v15; // r15
  void **v16; // r13
  __int64 v17[9]; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v4 = a1 + 2;
  *a4 = 0LL;
  v17[0] = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v18 = 0LL;
  if ( Ptr )
    v19 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v19 = 1LL;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v18,
          (unsigned __int64 *)&v19);
  if ( v10 < 0 )
  {
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v10;
  }
  else
  {
    v11 = a1->Ptr;
    v12 = v18;
    if ( a1->Ptr )
    {
      v15 = (struct IUnknown **)v11[2];
      v16 = (void **)v11[4];
      if ( v15 != (struct IUnknown **)v11[3] )
      {
        do
          Microsoft::WRL::Details::EventTargetArray::AddTail(v12, *v15++, *v16++);
        while ( v15 != *((struct IUnknown ***)a1->Ptr + 3) );
      }
    }
    *a4 = a2;
    v13 = (__int64 *)*((_QWORD *)v12 + 3);
    if ( *v13 != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v19 = *v13;
      *v13 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    }
    *(_QWORD *)(*((_QWORD *)v12 + 4) + 8 * ((__int64)(*((_QWORD *)v12 + 3) - *((_QWORD *)v12 + 2)) >> 3)) = a3;
    *((_QWORD *)v12 + 3) += 8LL;
    AcquireSRWLockExclusive(a1 + 1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v17, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v18);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v17[0] )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v17[0]);
    return 0LL;
  }
}
