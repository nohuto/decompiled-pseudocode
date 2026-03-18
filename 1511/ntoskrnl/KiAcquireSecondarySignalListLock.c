/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x1401C68FC
 * Callers:
 *     KiInsertSecondarySignalList @ 0x1401C6BB0 (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x1401C6D38 (KiProcessSecondarySignalList.c)
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
