/*
 * XREFs of ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180001C90
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ @ 0x180001518 (-RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x1800015A0 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180001DA4 (-Add@-$GitEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::add_AppMemoryUsageDecreased(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
  {
    result = Windows::System::CMemoryManager::RegisterCommitMemoryCallback();
    if ( (int)result >= 0 )
      return Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
               &Windows::System::CMemoryManager::s_levelDecreasedEvent,
               a2,
               a3);
  }
  return result;
}
