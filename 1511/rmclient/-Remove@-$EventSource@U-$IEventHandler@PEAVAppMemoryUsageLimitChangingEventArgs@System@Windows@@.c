/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000E504
 * Callers:
 *     ??$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_4802794436e40c4be599af3779c5c785_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000CE64 (--$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 *     ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000E960 (-remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180001F80 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000209C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18000BFF4 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000CF88 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v2; // rbx
  int v3; // edi
  char v4; // r14
  __int64 v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // rcx
  struct IUnknown **v8; // rdi
  void **v9; // r15
  PSRWLOCK v11[3]; // [rsp+20h] [rbp-18h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v12; // [rsp+70h] [rbp+38h] BYREF
  struct IUnknown *v13; // [rsp+78h] [rbp+40h]
  volatile signed __int32 *v14; // [rsp+80h] [rbp+48h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+50h] BYREF

  v13 = a2;
  v12 = a1;
  v2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&stru_180024828, &SRWLock);
  if ( !Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v3 = 0;
LABEL_9:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v3;
  }
  v4 = 0;
  v5 = *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
     - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
  v12 = 0LL;
  v6 = (RTL_SRWLOCK *)((v5 >> 3) - 1);
  v11[0] = v6;
  if ( v6 )
  {
    v3 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           (volatile signed __int32 **)&v12,
           (unsigned __int64 *)v11);
    if ( v3 < 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v12);
      goto LABEL_9;
    }
    v7 = Windows::System::CMemoryManager::s_limitChangeEvent;
    v8 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
    v9 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
    if ( v8 == *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) )
      goto LABEL_22;
    do
    {
      if ( v4 || v13 != *v8 )
      {
        if ( !v6 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v12, *v8, *v9);
        v7 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v9;
        v6 = (RTL_SRWLOCK *)((char *)v6 - 1);
      }
      else
      {
        v4 = 1;
      }
      ++v8;
    }
    while ( v8 != *(struct IUnknown ***)(v7 + 24) );
    if ( !v4 )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( **(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16) == v13 )
  {
LABEL_19:
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&::SRWLock, v11);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      (__int64 *)&v14,
      (char *)&Windows::System::CMemoryManager::s_limitChangeEvent);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &Windows::System::CMemoryManager::s_limitChangeEvent,
      (char *)&v12);
    if ( v11[0] )
      ReleaseSRWLockExclusive(v11[0]);
    v2 = v14;
LABEL_22:
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v12);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v3 = 0;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  return (unsigned int)v3;
}
