/*
 * XREFs of ??1?$GitEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAA@XZ @ 0x1800026D0
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180009950 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 * Callees:
 *     <none>
 */

__int64 Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~GitEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>()
{
  __int64 result; // rax

  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    Windows::System::CMemoryManager::s_limitChangeEvent = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
  }
  return result;
}
