/*
 * XREFs of ??1CMmcssTask@@QEAA@XZ @ 0x1801045A0
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801006C8 (--1CComposition@@MEAA@XZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180105140 (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x18013F134 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x18013F42C (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801045C4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CMmcssTask::~CMmcssTask(CMmcssTask *this)
{
  CMmcssTask::UnloadRuntime(this);
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)this);
}
