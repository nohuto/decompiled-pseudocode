/*
 * XREFs of ??0HistoricalEnergyTracker@@QEAA@XZ @ 0x18004FA7C
 * Callers:
 *     ??0AppEnergyInformation@@QEAA@XZ @ 0x18004F958 (--0AppEnergyInformation@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HistoricalEnergyTracker *__fastcall HistoricalEnergyTracker::HistoricalEnergyTracker(HistoricalEnergyTracker *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  return this;
}
