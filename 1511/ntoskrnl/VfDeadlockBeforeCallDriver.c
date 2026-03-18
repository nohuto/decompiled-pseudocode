/*
 * XREFs of VfDeadlockBeforeCallDriver @ 0x1406CBE74
 * Callers:
 *     VfBeforeCallDriver @ 0x1406BFA50 (VfBeforeCallDriver.c)
 * Callees:
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14020BF50 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 *     ViLowerIrql @ 0x14020C200 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14020C210 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddThread @ 0x1406CCBA8 (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x1406CCC60 (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x1406CD3A4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1406CD3D8 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x1406CD68C (ViDeadlockFree.c)
 *     ViDeadlockSearchThread @ 0x1406CDEC8 (ViDeadlockSearchThread.c)
 */

__int64 __fastcall VfDeadlockBeforeCallDriver(__int64 a1)
{
  unsigned int v1; // esi
  void *v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // edi
  unsigned __int8 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax

  v1 = 0;
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 16) & 2) == 0 )
    return 0LL;
  if ( (unsigned int)KeNumberProcessors_0 > 4 )
    return 0LL;
  if ( !ViDeadlockGlobals )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ViDeadlockDetectionEnabled )
  {
    v2 = (void *)ViDeadlockAllocate(3LL);
    if ( !v2 )
      return 0LL;
  }
  v5 = 0;
  v6 = ViRaiseIrqlToDpcLevel();
  while ( 1 )
  {
    ViDeadlockDetectionLock(v5);
    v9 = ViDeadlockSearchThread(CurrentThread, v7, v8);
    if ( v9 )
      break;
    if ( !ViDeadlockDetectionEnabled )
      goto LABEL_15;
    if ( v5 || (v5 = 1, ViDeadlockDetectionTryConvertSharedToExclusive()) )
    {
      v9 = ViDeadlockAddThread(CurrentThread, v2);
      v2 = 0LL;
      break;
    }
    ViDeadlockDetectionUnlock(0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 44));
  v1 = 1;
LABEL_15:
  ViDeadlockDetectionUnlock(v5);
  ViLowerIrql(v6);
  if ( v2 )
    ViDeadlockFree(v2);
  return v1;
}
