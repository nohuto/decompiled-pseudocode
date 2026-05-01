/*
 * XREFs of ?OnCommitLevelDecreasedRoutine@CMemoryManager@System@Windows@@CAXXZ @ 0x18000E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelDecreasedRoutine(__int64 a1, RTL_SRWLOCK *a2)
{
  Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(
    (RTL_SRWLOCK *)&Windows::System::CMemoryManager::s_levelDecreasedEvent,
    a2);
}
