/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002260
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180003B10 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001B00 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002F30 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000451C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        Microsoft::WRL::Details::EventTargetArray *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  volatile int *v7; // rdx
  int v8; // ebx
  Microsoft::WRL::Details::EventTargetArray *v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  volatile int *v13; // rdx
  struct IUnknown **v15; // r14
  void **i; // r15
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v17 = a1;
  *a4 = 0LL;
  AcquireSRWLockExclusive(&stru_1800166C0);
  v17 = 0LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v18 = ((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                   - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
        + 1;
  else
    v18 = 1LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v17,
         &v18);
  if ( v8 < 0 )
  {
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v17,
        v7);
    ReleaseSRWLockExclusive(&stru_1800166C0);
    return (unsigned int)v8;
  }
  else
  {
    v9 = v17;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v15 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
      for ( i = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
            v15 != *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24);
            ++v15 )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v15, *i++);
      }
    }
    *a4 = a2;
    v10 = (__int64 *)*((_QWORD *)v9 + 3);
    if ( *v10 != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = *v10;
      *v10 = a2;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    *(_QWORD *)(*((_QWORD *)v9 + 4) + 8 * ((__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3)) = a3;
    *((_QWORD *)v9 + 3) += 8LL;
    AcquireSRWLockExclusive(&SRWLock);
    v12 = Windows::System::CMemoryManager::s_limitChangeEvent;
    Windows::System::CMemoryManager::s_limitChangeEvent = (__int64)v9;
    ReleaseSRWLockExclusive(&SRWLock);
    ReleaseSRWLockExclusive(&stru_1800166C0);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        v12,
        v13);
    return 0LL;
  }
}
