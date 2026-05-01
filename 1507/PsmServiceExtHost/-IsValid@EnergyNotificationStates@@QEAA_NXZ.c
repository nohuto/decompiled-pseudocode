/*
 * XREFs of ?IsValid@EnergyNotificationStates@@QEAA_NXZ @ 0x18004AD70
 * Callers:
 *     ?RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@1@Z @ 0x18004BC50 (-RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_IN.c)
 *     ?UnregisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x18004CD08 (-UnregisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z.c)
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
