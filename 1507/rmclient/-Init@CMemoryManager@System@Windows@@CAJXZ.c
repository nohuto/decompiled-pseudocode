/*
 * XREFs of ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180006510
 * Callers:
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180003850 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800038A0 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000DD00 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x18000DDD0 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIModernResourceManagerProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002870 (-InternalRelease@-$ComPtr@UIModernResourceManagerProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateModernResourceManagerProxy@@YAJPEAPEAUIModernResourceManagerProxy@@@Z @ 0x180006560 (-CreateModernResourceManagerProxy@@YAJPEAPEAUIModernResourceManagerProxy@@@Z.c)
 */

__int64 Windows::System::CMemoryManager::Init(void)
{
  int ModernResourceManagerProxy; // ebx

  ModernResourceManagerProxy = 0;
  if ( !Windows::System::CMemoryManager::s_pProxy )
  {
    Microsoft::WRL::ComPtr<IModernResourceManagerProxy>::InternalRelease((__int64 *)&Windows::System::CMemoryManager::s_pProxy);
    ModernResourceManagerProxy = CreateModernResourceManagerProxy(&Windows::System::CMemoryManager::s_pProxy);
    if ( ModernResourceManagerProxy < 0 )
      Microsoft::WRL::ComPtr<IModernResourceManagerProxy>::InternalRelease((__int64 *)&Windows::System::CMemoryManager::s_pProxy);
  }
  return (unsigned int)ModernResourceManagerProxy;
}
