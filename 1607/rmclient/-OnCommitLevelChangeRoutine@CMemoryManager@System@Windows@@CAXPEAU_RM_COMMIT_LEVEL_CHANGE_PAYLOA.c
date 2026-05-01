/*
 * XREFs of ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x180002830
 * Callers:
 *     ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800027B0 (-CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001B00 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x180007E1C (--$InvokeAll@$$T$$T@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$Inv.c)
 *     ??$InvokeDelegates@V_lambda_c6ae080ef583bc6f8e5f5c99b68d23f9_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_c6ae080ef583bc6f8e5f5c99b68d23f9_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800085D0 (--$InvokeDelegates@V_lambda_c6ae080ef583bc6f8e5f5c99b68d23f9_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180009238 (-InternalAddRef@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@De.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a1)
{
  __int64 v1; // rbx
  volatile int *v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)a1 + 1) <= *(_DWORD *)a1 )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(&Windows::System::CMemoryManager::s_levelDecreasedEvent);
  }
  else
  {
    v1 = 0LL;
    AcquireSRWLockExclusive(&stru_1800166D8);
    if ( Windows::System::CMemoryManager::s_levelIncreasedEvent )
    {
      v1 = Windows::System::CMemoryManager::s_levelIncreasedEvent;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::InternalAddRef(Windows::System::CMemoryManager::s_levelIncreasedEvent);
    }
    ReleaseSRWLockExclusive(&stru_1800166D8);
    if ( v1 )
    {
      v3 = 0LL;
      Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_c6ae080ef583bc6f8e5f5c99b68d23f9_,Windows::Foundation::IEventHandler<IInspectable *>>(
        &v3,
        v1,
        &Windows::System::CMemoryManager::s_levelIncreasedEvent);
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        v1,
        v2);
    }
  }
}
