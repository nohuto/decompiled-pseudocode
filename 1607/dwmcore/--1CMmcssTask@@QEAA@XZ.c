/*
 * XREFs of ??1CMmcssTask@@QEAA@XZ @ 0x18011AAC0
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180116584 (--1CComposition@@MEAA@XZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x18011B6BC (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x18016A31C (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x18016A678 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18011AAE4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CMmcssTask::~CMmcssTask(CMmcssTask *this)
{
  CMmcssTask::UnloadRuntime(this);
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)this);
}
