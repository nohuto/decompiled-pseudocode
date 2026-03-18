/*
 * XREFs of KeSetSchedulingGroupWeights @ 0x1400C3D64
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1401F50E0 (PsSetCpuQuotaInformation.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400C3F18 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400C3FE0 (KiUpdateMinimumWeight.c)
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
          KiAssignSchedulingGroupWeights(1LL, 0LL, *(_QWORD *)(*(_QWORD *)v7 + 80LL));
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
  KiAssignSchedulingGroupWeights(0LL, v12, *(_QWORD *)(*(_QWORD *)a2 + 80LL));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
