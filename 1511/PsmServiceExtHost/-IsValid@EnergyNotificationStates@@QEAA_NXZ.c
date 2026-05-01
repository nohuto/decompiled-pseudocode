/*
 * XREFs of ?IsValid@EnergyNotificationStates@@QEAA_NXZ @ 0x180051BE8
 * Callers:
 *     ?RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800529E0 (-RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_IN.c)
 *     ?UnregisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x1800538E8 (-UnregisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnergyNotificationStates::IsValid(EnergyNotificationStates *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)this || *((_DWORD *)this + 1)) && (*((_DWORD *)this + 2) || *((_DWORD *)this + 3)) )
    return 1LL;
  return result;
}
