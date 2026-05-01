/*
 * XREFs of ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800010C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000159C (-Remove@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::remove_AppMemoryUsageLimitChanging(
        Windows::System::CMemoryManager *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this,
           a2.value);
}
