/*
 * XREFs of ??1?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAA@XZ @ 0x180001980
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x1800070C0 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_levelDecreasedEvent__.c)
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x1800070D0 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_levelIncreasedEvent__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
