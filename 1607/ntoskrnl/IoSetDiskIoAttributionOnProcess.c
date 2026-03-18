/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x14007641C
 * Callers:
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x1404EF41C (PspSetJobIoAttributionProcessCallback.c)
 *     PspEstablishJobHierarchy @ 0x1404F2FFC (PspEstablishJobHierarchy.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall IoSetDiskIoAttributionOnProcess(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rsi

  if ( *(_QWORD *)(a2 + 1952) != a1 )
  {
    if ( a1 && _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32)) <= 1 )
      __fastfail(0xEu);
    v4 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
    v5 = *(_QWORD *)(a2 + 1952);
    *(_QWORD *)(a2 + 1952) = a1;
    ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v4);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
  }
}
