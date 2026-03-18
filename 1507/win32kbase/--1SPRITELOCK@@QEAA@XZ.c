/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x1C00331E0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00B8D18 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, a3);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
}
