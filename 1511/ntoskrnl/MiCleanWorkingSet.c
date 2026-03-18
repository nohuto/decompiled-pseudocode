/*
 * XREFs of MiCleanWorkingSet @ 0x14001C2D0
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  ULONG_PTR v1; // rdi
  KIRQL v3; // al
  KIRQL v4; // si
  void *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx

  v1 = a1 + 1280;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  *(_BYTE *)(a1 + 1499) |= 1u;
  v4 = v3;
  MiRemoveWorkingSetPages(v1);
  v5 = *(void **)(a1 + 1296);
  *(_QWORD *)(a1 + 920) -= 5LL;
  if ( v5 )
  {
    MiEmptyPageAccessLog(v5);
    *(_QWORD *)(a1 + 1296) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 1376);
  MiChargeWsles(v1);
  LOBYTE(v7) = v4;
  MiUnlockWorkingSetExclusive(v1, v7);
  return v6 - 8;
}
