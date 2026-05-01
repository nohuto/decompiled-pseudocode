/*
 * XREFs of ?ResetTotalEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x180053004
 * Callers:
 *     ?ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x180053060 (-ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z.c)
 * Callees:
 *     ?ResetTotalEnergyUsage@HistoricalEnergyTracker@@QEAAXXZ @ 0x180053108 (-ResetTotalEnergyUsage@HistoricalEnergyTracker@@QEAAXXZ.c)
 */

__int64 __fastcall AppEnergyInformation::ResetTotalEnergyUsage(__int64 a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  HistoricalEnergyTracker *v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 304);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 304));
  v5 = (HistoricalEnergyTracker *)(a1 + 160);
  if ( (a2 & 1) == 0 )
    v5 = (HistoricalEnergyTracker *)(a1 + 88);
  HistoricalEnergyTracker::ResetTotalEnergyUsage(v5);
  LeaveCriticalSection(v2);
  return 0LL;
}
