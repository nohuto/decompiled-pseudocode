/*
 * XREFs of ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x18000C0F4
 * Callers:
 *     ?OnCommitLevelDecreasedRoutine@CMemoryManager@System@Windows@@CAXXZ @ 0x18000D590 (-OnCommitLevelDecreasedRoutine@CMemoryManager@System@Windows@@CAXXZ.c)
 *     ?OnCommitLevelIncreasedRoutine@CMemoryManager@System@Windows@@CAXXZ @ 0x18000D5B0 (-OnCommitLevelIncreasedRoutine@CMemoryManager@System@Windows@@CAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006280 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x18000B4D8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockExclusiveTraits@Handle.c)
 *     ??$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_38e201a94f1ead6275cfb8116ae5177e_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000C214 (--$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000C7B4 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(
        __int64 a1,
        RTL_SRWLOCK *a2)
{
  unsigned int v3; // edi
  volatile int *v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  SRWLock = a2;
  v3 = 0;
  v8 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 8, (__int64)&SRWLock);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v8, a1);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v8 )
  {
    v6 = 0LL;
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_38e201a94f1ead6275cfb8116ae5177e_,Windows::Foundation::IEventHandler<IInspectable *>>(
           &v6,
           v8,
           a1);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
      v8,
      v4);
  }
  return v3;
}
