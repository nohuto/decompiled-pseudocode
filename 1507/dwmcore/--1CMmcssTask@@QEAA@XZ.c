/*
 * XREFs of ??1CMmcssTask@@QEAA@XZ @ 0x1800E8548
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1800E243C (--1CComposition@@MEAA@XZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1800E91F4 (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x180129228 (--1CInputManager@@MEAA@XZ.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x180129688 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1800E856C (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CMmcssTask::~CMmcssTask(CMmcssTask *this)
{
  CMmcssTask::UnloadRuntime(this);
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)this);
}
