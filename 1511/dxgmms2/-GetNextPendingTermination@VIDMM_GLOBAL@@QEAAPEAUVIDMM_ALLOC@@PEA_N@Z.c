/*
 * XREFs of ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00116D8
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0079BEC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_ALLOC *__fastcall VIDMM_GLOBAL::GetNextPendingTermination(KSPIN_LOCK *this, bool *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  struct VIDMM_ALLOC *result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 5108, &LockHandle);
  v4 = this + 5109;
  v5 = (_QWORD *)this[5109];
  if ( v5 == v4 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = 0LL;
    *a2 = 0;
  }
  else
  {
    v7 = *v5;
    v8 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v8 != v5 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *a2 = *v4 != (_QWORD)v4;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (struct VIDMM_ALLOC *)(v5 - 25);
  }
  return result;
}
