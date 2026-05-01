/*
 * XREFs of ??$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x18000C188
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x18000D5D0 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006280 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x18000B4D8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockExclusiveTraits@Handle.c)
 *     ??$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_4802794436e40c4be599af3779c5c785_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000C344 (--$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000C7B4 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  volatile int *v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  SRWLock = a1;
  v3 = 0;
  v6[1] = a3;
  v6[0] = 0LL;
  v8 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)&::SRWLock, (__int64)&SRWLock);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
    &v8,
    &Windows::System::CMemoryManager::s_limitChangeEvent);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v8 )
  {
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_4802794436e40c4be599af3779c5c785_,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
           v6,
           v8);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
      v8,
      v4);
  }
  return v3;
}
