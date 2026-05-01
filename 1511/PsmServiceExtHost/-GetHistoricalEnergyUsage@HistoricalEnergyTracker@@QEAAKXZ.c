/*
 * XREFs of ?GetHistoricalEnergyUsage@HistoricalEnergyTracker@@QEAAKXZ @ 0x1800509A0
 * Callers:
 *     ?GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180050694 (-GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?IsGoodEnergyState@AppEnergyInformation@@QEAAHXZ @ 0x180051B98 (-IsGoodEnergyState@AppEnergyInformation@@QEAAHXZ.c)
 *     ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x180051F8C (-OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HistoricalEnergyTracker::GetHistoricalEnergyUsage(HistoricalEnergyTracker *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  HistoricalEnergyTracker *v2; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v2 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  LODWORD(v2) = *((_DWORD *)v2 + 1);
  LeaveCriticalSection(v1);
  return (unsigned int)v2;
}
