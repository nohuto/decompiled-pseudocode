/*
 * XREFs of ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x18000CC14
 * Callers:
 *     ?OnCommitLevelDecreasedRoutine@CMemoryManager@System@Windows@@CAXXZ @ 0x18000E050 (-OnCommitLevelDecreasedRoutine@CMemoryManager@System@Windows@@CAXXZ.c)
 *     ?OnCommitLevelIncreasedRoutine@CMemoryManager@System@Windows@@CAXXZ @ 0x18000E070 (-OnCommitLevelIncreasedRoutine@CMemoryManager@System@Windows@@CAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18000BFF4 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ??$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_38e201a94f1ead6275cfb8116ae5177e_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000CD34 (--$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000D2D4 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(
        RTL_SRWLOCK *a1,
        RTL_SRWLOCK *a2)
{
  unsigned int v3; // edi
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF
  volatile signed __int32 *v7; // [rsp+60h] [rbp+18h] BYREF

  SRWLock = a2;
  v3 = 0;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 1, &SRWLock);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, a1);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v7 )
  {
    v5 = 0LL;
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_38e201a94f1ead6275cfb8116ae5177e_,Windows::Foundation::IEventHandler<IInspectable *>>(
           &v5,
           v7,
           a1);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
  }
  return v3;
}
