/*
 * XREFs of ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C0041BBC
 * Callers:
 *     ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x1C004FB14 (-SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z.c)
 *     ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004FB3C (-ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z @ 0x1C00666F0 (-Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C007A210 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(__int64 a1, int a2)
{
  struct _KEVENT *v4; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 24, 0LL);
  *(_QWORD *)(a1 + 32) = KeGetCurrentThread();
  if ( *(_DWORD *)(a1 + 20) != a2 )
  {
    v4 = (struct _KEVENT *)(*(_QWORD *)(a1 + 120) + 24LL);
    *(_DWORD *)(a1 + 20) = a2;
    KeSetEvent(v4, 0, 0);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 120) + 48LL), Executive, 0, 0, 0LL);
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 24, 0LL);
  KeLeaveCriticalRegion();
}
