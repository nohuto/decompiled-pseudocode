/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x140715E0C
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x140223A70 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140223A80 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1407151C0 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x140715CB0 (ViDeadlockSearchThread.c)
 */

_BOOL8 ViIsThreadInsidePagingCodePaths()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(0);
  v3 = ViDeadlockSearchThread((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  ViDeadlockDetectionUnlock(0);
  ViLowerIrql(v2);
  return v1;
}
