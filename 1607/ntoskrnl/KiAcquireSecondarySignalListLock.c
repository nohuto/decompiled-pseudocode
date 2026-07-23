/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x1401D5898
 * Callers:
 *     KiInsertSecondarySignalList @ 0x1401D5B4C (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x1401D5CD4 (KiProcessSecondarySignalList.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAcquireSecondarySignalListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KiSecondarySignalListLock);
}
