/*
 * XREFs of KeSetSchedulingGroupWeights @ 0x140121384
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x140243470 (PsSetCpuQuotaInformation.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x140121610 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1401216CC (KiUpdateMinimumWeight.c)
 */

void __fastcall KeSetSchedulingGroupWeights(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1;
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( (_DWORD)v4 )
  {
    v7 = a2;
    v8 = a3 - a2;
    do
    {
      v9 = *(_DWORD *)(*(_QWORD *)v7 + 4LL);
      if ( (v9 & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v7 + 4LL) = v9 & 0xFFFFFFFE;
        if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, 0LL, *(_QWORD *)(*(_QWORD *)v7 + 80LL)) )
          KiAssignSchedulingGroupWeights(1LL, 0LL);
      }
      v10 = *(_QWORD **)v7;
      v11 = *(_QWORD *)(v8 + v7);
      v7 += 8LL;
      *v10 = v11;
      --v4;
    }
    while ( v4 );
  }
  LOBYTE(v6) = 1;
  KiUpdateMinimumWeight(0LL, v6, *(_QWORD *)(*(_QWORD *)a2 + 80LL));
  LOBYTE(v12) = 1;
  KiAssignSchedulingGroupWeights(0LL, v12);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
