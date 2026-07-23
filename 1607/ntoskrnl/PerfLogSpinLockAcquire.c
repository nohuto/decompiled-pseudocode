/*
 * XREFs of PerfLogSpinLockAcquire @ 0x1402284A4
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401D38C0 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1401D39FC (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x1401D3BD4 (KiTryToAcquireSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DD0C (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DD94 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14022DE28 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     <none>
 */

char __fastcall PerfLogSpinLockAcquire(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // r10
  unsigned __int8 v9; // r11
  __int64 v10; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = (__int64)CurrentPrcb->EtwSupport + 2560;
  v9 = *((_BYTE *)CurrentPrcb->EtwSupport + 2816);
  if ( v9 < 8u )
  {
    *((_BYTE *)CurrentPrcb->EtwSupport + 2816) = v9 + 1;
    v10 = 32LL * v9;
    *(_DWORD *)(v10 + v8 + 24) = a5;
    LOBYTE(CurrentPrcb) = a6;
    *(_BYTE *)(v10 + v8 + 28) = a6;
    *(_QWORD *)(v10 + v8) = a2;
    *(_DWORD *)(v10 + v8 + 20) = a4;
    *(_QWORD *)(v10 + v8 + 8) = a1;
    *(_DWORD *)(v10 + v8 + 16) = a3;
  }
  else
  {
    ++*((_DWORD *)CurrentPrcb->EtwSupport + 705);
  }
  return (char)CurrentPrcb;
}
