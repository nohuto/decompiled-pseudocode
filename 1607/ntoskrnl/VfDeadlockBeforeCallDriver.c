/*
 * XREFs of VfDeadlockBeforeCallDriver @ 0x140713C50
 * Callers:
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 * Callees:
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1402237C0 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 *     ViLowerIrql @ 0x140223A70 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140223A80 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddThread @ 0x140714984 (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x140714A40 (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1407151C0 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140715474 (ViDeadlockFree.c)
 *     ViDeadlockSearchThread @ 0x140715CB0 (ViDeadlockSearchThread.c)
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
