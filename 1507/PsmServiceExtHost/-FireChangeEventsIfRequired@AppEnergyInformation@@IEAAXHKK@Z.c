/*
 * XREFs of ?FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z @ 0x18004935C
 * Callers:
 *     ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x18004B1F8 (-OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z.c)
 * Callees:
 *     ?FireAppEnergyChangeNotificationsIfRequired@AppEnergyInformation@@IEAAXHKK@Z @ 0x1800492A8 (-FireAppEnergyChangeNotificationsIfRequired@AppEnergyInformation@@IEAAXHKK@Z.c)
 *     ?RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z @ 0x18004B73C (-RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z.c)
 *     ?SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUsageLevel@@@Z @ 0x18004C5C8 (-SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUs.c)
 */

void __fastcall AppEnergyInformation::FireChangeEventsIfRequired(
        AppEnergyInformation *this,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v8; // edx

  if ( !a2 )
  {
    if ( !*((_DWORD *)this + 72) && a4 >= AppEnergyUsageManager::s_dwBadEnergyLevel )
    {
      *((_DWORD *)this + 72) = 1;
      AppEnergyInformation::SendPackageEnergyStateChangeNotification(this, 1LL);
    }
    if ( *((_DWORD *)this + 72) && a4 <= AppEnergyUsageManager::s_dwEnergyDecreaseEventLevel )
    {
      *((_DWORD *)this + 72) = 0;
      AppEnergyInformation::SendPackageEnergyStateChangeNotification(this, 0LL);
    }
  }
  AppEnergyInformation::FireAppEnergyChangeNotificationsIfRequired(this, a2, a3, a4);
  if ( !a2 )
  {
    if ( a3 < AppEnergyUsageManager::s_ExcessiveUsageLevel && a4 >= AppEnergyUsageManager::s_ExcessiveUsageLevel )
    {
      v8 = 0;
LABEL_15:
      AppEnergyInformation::RaiseToastNotification(this, v8);
      return;
    }
    if ( a3 < AppEnergyUsageManager::s_NearTerminationUsageLevel
      && a4 >= AppEnergyUsageManager::s_NearTerminationUsageLevel )
    {
      v8 = 1;
      goto LABEL_15;
    }
  }
}
