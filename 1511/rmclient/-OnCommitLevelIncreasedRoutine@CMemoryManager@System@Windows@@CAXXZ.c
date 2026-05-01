/*
 * XREFs of ?OnCommitLevelIncreasedRoutine@CMemoryManager@System@Windows@@CAXXZ @ 0x18000E070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelIncreasedRoutine(__int64 a1, RTL_SRWLOCK *a2)
{
  Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(
    (RTL_SRWLOCK *)&Windows::System::CMemoryManager::s_levelIncreasedEvent,
    a2);
}
