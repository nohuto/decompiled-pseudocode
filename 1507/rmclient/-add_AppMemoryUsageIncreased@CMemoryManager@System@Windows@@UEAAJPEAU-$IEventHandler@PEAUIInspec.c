/*
 * XREFs of ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800038A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000630C (-Add@-$GitEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 *     ?RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ @ 0x1800063E4 (-RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180006510 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::add_AppMemoryUsageIncreased(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
  {
    result = Windows::System::CMemoryManager::RegisterCommitMemoryCallback();
    if ( (int)result >= 0 )
      return Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
               &Windows::System::CMemoryManager::s_levelIncreasedEvent,
               a2,
               a3);
  }
  return result;
}
