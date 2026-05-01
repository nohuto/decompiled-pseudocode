/*
 * XREFs of ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800098C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800095E4 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::remove_AppMemoryUsageIncreased(
        Windows::System::CMemoryManager *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (char *)&Windows::System::CMemoryManager::s_levelIncreasedEvent,
           (struct IUnknown *)a2.value);
}
