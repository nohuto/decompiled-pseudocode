/*
 * XREFs of ?DeleteEnergyUsageWnfStates@AppEnergyInformation@@IEAAXPEAUEnergyNotificationStates@@@Z @ 0x180049254
 * Callers:
 *     ?UnregisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x18004CD08 (-UnregisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AppEnergyInformation::DeleteEnergyUsageWnfStates(
        AppEnergyInformation *this,
        struct EnergyNotificationStates *a2)
{
  if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
  {
    NtDeleteWnfStateName(a2);
    *(_QWORD *)a2 = 0LL;
  }
  if ( *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 3) )
  {
    NtDeleteWnfStateName((char *)a2 + 8);
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
