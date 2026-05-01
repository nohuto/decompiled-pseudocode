/*
 * XREFs of ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000DD00
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ @ 0x1800063E4 (-RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180006510 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000CA68 (-Add@-$GitEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::add_AppMemoryUsageLimitChanging(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
  {
    result = Windows::System::CMemoryManager::RegisterCommitMemoryCallback();
    if ( (int)result >= 0 )
      return Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
               v6,
               a2,
               a3);
  }
  return result;
}
