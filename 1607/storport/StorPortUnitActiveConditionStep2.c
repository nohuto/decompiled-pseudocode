/*
 * XREFs of StorPortUnitActiveConditionStep2 @ 0x1C0003468
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C00033F0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00034EC (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidRestartIoQueue @ 0x1C0003964 (RaidRestartIoQueue.c)
 *     Template_pqcccq @ 0x1C0032840 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitActiveConditionStep2(__int64 a1, char a2)
{
  int v4; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1456) + 88LL), &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) |= 2u;
  StorPortUnitFlushActivePendingRequestQueue(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(a1 + 439) )
  {
    *(_BYTE *)(a1 + 439) = 0;
    RaidRestartIoQueue(a1);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
      Template_pqcccq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitActiveConditionStop,
        v4,
        **(_QWORD **)(a1 + 1456),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2);
  }
}
