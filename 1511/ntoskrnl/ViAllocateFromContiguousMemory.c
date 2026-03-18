/*
 * XREFs of ViAllocateFromContiguousMemory @ 0x1406BC6C4
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x1406BC758 (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViAllocateFromContiguousMemory(__int64 a1, ULONG a2)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // bp
  ULONG ClearBitsAndSet; // eax

  v2 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 264) )
    return 0LL;
  v5 = (KSPIN_LOCK *)(a1 + 280);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 296), 1u, a2);
  if ( ClearBitsAndSet != -1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * ClearBitsAndSet);
  KeReleaseSpinLock(v5, v6);
  return v2;
}
