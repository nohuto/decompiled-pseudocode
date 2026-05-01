/*
 * XREFs of ?UnregisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x1800538E8
 * Callers:
 *     ?UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x180053840 (-UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageF.c)
 * Callees:
 *     ?DeleteEnergyUsageWnfStates@AppEnergyInformation@@IEAAXPEAUEnergyNotificationStates@@@Z @ 0x180050200 (-DeleteEnergyUsageWnfStates@AppEnergyInformation@@IEAAXPEAUEnergyNotificationStates@@@Z.c)
 *     ?IsValid@EnergyNotificationStates@@QEAA_NXZ @ 0x180051BE8 (-IsValid@EnergyNotificationStates@@QEAA_NXZ.c)
 */

__int64 __fastcall AppEnergyInformation::UnregisterForNotifications(__int64 a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  EnergyNotificationStates *v5; // rcx
  AppEnergyInformation *v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 304);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 304));
  v5 = (EnergyNotificationStates *)(a1 + 48);
  if ( (a2 & 1) == 0 )
    v5 = (EnergyNotificationStates *)(a1 + 68);
  if ( (unsigned __int8)EnergyNotificationStates::IsValid(v5) )
    --*((_DWORD *)v6 + 4);
  if ( !*((_DWORD *)v6 + 4) )
    AppEnergyInformation::DeleteEnergyUsageWnfStates(v6, v6);
  LeaveCriticalSection(v2);
  return 0LL;
}
