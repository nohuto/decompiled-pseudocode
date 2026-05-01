/*
 * XREFs of ?UnregisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x18004CD08
 * Callers:
 *     ?UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x18004CC60 (-UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageF.c)
 * Callees:
 *     ?DeleteEnergyUsageWnfStates@AppEnergyInformation@@IEAAXPEAUEnergyNotificationStates@@@Z @ 0x180049254 (-DeleteEnergyUsageWnfStates@AppEnergyInformation@@IEAAXPEAUEnergyNotificationStates@@@Z.c)
 *     ?IsValid@EnergyNotificationStates@@QEAA_NXZ @ 0x18004AD70 (-IsValid@EnergyNotificationStates@@QEAA_NXZ.c)
 */

__int64 __fastcall AppEnergyInformation::UnregisterForNotifications(__int64 a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char v4; // di
  EnergyNotificationStates *v5; // rcx
  AppEnergyInformation *v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 304);
  v4 = a2 & 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 304));
  v5 = (EnergyNotificationStates *)(a1 + 48);
  if ( !v4 )
    v5 = (EnergyNotificationStates *)(a1 + 68);
  if ( (unsigned __int8)EnergyNotificationStates::IsValid(v5) )
    --*((_DWORD *)v6 + 4);
  if ( !*((_DWORD *)v6 + 4) )
    AppEnergyInformation::DeleteEnergyUsageWnfStates(v6, v6);
  LeaveCriticalSection(v2);
  return 0LL;
}
