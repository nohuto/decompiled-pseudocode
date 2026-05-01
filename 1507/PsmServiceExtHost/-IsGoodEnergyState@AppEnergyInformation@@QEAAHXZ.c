/*
 * XREFs of ?IsGoodEnergyState@AppEnergyInformation@@QEAAHXZ @ 0x18004AD20
 * Callers:
 *     ?IsGoodEnergyState@AppEnergyUsageManager@@UEAAHPEBG@Z @ 0x1800023D0 (-IsGoodEnergyState@AppEnergyUsageManager@@UEAAHPEBG@Z.c)
 * Callees:
 *     ?GetHistoricalEnergyUsage@HistoricalEnergyTracker@@QEAAKXZ @ 0x180049A20 (-GetHistoricalEnergyUsage@HistoricalEnergyTracker@@QEAAKXZ.c)
 */

__int64 __fastcall AppEnergyInformation::IsGoodEnergyState(AppEnergyInformation *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  AppEnergyInformation *v2; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 304);
  v2 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  LODWORD(v2) = (unsigned int)HistoricalEnergyTracker::GetHistoricalEnergyUsage((AppEnergyInformation *)((char *)v2 + 88)) < AppEnergyUsageManager::s_dwBadEnergyLevel;
  LeaveCriticalSection(v1);
  return (unsigned int)v2;
}
