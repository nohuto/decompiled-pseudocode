/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x1C00378D0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this)
{
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite");
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
}
