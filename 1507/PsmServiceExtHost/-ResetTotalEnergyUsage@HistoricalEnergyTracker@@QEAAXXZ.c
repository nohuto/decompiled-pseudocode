/*
 * XREFs of ?ResetTotalEnergyUsage@HistoricalEnergyTracker@@QEAAXXZ @ 0x18004C378
 * Callers:
 *     ?ResetTotalEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x18004C274 (-ResetTotalEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HistoricalEnergyTracker::ResetTotalEnergyUsage(HistoricalEnergyTracker *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_DWORD *)this = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
