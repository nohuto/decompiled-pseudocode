/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000D8E0
 * Callers:
 *     ??$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_38e201a94f1ead6275cfb8116ae5177e_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000C214 (--$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000DEF0 (-remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000DF10 (-remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180006240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006280 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000B304 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x18000B4D8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockExclusiveTraits@Handle.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000C468 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        char *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rbx
  volatile int *v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  char v7; // r15
  __int64 v8; // r14
  RTL_SRWLOCK *v9; // r14
  struct IUnknown **v10; // rdi
  void **v11; // r12
  PSRWLOCK v13[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v14; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+78h] [rbp+48h]
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+58h] BYREF

  v15 = a2;
  v3 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 16), (__int64)&SRWLock);
  v5 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v6 = 0;
LABEL_9:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v6;
  }
  v7 = 0;
  v8 = *(_QWORD *)(v5 + 24) - *(_QWORD *)(v5 + 16);
  v14 = 0LL;
  v9 = (RTL_SRWLOCK *)((v8 >> 3) - 1);
  v13[0] = v9;
  if ( v9 )
  {
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           &v14,
           (unsigned __int64 *)v13);
    if ( v6 < 0 )
    {
      if ( v14 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
          (__int64)v14,
          v4);
      goto LABEL_9;
    }
    v10 = *(struct IUnknown ***)(*(_QWORD *)a1 + 16LL);
    v11 = *(void ***)(*(_QWORD *)a1 + 32LL);
    if ( v10 == *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) )
      goto LABEL_22;
    do
    {
      if ( v7 || v15 != *v10 )
      {
        if ( !v9 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v14, *v10, *v11++);
        v9 = (RTL_SRWLOCK *)((char *)v9 - 1);
      }
      else
      {
        v7 = 1;
      }
      ++v10;
    }
    while ( v10 != *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) );
    if ( !v7 )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( **(struct IUnknown ***)(v5 + 16) == v15 )
  {
LABEL_19:
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 8), (__int64)v13);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v14);
    if ( v13[0] )
      ReleaseSRWLockExclusive(v13[0]);
    v3 = v16;
LABEL_22:
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v14,
        v4);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = 0;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
      v3,
      v4);
  return (unsigned int)v6;
}
