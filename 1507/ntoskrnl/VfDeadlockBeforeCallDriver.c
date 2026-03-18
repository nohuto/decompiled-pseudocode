/*
 * XREFs of VfDeadlockBeforeCallDriver @ 0x14074F508
 * Callers:
 *     VfBeforeCallDriver @ 0x1407410A4 (VfBeforeCallDriver.c)
 * Callees:
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14025B3F8 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 *     ViLowerIrql @ 0x14025B4A0 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14025B4B0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddThread @ 0x140750434 (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x1407504EC (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x140750C40 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140750D24 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14075101C (ViDeadlockFree.c)
 *     ViDeadlockSearchThread @ 0x140751858 (ViDeadlockSearchThread.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

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
    if ( v5 || (v5 = 1, (unsigned int)ViDeadlockDetectionTryConvertSharedToExclusive(v11, v10, v12, v13)) )
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
