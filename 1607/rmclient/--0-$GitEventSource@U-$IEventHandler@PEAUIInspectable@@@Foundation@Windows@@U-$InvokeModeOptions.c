/*
 * XREFs of ??0?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAA@XZ @ 0x1800028C0
 * Callers:
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x180001040 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_levelDecreasedEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x180001060 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_levelIncreasedEvent__.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        RTL_SRWLOCK *a1)
{
  a1->Ptr = 0LL;
  InitializeSRWLock(a1 + 1);
  InitializeSRWLock(a1 + 2);
  return a1;
}
