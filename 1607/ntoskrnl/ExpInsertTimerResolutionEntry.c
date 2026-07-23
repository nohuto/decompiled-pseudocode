/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x1400B3054
 * Callers:
 *     NtSetTimerResolution @ 0x1403EB304 (NtSetTimerResolution.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  _QWORD *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = ExpTimerResolutionListHead;
  v4 = (_QWORD *)(a1 + 1648);
  if ( *(__int64 **)(ExpTimerResolutionListHead + 8) != &ExpTimerResolutionListHead )
    __fastfail(3u);
  *v4 = ExpTimerResolutionListHead;
  v4[1] = &ExpTimerResolutionListHead;
  *(_QWORD *)(v3 + 8) = v4;
  ExpTimerResolutionListHead = (__int64)v4;
  KeReleaseSpinLock(&ExpKernelResolutionLock, v2);
}
