/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000DA54
 * Callers:
 *     ??$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_4802794436e40c4be599af3779c5c785_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000C344 (--$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 *     ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000DF30 (-remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180006240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006280 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000B304 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x18000B4D8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockExclusiveTraits@Handle.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000C468 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rbx
  volatile int *v3; // rdx
  int v4; // edi
  char v5; // r14
  __int64 v6; // rsi
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // rcx
  struct IUnknown **v9; // rdi
  void **v10; // r15
  PSRWLOCK v12[3]; // [rsp+20h] [rbp-18h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v13; // [rsp+70h] [rbp+38h] BYREF
  struct IUnknown *v14; // [rsp+78h] [rbp+40h]
  __int64 v15; // [rsp+80h] [rbp+48h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+50h] BYREF

  v14 = a2;
  v13 = a1;
  v2 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)&stru_1800227B8, (__int64)&SRWLock);
  if ( !Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v4 = 0;
LABEL_9:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v4;
  }
  v5 = 0;
  v6 = *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
     - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
  v13 = 0LL;
  v7 = (RTL_SRWLOCK *)((v6 >> 3) - 1);
  v12[0] = v7;
  if ( v7 )
  {
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           &v13,
           (unsigned __int64 *)v12);
    if ( v4 < 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
          (__int64)v13,
          v3);
      goto LABEL_9;
    }
    v8 = Windows::System::CMemoryManager::s_limitChangeEvent;
    v9 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
    v10 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
    if ( v9 == *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) )
      goto LABEL_22;
    do
    {
      if ( v5 || v14 != *v9 )
      {
        if ( !v7 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *v9, *v10);
        v8 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v10;
        v7 = (RTL_SRWLOCK *)((char *)v7 - 1);
      }
      else
      {
        v5 = 1;
      }
      ++v9;
    }
    while ( v9 != *(struct IUnknown ***)(v8 + 24) );
    if ( !v5 )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( **(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16) == v14 )
  {
LABEL_19:
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)&::SRWLock, (__int64)v12);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &v15,
      (char *)&Windows::System::CMemoryManager::s_limitChangeEvent);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &Windows::System::CMemoryManager::s_limitChangeEvent,
      (char *)&v13);
    if ( v12[0] )
      ReleaseSRWLockExclusive(v12[0]);
    v2 = v15;
LABEL_22:
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v13,
        v3);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v4 = 0;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
      v2,
      v3);
  return (unsigned int)v4;
}
