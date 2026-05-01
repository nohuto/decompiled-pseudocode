/*
 * XREFs of ??0?$GitEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAA@XZ @ 0x180004BA0
 * Callers:
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180001080 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 * Callees:
 *     <none>
 */

__int64 *Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GitEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>()
{
  Windows::System::CMemoryManager::s_limitChangeEvent = 0LL;
  InitializeSRWLock(&SRWLock);
  InitializeSRWLock(&stru_1800166C0);
  return &Windows::System::CMemoryManager::s_limitChangeEvent;
}
