/*
 * XREFs of ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000E920
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000E390 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::remove_AppMemoryUsageDecreased(
        Windows::System::CMemoryManager *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (RTL_SRWLOCK *)&Windows::System::CMemoryManager::s_levelDecreasedEvent,
           (struct IUnknown *)a2.value);
}
