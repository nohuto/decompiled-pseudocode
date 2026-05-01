/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000159C
 * Callers:
 *     ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800010C0 (-remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@.c)
 *     ??$InvokeDelegates@V_lambda_0d2097040fdc94409e92cccf637cf19f_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0d2097040fdc94409e92cccf637cf19f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800010D4 (--$InvokeDelegates@V_lambda_0d2097040fdc94409e92cccf637cf19f_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800016D0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18000170C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001B00 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000451C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800087B0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rbx
  char v3; // r14
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  int v6; // edi
  __int64 v8; // rcx
  struct IUnknown **v9; // rdi
  void **v10; // r15
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v12; // [rsp+70h] [rbp+38h] BYREF
  struct IUnknown *v13; // [rsp+78h] [rbp+40h]
  __int64 v14; // [rsp+80h] [rbp+48h] BYREF
  PSRWLOCK v15; // [rsp+88h] [rbp+50h] BYREF

  v13 = a2;
  v12 = a1;
  v2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&stru_1800166C0, &v15);
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v3 = 0;
    v4 = *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
       - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
    v12 = 0LL;
    v5 = (RTL_SRWLOCK *)((v4 >> 3) - 1);
    SRWLock[0] = v5;
    if ( !v5 )
    {
      if ( **(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16) != v13 )
      {
LABEL_9:
        if ( v15 )
          ReleaseSRWLockExclusive(v15);
        v6 = 0;
        if ( v2 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
        return (unsigned int)v6;
      }
LABEL_4:
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&::SRWLock, SRWLock);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &v14,
        &Windows::System::CMemoryManager::s_limitChangeEvent);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &Windows::System::CMemoryManager::s_limitChangeEvent,
        &v12);
      if ( SRWLock[0] )
        ReleaseSRWLockExclusive(SRWLock[0]);
      v2 = v14;
LABEL_7:
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
      goto LABEL_9;
    }
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           &v12,
           SRWLock);
    if ( v6 >= 0 )
    {
      v8 = Windows::System::CMemoryManager::s_limitChangeEvent;
      v9 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
      v10 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
      if ( v9 == *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) )
        goto LABEL_7;
      do
      {
        if ( v3 || v13 != *v9 )
        {
          if ( !v5 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v12, *v9, *v10);
          v8 = Windows::System::CMemoryManager::s_limitChangeEvent;
          ++v10;
          v5 = (RTL_SRWLOCK *)((char *)v5 - 1);
        }
        else
        {
          v3 = 1;
        }
        ++v9;
      }
      while ( v9 != *(struct IUnknown ***)(v8 + 24) );
      if ( !v3 )
        goto LABEL_7;
      goto LABEL_4;
    }
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
  }
  else
  {
    v6 = 0;
  }
  if ( v15 )
    ReleaseSRWLockExclusive(v15);
  return (unsigned int)v6;
}
