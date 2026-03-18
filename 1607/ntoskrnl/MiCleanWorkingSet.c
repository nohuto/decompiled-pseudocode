/*
 * XREFs of MiCleanWorkingSet @ 0x14010159C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiRemoveWorkingSetPages @ 0x1400FE750 (MiRemoveWorkingSetPages.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  ULONG_PTR v1; // rsi
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  KIRQL v5; // bp
  LONG *v6; // rbx
  struct _SLIST_ENTRY *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx

  v1 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v5 = v4;
  *(_BYTE *)(v1 + 187) |= 1u;
  MiRemoveWorkingSetPages(v1, v4);
  *(_QWORD *)(a1 + 920) -= 5LL;
  v6 = MiGetSharedVm(v1);
  v7 = (struct _SLIST_ENTRY *)*((_QWORD *)v6 + 5);
  if ( v7 )
  {
    MiEmptyPageAccessLog(v7);
    *((_QWORD *)v6 + 5) = 0LL;
  }
  v8 = *(_QWORD *)(v1 + 104);
  MiChargeWsles(v1, 8 - v8, 1);
  LOBYTE(v9) = v5;
  MiUnlockWorkingSetExclusive(v1, v9);
  return v8 - 8;
}
