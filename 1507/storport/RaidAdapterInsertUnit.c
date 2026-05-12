/*
 * XREFs of RaidAdapterInsertUnit @ 0x1C000CEDC
 * Callers:
 *     RaidUnitConvertToNormalUnit @ 0x1C0009EA0 (RaidUnitConvertToNormalUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C000A1DC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C000CC40 (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00057D8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000595C (RaidAdapterAcquireInterruptLock.c)
 *     StorInsertDictionary @ 0x1C000CF68 (StorInsertDictionary.c)
 */

void __fastcall RaidAdapterInsertUnit(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rcx
  KIRQL v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v4 = *(_QWORD **)(a1 + 128);
  v5 = a2 + 48;
  *(_QWORD *)(a2 + 48) = a1 + 120;
  *(_QWORD *)(a2 + 56) = v4;
  if ( *v4 != a1 + 120 )
    __fastfail(3u);
  *v4 = v5;
  *(_QWORD *)(a1 + 128) = v5;
  ++*(_DWORD *)(a1 + 136);
  v6 = RaidAdapterAcquireInterruptLock(a1);
  StorInsertDictionary(a1 + 144, a2 + 64);
  RaidAdapterReleaseInterruptLock(a1, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
