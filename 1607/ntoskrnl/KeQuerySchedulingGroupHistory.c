/*
 * XREFs of KeQuerySchedulingGroupHistory @ 0x140076A28
 * Callers:
 *     PspQueryRateControlHistory @ 0x14046804C (PspQueryRateControlHistory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall KeQuerySchedulingGroupHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rax
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r8
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v8 = KeNumberProcessors_0;
  *a2 = 0LL;
  if ( v8 )
  {
    v9 = (__int64 *)(a1 + 176);
    v10 = v8;
    do
    {
      v11 = *v9;
      v9 += 53;
      *a2 |= v11;
      --v10;
    }
    while ( v10 );
  }
  *a3 = PsDfssGenerationLengthMS;
  v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v13 = (unsigned int)*a3;
  v14 = v12;
  v15 = 1000 * (v12.QuadPart - *(_QWORD *)(a1 + 24));
  *(LARGE_INTEGER *)(a1 + 24) = v14;
  *a4 = v15 / PerformanceFrequency.QuadPart / v13;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
