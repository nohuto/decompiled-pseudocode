/*
 * XREFs of KeSetSchedulingGroupCpuRates @ 0x1400A4E10
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A4EB4 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400A4F78 (KiUpdateMinimumWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400A51E8 (KiUpdateCpuTargetByRate.c)
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
    KiUpdateMinimumWeight(0LL, v5, *(_QWORD *)(*a2 + 96LL));
    KiAssignSchedulingGroupWeights(0LL, 0LL);
  }
  LOBYTE(v5) = 1;
  *(_QWORD *)*a2 = *a3;
  KiUpdateCpuTargetByRate(*a2, v5);
  LOBYTE(v7) = 1;
  if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, v7, *(_QWORD *)(*a2 + 96LL)) )
    KiAssignSchedulingGroupWeights(1LL, 0LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
