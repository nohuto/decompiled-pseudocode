/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18000D648
 * Callers:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000D5B8 (-Add@-$GitEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180001F80 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180001FFC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000209C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18000BFF4 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  int v7; // ebx
  __int64 v8; // rax
  void **v9; // rdi
  struct IUnknown **i; // rbx
  Microsoft::WRL::Details::EventTargetArray *v11; // rcx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+60h] [rbp+30h] BYREF
  PSRWLOCK v16; // [rsp+78h] [rbp+48h] BYREF

  v15 = a1;
  *a4 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&stru_180024828, &SRWLock);
  v15 = 0LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v16 = (PSRWLOCK)(((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                              - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
                   + 1);
  else
    v16 = (PSRWLOCK)1;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         (volatile signed __int32 **)&v15,
         (unsigned __int64 *)&v16);
  if ( v7 >= 0 )
  {
    v8 = Windows::System::CMemoryManager::s_limitChangeEvent;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v9 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
      for ( i = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
            i != *(struct IUnknown ***)(v8 + 24);
            ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *i, *v9);
        v8 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v9;
      }
    }
    v11 = v15;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v11, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&::SRWLock, &v16);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      (__int64 *)&v14,
      (char *)&Windows::System::CMemoryManager::s_limitChangeEvent);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &Windows::System::CMemoryManager::s_limitChangeEvent,
      (char *)&v15);
    if ( v16 )
      ReleaseSRWLockExclusive(v16);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v15);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v7 = 0;
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v14);
  }
  else
  {
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v15);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return (unsigned int)v7;
}
