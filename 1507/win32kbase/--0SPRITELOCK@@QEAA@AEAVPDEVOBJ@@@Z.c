/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0033210
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00B8D18 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0034490 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct _ERESOURCE *v7; // rbx

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || (v6 = *ThreadWin32Thread) == 0
    || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(v6 + 104) && !*(_DWORD *)(v6 + 108) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 96LL;
    v7 = ghsemSprite;
    if ( ghsemSprite )
    {
      PsEnterPriorityRegion(v5);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
      LODWORD(v7) = (_DWORD)ghsemSprite;
    }
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)v7, 5);
  }
  return this;
}
