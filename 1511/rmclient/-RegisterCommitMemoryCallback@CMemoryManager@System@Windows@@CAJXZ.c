/*
 * XREFs of ?RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ @ 0x180001518
 * Callers:
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180001C90 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180001CE0 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000E830 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 * Callees:
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@UEAAJP6AXXZ0P6AX_K1@Z@Z @ 0x1800017B0 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@UEAAJP6AXXZ0P6AX_K1@Z@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 Windows::System::CMemoryManager::RegisterCommitMemoryCallback(void)
{
  int v0; // ecx
  __int64 (__fastcall *v1)(ModernResourceManagerProxy *__hidden, void (*)(void), void (*)(void), void (*)(unsigned __int64, unsigned __int64)); // rdi
  int v2; // eax
  int v3; // eax

  v0 = 0;
  if ( !Windows::System::CMemoryManager::s_fRegistered )
  {
    if ( Windows::System::CMemoryManager::s_pProxy )
    {
      v1 = *(__int64 (__fastcall **)(ModernResourceManagerProxy *__hidden, void (*)(void), void (*)(void), void (*)(unsigned __int64, unsigned __int64)))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy + 24LL);
      if ( v1 == ModernResourceManagerProxy::RegisterCommitMemoryCallback )
        v2 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(
               Windows::System::CMemoryManager::s_pProxy,
               Windows::System::CMemoryManager::OnCommitLevelIncreasedRoutine,
               Windows::System::CMemoryManager::OnCommitLevelDecreasedRoutine,
               (void (*)(unsigned __int64, unsigned __int64))Windows::System::CMemoryManager::OnCommitLimitChangeRoutine);
      else
        v2 = v1(
               Windows::System::CMemoryManager::s_pProxy,
               Windows::System::CMemoryManager::OnCommitLevelIncreasedRoutine,
               Windows::System::CMemoryManager::OnCommitLevelDecreasedRoutine,
               (void (*)(unsigned __int64, unsigned __int64))Windows::System::CMemoryManager::OnCommitLimitChangeRoutine);
      v0 = v2;
      v3 = Windows::System::CMemoryManager::s_fRegistered;
      if ( v0 >= 0 )
        v3 = 1;
      Windows::System::CMemoryManager::s_fRegistered = v3;
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  return (unsigned int)v0;
}
