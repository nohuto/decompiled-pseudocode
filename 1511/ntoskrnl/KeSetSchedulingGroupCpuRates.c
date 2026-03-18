/*
 * XREFs of KeSetSchedulingGroupCpuRates @ 0x1400C3E74
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400C3F18 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400C3FE0 (KiUpdateMinimumWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400C42BC (KiUpdateCpuTargetByRate.c)
 */

void __fastcall KeSetSchedulingGroupCpuRates(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v6 = *(_DWORD *)(*a2 + 4LL);
  if ( (v6 & 1) == 0 )
  {
    LOBYTE(v5) = 1;
    *(_DWORD *)(*a2 + 4LL) = v6 | 1;
    KiUpdateMinimumWeight(0LL, v5, *(_QWORD *)(*a2 + 80LL));
    KiAssignSchedulingGroupWeights(0LL, 0LL, *(_QWORD *)(*a2 + 80LL));
  }
  LOBYTE(v5) = 1;
  *(_QWORD *)*a2 = *a3;
  KiUpdateCpuTargetByRate(*a2, v5);
  LOBYTE(v7) = 1;
  if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, v7, *(_QWORD *)(*a2 + 80LL)) )
    KiAssignSchedulingGroupWeights(1LL, 0LL, *(_QWORD *)(*a2 + 80LL));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
