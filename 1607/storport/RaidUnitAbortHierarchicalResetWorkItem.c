/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0036D28
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C00094B0 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 *     StorIsEventQueueEmpty @ 0x1C0038F50 (StorIsEventQueueEmpty.c)
 *     Template_qcj @ 0x1C0039150 (Template_qcj.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1504), &LockHandle);
  *(_QWORD *)(a1 + 1480) = 0LL;
  *(_DWORD *)(a1 + 1488) = 0;
  ++*(_DWORD *)(a1 + 1496);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 2552)
    || (result = StorIsEventQueueEmpty(*(_QWORD *)(a1 + 208)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1004) )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x40000000) != 0 )
      Template_qcj(
        *(_QWORD *)(a1 + 24),
        v2,
        v3,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        a1 + 1688);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  }
  return result;
}
