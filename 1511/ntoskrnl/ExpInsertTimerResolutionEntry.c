/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x1400EB51C
 * Callers:
 *     NtSetTimerResolution @ 0x1404B4EBC (NtSetTimerResolution.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  _QWORD *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = ExpTimerResolutionListHead;
  v4 = (_QWORD *)(a1 + 1632);
  *v4 = ExpTimerResolutionListHead;
  v4[1] = &ExpTimerResolutionListHead;
  if ( *(__int64 **)(v3 + 8) != &ExpTimerResolutionListHead )
    __fastfail(3u);
  *(_QWORD *)(v3 + 8) = v4;
  ExpTimerResolutionListHead = (__int64)v4;
  KeReleaseSpinLock(&ExpKernelResolutionLock, v2);
}
