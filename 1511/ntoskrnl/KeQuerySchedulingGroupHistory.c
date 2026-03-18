/*
 * XREFs of KeQuerySchedulingGroupHistory @ 0x140022014
 * Callers:
 *     PspQueryRateControlHistory @ 0x1403EBB78 (PspQueryRateControlHistory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall KeQuerySchedulingGroupHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rax
  LARGE_INTEGER v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  *a2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v8 = (__int64 *)(a1 + 176);
    v9 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v10 = *v8;
      v8 += 51;
      *a2 |= v10;
      --v9;
    }
    while ( v9 );
  }
  *a3 = PsDfssGenerationLengthMS;
  v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
  *a4 = (unsigned __int64)(1000 * (v11.QuadPart - *(_QWORD *)(a1 + 24)))
      / PerformanceFrequency.QuadPart
      / (unsigned int)*a3;
  *(LARGE_INTEGER *)(a1 + 24) = v11;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
