/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x1406CE024
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x14020C200 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14020C210 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1406CD3A4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1406CD3D8 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x1406CDEC8 (ViDeadlockSearchThread.c)
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
