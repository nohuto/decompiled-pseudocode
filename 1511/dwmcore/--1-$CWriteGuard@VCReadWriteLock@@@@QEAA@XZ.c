/*
 * XREFs of ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x18001D7C8
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A6560 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800B20A0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 */

void __fastcall CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(CReadWriteLock **a1)
{
  CReadWriteLock *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    CReadWriteLock::Leave(v2);
    *a1 = 0LL;
  }
}
