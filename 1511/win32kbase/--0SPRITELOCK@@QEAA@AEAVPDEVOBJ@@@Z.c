/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0037900
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0037EA0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2, __int64 a3)
{
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // rbx

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( !ThreadWin32Thread
    || (v7 = *ThreadWin32Thread) == 0
    || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(v7 + 104) && !*(_DWORD *)(v7 + 108) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 96LL;
    v8 = ghsemSprite;
    if ( ghsemSprite )
    {
      PsEnterPriorityRegion(v6);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
      v8 = ghsemSprite;
    }
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", v8, 5LL);
  }
  return this;
}
