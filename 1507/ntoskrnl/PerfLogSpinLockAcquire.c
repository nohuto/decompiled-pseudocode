/*
 * XREFs of PerfLogSpinLockAcquire @ 0x14025FBDC
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140200CD0 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140201108 (KiTryToAcquireSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264254 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402642DC (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140264370 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
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
