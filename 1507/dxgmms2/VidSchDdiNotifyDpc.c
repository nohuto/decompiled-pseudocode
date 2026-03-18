/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C0002090
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyDpcWorker @ 0x1C000211C (VidSchDdiNotifyDpcWorker.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 */

void __fastcall VidSchDdiNotifyDpc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 DxgAdapter; // rax
  __int64 v7; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v7 = DxgAdapter;
    v4 = DxgAdapter ? *(_QWORD *)(*(_QWORD *)(DxgAdapter + 1984) + 384LL) : 0LL;
    if ( v4 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1896), &LockHandle);
      VidSchDdiNotifyDpcWorker(*(_QWORD *)(v7 + 1984), 1LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v4, &EventProfilerExit, v5, 5043LL);
}
