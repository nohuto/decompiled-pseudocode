/*
 * XREFs of ?ResetTotalEnergyUsage@HistoricalEnergyTracker@@QEAAXXZ @ 0x180053108
 * Callers:
 *     ?ResetTotalEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x180053004 (-ResetTotalEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HistoricalEnergyTracker::ResetTotalEnergyUsage(HistoricalEnergyTracker *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_DWORD *)this = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
