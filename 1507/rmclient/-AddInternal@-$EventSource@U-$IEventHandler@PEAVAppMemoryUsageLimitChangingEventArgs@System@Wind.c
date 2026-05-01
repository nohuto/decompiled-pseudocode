/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18000CAF8
 * Callers:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000CA68 (-Add@-$GitEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002C1C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180006240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006280 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000B304 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x18000B4D8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockExclusiveTraits@Handle.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  volatile int *v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  void **v10; // rdi
  struct IUnknown **i; // rbx
  Microsoft::WRL::Details::EventTargetArray *v12; // rcx
  volatile int *v13; // rdx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+60h] [rbp+30h] BYREF
  PSRWLOCK v18; // [rsp+78h] [rbp+48h] BYREF

  v17 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)&stru_1800227B8, (__int64)&SRWLock);
  v17 = 0LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v18 = (PSRWLOCK)(((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                              - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
                   + 1);
  else
    v18 = (PSRWLOCK)1;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v17,
         (unsigned __int64 *)&v18);
  if ( v8 >= 0 )
  {
    v9 = Windows::System::CMemoryManager::s_limitChangeEvent;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v10 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
      for ( i = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
            i != *(struct IUnknown ***)(v9 + 24);
            ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v17, *i, *v10);
        v9 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v10;
      }
    }
    v12 = v17;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v12, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)&::SRWLock, (__int64)&v18);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &v16,
      (char *)&Windows::System::CMemoryManager::s_limitChangeEvent);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &Windows::System::CMemoryManager::s_limitChangeEvent,
      (char *)&v17);
    if ( v18 )
      ReleaseSRWLockExclusive(v18);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v17,
        v13);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v8 = 0;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        v16,
        v13);
  }
  else
  {
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v17,
        v7);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return (unsigned int)v8;
}
